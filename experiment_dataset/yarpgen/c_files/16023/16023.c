/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(~9223372036854775807)));
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((max(9223372036854775807, (max((-9223372036854775807 - 1), 1023))))) ? (!1152921504606846976) : (!1116892707587883008))))));
                                var_17 *= ((-((min(1, -80)))));
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_4 - 1] [i_1] = (max(((-9223372036854775802 ? ((9223372036854775807 ? 112 : 9223372036854775781)) : 18)), (9223372036854775795 != -9223372036854775789)));
                                arr_14 [3] [i_2] [i_1] [0] = ((~(max(9223372036854775806, 9223372036854775807))));
                                var_18 = (max(var_18, (((13238 ? (max((((22 ? 103 : 65531))), 9223372036854775800)) : -9223372036854775804)))));
                            }
                        }
                    }
                }
                var_19 *= -9223372036854775797;
                arr_15 [i_1] [i_1] = (+(max((-9223372036854775807 - 1), (-9223372036854775807 - 1))));
                var_20 -= (min(9223372036854775807, -29857));
                arr_16 [i_0] [i_1] [i_1] = (((((-9223372036854775805 + 9223372036854775807) << 13)) * (((-(4402 == 1))))));
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
