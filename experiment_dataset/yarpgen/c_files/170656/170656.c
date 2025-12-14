/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_18 = (max((max((arr_7 [i_0] [i_1]), (arr_2 [i_0]))), (((var_4 == (arr_5 [i_0] [19] [19]))))));
                    var_19 = (((((11 ? -8390512455634573359 : 77))) ? ((((((arr_4 [i_0] [i_1] [i_2]) & var_9))))) : (max((((var_2 ? (arr_3 [i_0] [i_1]) : var_2))), (((arr_3 [i_1] [i_1]) ? -126 : -8390512455634573372))))));
                    var_20 += (max(1, (min((min((arr_4 [i_1] [i_1] [22]), (arr_2 [i_0]))), (arr_5 [i_2] [i_1] [i_0])))));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_21 = (((((~14336) ? (arr_6 [i_0]) : (var_4 >= var_5))) < (min((arr_3 [i_0] [6]), ((var_7 ? (arr_2 [i_0]) : var_2))))));
                    var_22 = ((95 ? 2147483647 : -256));
                    arr_11 [i_0] [i_1] [i_1] [i_0] = 571957152676052992;
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_23 *= (arr_10 [i_0] [i_1] [i_4]);
                    var_24 = ((+((((var_9 ? (arr_2 [i_0]) : var_9))))));

                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        var_25 = var_11;
                        arr_17 [i_5] [i_1] [i_1] [i_0] [i_1] [i_0] = ((((((arr_8 [i_5 + 2] [i_5] [i_5 - 1] [i_5 - 3]) ? ((var_0 ? var_7 : -8742)) : 36959))) ? ((min(-863398268, 63))) : (14336 == 9)));
                        var_26 &= ((((((max(33623, var_13))) ? ((max(var_1, (arr_10 [i_0] [i_0] [i_0])))) : var_14)) < (arr_6 [i_5 - 3])));
                        var_27 *= ((((-(max(13743234914156257985, 0)))) / ((min(((14 ? (arr_8 [i_0] [i_1] [7] [i_5]) : 33603)), ((min(-75, 0))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_28 += ((((arr_16 [i_7 - 1] [i_6] [i_4] [i_1] [3] [i_0]) >= (arr_16 [i_0] [1] [1] [i_6] [i_7] [1]))));
                                arr_25 [i_0] [i_0] [i_4] [i_6] [i_7] &= ((((31932 < (~11))) ? 33600 : var_14));
                            }
                        }
                    }
                    var_29 -= var_1;
                }
                var_30 *= (arr_16 [i_1] [i_1] [4] [1] [4] [i_1]);
            }
        }
    }
    var_31 = 31922;
    var_32 = var_4;
    #pragma endscop
}
