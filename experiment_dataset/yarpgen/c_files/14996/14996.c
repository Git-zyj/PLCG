/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min((min(var_5, var_2)), -var_2)) | var_11);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_17 = (65535 ? 1273889496 : 110);
                        var_18 = (arr_10 [i_0] [i_1] [i_0] [i_0] [i_0] [9]);
                        arr_13 [i_0] [i_1] [i_1] = (min((~var_3), var_4));
                        var_19 = ((-var_2 ? (min(var_10, (!0))) : (!4129735427151061673)));
                    }
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        var_20 = (min(((var_14 ? 2147483647 : (arr_7 [i_2]))), (((arr_11 [i_4 + 1] [0] [i_1] [i_4 - 1] [i_4 - 2]) ? (((arr_14 [i_1] [i_2] [i_1] [i_0] [i_1]) * (arr_3 [i_2]))) : (-1 / var_7)))));
                        var_21 = var_13;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] [7] [i_2] [i_1] [i_1] = var_6;
                                var_22 = (min(var_1, (((0 | 6) ? ((min(var_15, 27731))) : (arr_17 [i_1])))));
                            }
                        }
                    }
                    var_23 = ((-(~var_2)));
                    var_24 = (-70 | -2147483630);
                }
            }
        }
    }
    var_25 = (!var_12);
    var_26 = (min(var_2, var_9));
    #pragma endscop
}
