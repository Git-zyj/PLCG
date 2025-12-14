/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 54096;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = var_1;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_12 = 3116802306;
                    var_13 = var_5;
                }
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_17 [i_3] [i_3] [i_4] [i_4] [21] = var_0;
                                arr_18 [i_3] [i_3] [i_0] [i_3] = (var_5 >> var_1);
                                arr_19 [i_3] [15] [i_3] [15] [i_3] [i_3] = (((((!var_8) ? -56742 : -var_0)) != -var_1));
                            }
                        }
                    }
                    var_14 = (min((!var_3), 2763019084809426549));
                    var_15 = ((-(min(var_5, (-9223372036854775807 - 1)))));
                    var_16 = ((((min(var_7, var_2))) && var_1));
                }
                arr_20 [0] [0] [0] = ((9223372036854775807 ? (!-4688672456808926578) : (((((var_3 ? var_1 : var_4))) ? ((var_9 ? 3956377851700277087 : 2763019084809426549)) : (-9223372036854775807 - 1)))));
                arr_21 [i_0] [i_0] = (((((!(-9223372036854775807 - 1)))) >> (var_4 - 82673250)));
            }
        }
    }
    var_17 = 189823144;
    #pragma endscop
}
