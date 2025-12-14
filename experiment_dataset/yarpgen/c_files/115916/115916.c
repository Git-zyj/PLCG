/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((((((((var_12 ? 36237 : var_8))) ? var_2 : var_15))) ? var_10 : var_9));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (arr_4 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] = (min(((min((arr_5 [i_2 - 1] [i_2 - 2]), (arr_1 [i_3] [i_0])))), (max(15655941996274589958, (arr_0 [i_4])))));
                                var_19 += (min(((2790802077434961630 ^ (~var_14))), var_15));
                                var_20 = ((-3408177259776058803 >= ((0 ? (min((arr_5 [i_0] [11]), var_12)) : ((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_12)))))));
                                arr_13 [i_4] [i_3] = (var_15 <= var_1);
                            }
                        }
                    }
                    var_21 ^= 15655941996274589975;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_20 [i_5] = ((!39837) ? var_5 : var_16);
                                var_22 += ((-(min((arr_6 [11] [11] [i_2]), 5163328450518739871))));
                                var_23 += ((-((var_9 ? 0 : (((arr_9 [i_6] [i_0]) ? var_2 : 1071644672))))));
                            }
                        }
                    }
                }
            }
        }
        var_24 -= (((((((~2147483647) + 2147483647)) + 2147483647)) << ((((((~(arr_9 [i_0] [i_0]))) + 43933)) - 28))));
    }
    var_25 = ((-5717379845377963590 ? (((2790802077434961657 + 595178873) % (~var_6))) : ((max(var_3, (26078 + var_8))))));
    #pragma endscop
}
