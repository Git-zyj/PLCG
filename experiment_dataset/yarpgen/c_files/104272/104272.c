/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((((((var_14 ? 255 : var_12)) >> var_13))), 6506352402653938664));
    var_17 = 253;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 -= -1;
                                var_19 = (!-228);
                                var_20 |= ((((((!var_4) >= var_13))) >> (!116821465)));
                                var_21 = (max(var_21, -1));
                                var_22 = (((~-1322491794) % var_1));
                            }
                        }
                    }
                    var_23 = 834998317;
                }
            }
        }
    }
    #pragma endscop
}
