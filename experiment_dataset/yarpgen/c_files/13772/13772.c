/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(var_19, ((((arr_0 [i_0] [i_0]) % (((arr_1 [i_0] [i_0]) * 28)))))));
        var_20 = 0;
        var_21 += ((((var_9 ? (arr_1 [i_0] [i_0]) : var_8)) == (arr_1 [i_0] [i_0])));
        var_22 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_23 = (((((-(arr_7 [i_1 + 2])))) ? (max((((-127 - 1) ? var_2 : var_12)), (0 % var_13))) : (((arr_8 [i_1] [i_1] [i_1]) ? (arr_10 [i_1 + 4] [i_1] [i_1 + 4]) : (((-127 - 1) ? -1 : 127))))));
                    var_24 = (min(((max(27, (-127 - 1)))), (((arr_9 [i_1 + 3] [i_1 + 2]) / var_3))));
                    arr_12 [i_1] [i_1] [i_1] = -1;
                }
            }
        }
        var_25 = (max(var_25, (((((!(!var_10))))))));
        arr_13 [i_1] [0] |= ((!((min(var_18, (max((arr_11 [i_1] [i_1]), var_9)))))));
        var_26 = (max(var_26, ((max((((arr_6 [i_1 + 4]) + (arr_6 [i_1 + 3]))), (arr_6 [i_1]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_27 = (max(var_27, (min(var_11, (max((-127 - 1), (arr_5 [i_5] [i_1])))))));
                                arr_25 [i_1] [i_4] [i_5] [i_6] [i_1] = ((((min((arr_22 [i_1 + 3] [i_6] [i_1 + 3] [i_1 + 3]), (arr_22 [i_1 + 3] [i_4] [i_1] [i_6])))) ? ((max((arr_6 [i_1 - 2]), (arr_6 [i_7])))) : ((((arr_15 [i_1 + 1] [i_1 - 2] [i_1 + 3]) > (((arr_8 [i_1] [i_4] [i_7]) ? var_12 : var_11)))))));
                                var_28 = (max(((~(((arr_8 [i_1] [i_4] [i_5]) ? -72 : var_18)))), (((arr_4 [i_1]) ? var_14 : (arr_3 [i_1 + 4] [i_4])))));
                            }
                        }
                    }
                    var_29 -= (((((max(var_5, var_13)))) * ((+((max((arr_14 [i_1] [i_4] [i_5]), (arr_18 [i_4]))))))));
                }
            }
        }
    }
    var_30 = (max(var_30, 117));
    var_31 = (min(var_31, (var_17 | 4)));
    #pragma endscop
}
