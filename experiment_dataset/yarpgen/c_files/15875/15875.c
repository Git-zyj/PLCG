/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (min((max((arr_8 [i_1] [i_1] [i_2]), (arr_5 [i_0] [i_0] [i_1] [i_1]))), (arr_2 [i_0] [i_0])));
                    var_20 = (((arr_2 [i_0] [i_0]) ? 524287 : (!-1242070988)));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((((((-(arr_5 [i_1] [i_1] [i_1] [i_0]))))) ? (((((0 ? 1 : (arr_5 [i_0] [i_0] [i_1] [i_0])))) ? (min(-1756283770, (arr_0 [i_0]))) : (arr_2 [i_0] [i_2]))) : (((((0 ? (arr_5 [i_0] [i_0] [i_1] [i_2]) : 0))) ? 0 : 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4] [i_4] = (((((1 ? (arr_1 [i_1 + 1]) : ((1 ? (arr_0 [i_0]) : 1))))) ? ((min((arr_5 [i_1 + 1] [i_3] [i_1] [i_1 + 1]), (arr_5 [i_1 - 1] [i_1] [i_1] [i_2])))) : -19));
                                var_21 = (max(var_21, (((!(((46341 ? 1 : 14210009042796632690))))))));
                                var_22 = (min(var_22, ((min((min(268020735333228660, (max(18178723338376322970, 1)))), ((max((arr_6 [i_4] [i_1 - 1] [i_4] [i_3 + 1]), (((arr_5 [i_0] [i_1] [i_0] [i_3]) ? (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : 1))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= ((!(((-var_18 ? var_9 : var_14)))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_24 = (((((arr_20 [i_5] [i_5] [i_6]) ? ((1 ? 1 : (arr_25 [i_5] [i_6] [i_5] [i_5]))) : (((arr_15 [i_8]) ? 60 : (arr_16 [i_5] [i_5]))))) != (((!(arr_21 [i_6] [i_8]))))));
                        var_25 -= 17200804580045620085;
                        var_26 &= ((1 ? ((66 ? ((32592 ? (arr_20 [i_5] [i_5] [i_8]) : 1)) : (arr_25 [i_5] [i_5] [i_5] [i_6]))) : (arr_25 [i_5] [i_5] [i_5] [i_8])));
                    }
                    var_27 = (((((arr_18 [i_5] [i_6] [i_7]) ? (arr_18 [i_5] [i_6] [i_6]) : (arr_18 [i_7] [i_5] [i_5])))) ? (max((arr_25 [i_7] [i_7] [i_7] [i_6]), (((arr_16 [i_5] [i_5]) ? (arr_15 [i_5]) : -1496747464)))) : (((18178723338376322967 != (1 >> 1)))));
                }
            }
        }
    }
    var_28 = (!15);
    #pragma endscop
}
