/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((~4539628424389459968), var_8));
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 ^= (min((min(442068253, (((-16114 ? 557997340 : (arr_5 [i_0] [i_0] [i_0])))))), (arr_1 [i_2] [i_0])));

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_2] [i_2] [i_3 - 1] [2] [i_0] [i_1] &= var_6;
                        arr_12 [i_3 + 1] [i_3 + 1] [i_2] [i_3] [i_3 + 1] [i_1] = (arr_5 [i_0] [i_0] [i_0]);
                        var_15 = (((var_5 ? (arr_4 [i_3 + 1] [i_3 + 1]) : (arr_4 [i_3 + 1] [i_3 + 1]))));

                        for (int i_4 = 3; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            var_16 = var_10;
                            var_17 ^= 9223231299366420480;
                            var_18 = arr_4 [i_1] [i_3 - 1];
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_1] [21] [i_5 - 1] = ((((var_10 ? 442068253 : var_1))) ? ((var_6 ? var_8 : var_3)) : (arr_16 [i_0] [i_1] [i_2] [i_5 + 1] [i_2] [i_3 - 1] [i_1]));
                            arr_20 [i_0] [i_1] = var_5;
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        var_19 = (min(var_19, (((var_10 << (((arr_21 [i_6] [i_6 - 1] [i_2] [i_6] [i_1] [i_6]) - 50562)))))));
                        var_20 = (9223231299366420480 >= 442068258);
                        var_21 = (arr_22 [i_1]);
                        var_22 = (!0);
                    }
                    var_23 &= (max((((var_6 >> (((arr_3 [12] [i_1]) - 180))))), var_0));
                }
            }
        }
    }
    #pragma endscop
}
