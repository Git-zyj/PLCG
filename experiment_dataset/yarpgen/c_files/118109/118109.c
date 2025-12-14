/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [4] [i_0] = 243;
                var_20 &= -var_16;
                arr_6 [i_0] = arr_0 [i_0];
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_21 *= ((+(((((((arr_12 [i_2]) >= (arr_7 [16] [i_3]))))) | ((1 ? (arr_10 [2] [16]) : -1))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_22 += ((((((2147483647 ? (arr_15 [15] [19] [2] [i_6]) : (arr_15 [1] [i_3] [i_4] [11])))) ? ((150551679022411876 | (arr_17 [i_6] [2]))) : ((var_3 ? 17681233426304645392 : 18)))) | (((((150 ^ (arr_15 [7] [i_6] [i_6] [i_6]))) << ((((4032821668 ? -22 : -2178780815308754845)) + 33))))));
                                var_23 = (((((-450065824 + 2147483647) << ((((-2147483632 - (-2147483647 - 1))) - 16)))) ^ -30575));
                            }
                        }
                    }
                    var_24 *= (max(4647628929307103825, 83));
                    arr_20 [21] [3] [i_3] [i_3] = (min((((arr_10 [i_2] [i_3]) % ((((arr_13 [i_2] [i_3] [21]) ? 30337 : (arr_7 [0] [0])))))), -970593213));
                }
            }
        }
        var_25 = (max(var_25, (((((arr_8 [8]) <= -6047))))));
    }
    #pragma endscop
}
