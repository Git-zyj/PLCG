/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((~(~var_9)))) | ((var_17 ? ((var_14 ? 4093756152 : -35)) : 201211144))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 &= var_18;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_22 = (~12494190756514144310);
                            arr_10 [14] [i_2 + 1] [i_1] [i_0] = var_19;
                            var_23 = ((!((max(var_6, (arr_4 [i_0] [4] [i_0] [i_0]))))));
                        }
                    }
                }
                var_24 = (min(var_24, (((~(((((arr_1 [i_0] [i_0]) && var_12)) ? ((((arr_0 [i_1]) && (arr_9 [i_0] [i_0] [i_1] [i_1])))) : (max((arr_6 [4]), var_5)))))))));
                arr_11 [i_0] = var_2;
            }
        }
    }
    var_25 = (((!((min(var_2, var_13))))));
    var_26 = (!var_6);
    #pragma endscop
}
