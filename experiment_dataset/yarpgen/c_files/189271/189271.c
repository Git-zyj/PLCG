/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((max((arr_0 [i_1 - 3]), (arr_0 [i_0])))) ? ((min(-2423, 2422))) : -2411));
                var_12 = (arr_4 [i_1] [i_1 - 3] [17]);
                var_13 = (~268435455);
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_14 = ((1358258373 >> (2411 - 2408)));
        var_15 = ((-(((((arr_3 [i_2] [i_2]) ^ (arr_6 [9] [3]))) ^ (~268435458)))));
        var_16 = (-2423 & 0);
        var_17 = (arr_6 [i_2] [i_2]);
        var_18 = (min(((-((2016250601073337818 & (arr_6 [i_2] [i_2]))))), (((+(((arr_6 [i_2] [i_2]) ^ 16)))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            {
                var_19 = (max((max((94 & 402653184), (!2385666320))), ((-(arr_9 [i_4 + 1])))));
                var_20 *= var_9;
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_23 [i_3] [i_3] [i_3] = (arr_16 [i_4] [i_5] [i_7]);
                                var_21 = (max(var_21, (((arr_14 [i_3] [i_6]) != (((arr_9 [i_5]) ? 8035551859798469491 : 4539628424389459968))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_5;
    #pragma endscop
}
