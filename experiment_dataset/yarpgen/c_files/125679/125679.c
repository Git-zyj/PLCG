/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((max(52067, (max(52082, 13495)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = ((~(((arr_4 [i_0]) ? 15 : (arr_2 [i_1 + 2] [i_0])))));
                var_13 = (arr_3 [i_1 + 2] [i_1 + 2] [i_1 + 2]);

                /* vectorizable */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_14 = (max(var_14, ((((arr_0 [i_1 + 3]) - (arr_0 [i_1 + 1]))))));
                        var_15 = (arr_5 [i_2] [i_2] [i_1]);
                        var_16 = ((-(arr_0 [i_1 - 1])));
                        var_17 = (((((arr_5 [i_0] [i_0] [i_0]) ? 26359 : (arr_6 [i_2] [i_3]))) < (arr_7 [i_3] [i_1 + 1] [i_3] [i_2 - 3] [i_2] [i_2 - 2])));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_13 [i_0] [5] [i_4] [i_4] [i_4] [15] [i_0] = (((arr_2 [i_2 - 2] [i_0]) & (arr_8 [i_2 - 2] [i_4] [i_4] [i_4] [i_4] [i_4])));
                                var_18 &= 26359;
                            }
                        }
                    }
                    var_19 = 48705;
                    var_20 = (min(var_20, (~43738)));
                    var_21 = ((((((arr_0 [i_0]) << (var_2 - 194)))) ? (arr_5 [i_0] [i_1 + 1] [i_2]) : (arr_9 [i_0] [i_0] [i_0])));
                }
                var_22 = var_7;
            }
        }
    }
    var_23 = (max(var_23, var_3));
    var_24 = (max(var_24, var_3));
    #pragma endscop
}
