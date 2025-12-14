/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max((3833400654 == 2713998413), var_12)) > -var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 -= (10025 == 13806);

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_2] [3] [3] [3] = -29129;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] = ((min(((13834 - (arr_9 [i_2] [i_3] [i_2] [i_2] [i_1] [i_0])), 29128))));
                                var_21 = ((13806 == ((29129 ? var_6 : (var_0 > -13806)))));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] = ((((max(0, var_2) / (min(-29112, (arr_9 [8] [i_1] [i_2] [i_3] [i_4] [i_4])))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [6] [i_1] |= ((var_8 ^ (((arr_9 [i_0] [10] [i_1] [i_1] [i_0] [i_0]) ? -7463397045740649961 : 7))));
                }
                /* vectorizable */
                for (int i_5 = 4; i_5 < 13;i_5 += 1)
                {
                    arr_17 [i_0] [i_1] [i_1] [i_5] = 0;
                    var_22 |= -11171;
                }
                var_23 = (max((((1 ? -29135 : 11))), (((arr_3 [i_1]) * (arr_3 [i_0])))));
                arr_18 [i_1] [12] [i_0] = ((+(((1 < var_3) ? (((max(7, -4585)))) : (~32767)))));
            }
        }
    }
    var_24 = (min((((29138 & 7) ? ((var_6 ? var_11 : 9223372036854775807)) : (-657979103091784363 && var_8))), (((((min((-2147483647 - 1), 3072))) || 2384870759)))));
    #pragma endscop
}
