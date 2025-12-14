/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((min(var_19, (298370051 != var_19))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [6] [i_1] [6] &= arr_3 [i_0];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = (+((((((arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] [19]) > 238))) >> (((max((arr_13 [i_0] [i_0] [i_0]), var_15)) - 9118377263134191986)))));
                                var_22 = (((!var_5) || ((((242 + 2147483647) >> (var_19 - 162))))));
                                var_23 += (-((-(min(1293146824, var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (((((((min(var_10, var_15))) ? 3996597256 : (30 ^ var_10)))) ? var_4 : 4));
    var_25 -= ((!((((var_0 % var_3) ? ((var_16 ? var_2 : var_2)) : (63 != var_7))))));
    var_26 = (min(var_26, (((((((~var_6) + ((var_19 ? var_0 : var_8))))) ? 298370046 : ((var_15 ^ (min(var_6, var_12)))))))));
    #pragma endscop
}
