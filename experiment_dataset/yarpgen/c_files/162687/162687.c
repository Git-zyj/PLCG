/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~7497532317571028280);
    var_12 = (min((!var_3), ((!(!0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, (var_4 != 7497532317571028303)));
                            var_14 ^= (((((arr_2 [i_0 + 1]) <= ((((var_5 || (arr_1 [i_0 - 1]))))))) ? (arr_3 [i_0] [i_1]) : (10949211756138523334 && var_6)));
                            var_15 = (max(var_15, 10949211756138523313));
                            arr_11 [i_0] [i_0] [i_1] [2] [7] [i_3 + 1] = ((((max(1825400933, 10949211756138523335))) ? (((((arr_4 [i_2]) >= (arr_4 [i_3 + 1]))))) : (min(1892621027, (~var_6)))));
                            arr_12 [i_0 + 1] [i_1] [i_1] [i_2] [i_2] [i_3 + 3] = var_10;
                        }
                    }
                }
                var_16 = 242;
                var_17 ^= ((((((26324 / (arr_9 [i_0] [i_0 + 2] [13] [i_0] [i_0 + 2]))))) - ((var_0 ? 7497532317571028280 : (((arr_6 [i_0 + 1] [i_1]) - 7497532317571028280))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_18 += (((((arr_14 [i_4] [i_4]) && 3535800823906319179)) && (((~((((arr_13 [i_4]) && var_6))))))));
        var_19 = ((((((~var_8) & (arr_14 [i_4] [i_4])))) ? 51928 : 17387774399210499204));
        var_20 &= (min(((-(arr_13 [i_4]))), ((min(109, var_1)))));
    }
    #pragma endscop
}
