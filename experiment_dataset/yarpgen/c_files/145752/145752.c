/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = ((~(max(((max((arr_4 [i_0]), (arr_2 [i_1] [i_0])))), 7083801265019519975))));
                var_12 = (((((arr_4 [i_0]) & (min((arr_0 [i_0]), (arr_4 [i_0]))))) & (~var_1)));
                var_13 &= ((((min(4051431293, 243535997))) & (((min((-9223372036854775807 - 1), (arr_3 [i_0]))) & (arr_0 [i_0])))));

                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_14 = (min(var_14, ((((var_3 & 127) & ((((min(var_2, (arr_2 [i_0] [i_0]))) << (var_1 + 34)))))))));
                        var_15 |= var_1;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_12 [i_2 - 4] [i_3] [i_2] [i_1] [i_3] = 9223372036854775807;
                            arr_13 [i_3] = var_2;
                        }
                        var_16 ^= var_7;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_2 - 2] = ((arr_15 [i_2 - 2] [i_2 + 1] [i_2 - 3] [i_2 - 1]) & (arr_15 [i_2 - 4] [i_2 - 1] [i_2 - 2] [i_2 - 3]));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_17 = ((-(arr_19 [10] [i_1] [15] [i_2 - 4] [i_0] [i_0] [i_6])));
                            var_18 = (((~var_0) & (var_0 & var_5)));
                        }
                        var_19 *= (((arr_17 [i_2 - 2] [i_1] [i_2] [i_5]) & 127));
                        arr_20 [i_2 - 3] [i_1] = 33;
                    }

                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        var_20 = (min(((min(var_1, (arr_9 [i_7 + 2] [i_7] [i_7 - 1] [i_7 + 1] [i_2] [i_2 - 4])))), (min(((-(arr_21 [i_7] [i_2 + 2] [i_1] [i_0]))), (!var_1)))));
                        var_21 = (~(!var_1));
                    }
                    var_22 *= (((((var_1 & (arr_6 [i_0] [i_1] [i_0] [i_1])))) ? ((var_1 ? 33 : (arr_6 [i_0] [i_1] [i_2] [i_2]))) : (6411 & 120)));
                }
            }
        }
    }
    #pragma endscop
}
