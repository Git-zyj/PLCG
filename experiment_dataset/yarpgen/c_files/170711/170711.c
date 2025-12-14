/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [1] [i_1] = ((+(min((var_0 / 1), ((max((arr_8 [i_0] [i_0] [i_0]), (arr_6 [7]))))))));
                    arr_10 [i_1] [i_1] [12] = (arr_6 [13]);
                    var_10 *= (!4338348326211661352);
                    arr_11 [i_0] [i_0] [4] [i_0] = (((arr_0 [i_0]) > (max(var_3, ((-(arr_5 [i_0] [i_0] [i_0])))))));
                }
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    var_11 -= -1;
                    var_12 = (max(var_12, (arr_4 [i_3])));

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_13 = (((arr_7 [i_3 - 1]) | (arr_7 [i_3 - 1])));
                        arr_18 [i_0] [1] [i_0] [i_4] [i_0] = var_9;
                        var_14 ^= 87;
                        arr_19 [i_4] [i_4] [12] [i_4] [i_4] |= ((!((min((arr_5 [15] [i_3] [i_3]), 19)))));
                        var_15 = var_7;
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_16 = (arr_20 [i_0] [i_0] [i_1] [i_1] [i_5] [12]);
                        arr_23 [9] [i_1] [i_5] [i_1] [i_1] [i_1] = (((((((var_4 ? (arr_3 [15] [15]) : -24738))) ^ (((arr_3 [i_0] [17]) ? -64 : 470295363694783329)))) ^ (~7037611402996562815)));
                        arr_24 [10] [i_1] [i_3 + 2] [i_5] = ((-((-(arr_15 [i_5 + 4] [i_5] [i_5] [i_5 + 2])))));
                        var_17 *= (~1992263736);
                    }
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_18 = (((arr_22 [1] [0] [18]) / var_3));

                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_19 = (min((~25735), ((((arr_17 [i_0] [i_0] [i_0]) || (arr_22 [i_0] [3] [i_7]))))));
                            var_20 = (min(var_20, (((~(arr_5 [i_0] [i_6] [i_8]))))));
                            var_21 = (541966501 > 33538048);
                            var_22 = (arr_7 [5]);
                        }
                        arr_34 [i_0] [i_1] [i_7] [2] = ((-(max(var_4, var_1))));
                        var_23 = ((292855715219575380 ? ((((((arr_2 [3]) | 255)) ^ (~-105)))) : (1 ^ 6633178339995605546)));
                        var_24 = var_8;
                        var_25 = (!(arr_8 [1] [i_1] [i_6]));
                    }
                }
                arr_35 [i_0] [16] = ((+(((((var_7 ? (arr_25 [i_0] [5] [1]) : var_5))) ? var_4 : -var_8))));
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}
