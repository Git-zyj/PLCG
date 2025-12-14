/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 += var_8;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (arr_4 [i_0] [i_0]);
                arr_6 [i_0 + 1] [i_1] = var_3;

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_13 |= ((65524 ? 65524 : (arr_10 [i_0] [i_0] [i_0])));

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        var_14 += 65535;
                        var_15 = 64358;
                        arr_13 [i_0] [i_1] [i_0] [i_3] &= (min((arr_1 [i_1]), (arr_1 [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_16 *= (arr_2 [i_5]);
                                arr_20 [i_0 - 4] [i_0 - 4] [i_1] [i_4] [i_5] = (arr_9 [i_2 - 1]);
                                arr_21 [2] [i_1] [i_2] [i_1] [i_5] = (((arr_11 [i_0 - 1] [i_2 + 2]) ? (((arr_11 [i_5] [i_5]) ? (arr_11 [i_2] [i_1]) : (arr_11 [i_0] [i_0]))) : (((arr_11 [i_0 - 4] [i_4 + 2]) ? (arr_11 [i_1 + 2] [i_1 + 2]) : (arr_11 [i_0 + 1] [i_2])))));
                                var_17 = (min(var_17, ((((((10993 ? (arr_15 [i_2] [i_0]) : ((38447 ? var_2 : (arr_11 [i_1] [i_5])))))) ? 94 : 3278539785)))));
                                var_18 ^= var_3;
                            }
                        }
                    }
                    arr_22 [i_1] [7] [i_1 + 1] [i_1] = ((11 ? (arr_19 [i_0] [i_1] [i_1] [i_1] [i_2 + 1]) : ((max((arr_19 [i_0 + 1] [i_1] [i_2] [i_2] [i_2]), (arr_2 [i_2 - 1]))))));
                }
            }
        }
    }

    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {
        var_19 *= (arr_23 [0] [i_6]);
        var_20 = (var_1 ? ((min((max((arr_3 [i_6 - 1]), 0)), ((min((arr_7 [i_6]), var_9)))))) : 15459);
    }
    #pragma endscop
}
