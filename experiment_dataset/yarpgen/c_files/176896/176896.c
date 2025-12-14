/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 *= (min(229376, ((max(30, 3863125337)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 ^= (arr_10 [i_0 - 1] [i_0 - 1]);
                                var_17 = (((-9223372036854775807 - 1) && ((((arr_10 [i_0] [i_0 - 1]) ? (arr_10 [i_3] [i_0 + 2]) : (arr_6 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 2]))))));
                            }
                        }
                    }
                    var_18 = (var_9 ? (((-(max(var_12, (arr_6 [i_2] [i_0] [i_0] [i_0])))))) : (max(((max(var_1, (arr_0 [i_1])))), -var_2)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0 + 1] [i_1] [i_2] [i_2] [i_6] = (((min((var_13 ^ var_12), var_4))) ? ((var_6 ? (arr_4 [i_0] [i_0] [i_2] [i_6 + 1]) : var_1)) : var_1);
                                var_19 = ((~(min((var_5 & var_4), (~var_4)))));
                            }
                        }
                    }
                    var_20 ^= (((~126) > (min(-31, (arr_9 [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0 - 1] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
