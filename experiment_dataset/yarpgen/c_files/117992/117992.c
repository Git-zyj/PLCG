/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_10 = (((0 == 2) && var_8));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] = (5059 || 5059);
                                var_11 = 7155;
                            }
                            for (int i_5 = 3; i_5 < 22;i_5 += 1)
                            {
                                arr_18 [i_0] [i_0] [i_0] = arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = min(2324, 57228);
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 57228;
                                var_12 = (max(var_12, (max(23768, 128))));
                            }
                            var_13 = 37889;

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                                var_14 = var_2;
                                var_15 = 0;
                            }
                            for (int i_7 = 0; i_7 < 24;i_7 += 1)
                            {
                                var_16 = (((arr_2 [i_3 + 1]) != (arr_0 [i_3 + 2])));
                                var_17 = (max(var_17, (((46572 * (65524 & 0))))));
                            }
                            for (int i_8 = 3; i_8 < 20;i_8 += 1)
                            {
                                arr_31 [i_0] [i_0] [i_0] [i_8] [i_8] [i_0] = ((~((((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_29 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] [i_0]) : 49149)) > (~43402))))));
                                var_18 = (min(var_18, (((((((((29802 ? 14550 : 48989))) ? ((40113 ? 35428 : var_6)) : ((26496 ? 55752 : 62168))))) ? 5059 : ((max(35428, 49211))))))));
                                arr_32 [i_2] [i_8] = var_5;
                            }
                        }
                    }
                }
                var_19 = ((65533 ^ (arr_0 [i_0])));
            }
        }
    }
    var_20 = var_5;
    var_21 = 30665;
    #pragma endscop
}
