/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (min((min(42, (var_3 ^ var_9))), var_6))));
    var_11 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, ((((arr_0 [i_1]) ? -1 : ((4294967295 ? -1077317532473512188 : 902540025)))))));

                            for (int i_4 = 4; i_4 < 12;i_4 += 1)
                            {
                                var_13 = (arr_4 [i_4 - 1] [i_4 - 1] [i_4 + 1]);
                                var_14 = (min(var_14, (((((((~var_6) ? (max(var_6, -759219952)) : (~var_4)))) && (((((arr_8 [i_0] [i_1] [i_3] [i_4]) ? var_8 : 4294967295)))))))));
                                var_15 += (25 ? 25 : 3392427239);
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_16 = arr_15 [i_3] [i_1] [i_2] [i_0 - 2] [i_5];
                                var_17 = min(20, 765684384);
                                var_18 = (((0 - 2840652304634963088) ? 64 : 2));
                                arr_19 [i_0 - 2] [i_1] [i_2] [i_3] [i_5] = (((((3185506836397705507 >> (121 - 67)))) ? ((-var_4 ? (arr_18 [i_0 - 2] [i_3 + 1] [i_3] [i_3 + 1] [i_3]) : (arr_4 [i_1] [i_2] [i_2]))) : (((max(var_5, var_6))))));
                                var_19 = (arr_3 [i_0 + 1] [i_0]);
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                var_20 += var_4;
                                var_21 = ((17383 ? 4294967290 : 121));
                            }
                        }
                    }
                }
                var_22 = ((-(arr_0 [i_0 - 1])));
            }
        }
    }
    #pragma endscop
}
