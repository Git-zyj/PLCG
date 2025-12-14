/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = min(((((arr_6 [7] [i_0] [i_0] [7]) * (arr_6 [i_0] [i_0] [i_2] [i_3])))), (~var_4));
                                var_19 = max(var_17, ((((min(1416911004, -4330))) ? ((max(16502, 567435830))) : (max(var_12, 62830)))));
                                var_20 = (arr_8 [i_1] [i_2] [i_3]);
                                var_21 = (((((49018 ? var_10 : 28978))) ? 3727531466 : (max((~28978), (!3)))));
                                arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] [i_0] [i_0] = (((max(2266, (arr_9 [i_3 - 2] [i_1] [i_1 - 1]))) % ((((6117473500397795907 < (arr_9 [i_3 - 2] [i_2] [i_1 - 1])))))));
                            }
                        }
                    }
                    var_22 = ((+((min((((arr_1 [i_0]) || (arr_10 [i_0] [i_1] [i_1] [i_2]))), (!9514272864600622400))))));
                    arr_14 [i_0] = ((32 ? -3 : (1225311646150002472 == 16111)));
                }
                arr_15 [i_0] [i_0] [i_0] = (arr_9 [i_1 + 3] [i_1] [i_1 + 2]);
                arr_16 [i_0] [i_0] [i_0] = var_12;
                var_23 = (min((~213), ((var_11 ? ((min(19253, var_0))) : ((3 ? (arr_2 [i_0]) : 347))))));
                arr_17 [i_0] = (!9732178626066645819);
            }
        }
    }
    var_24 = ((-3 ? (max((~var_3), ((min(var_17, var_14))))) : 1));
    var_25 = (min(var_12, ((((~-27308) < var_7)))));
    #pragma endscop
}
