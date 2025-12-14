/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 29071;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [i_1] = ((var_1 / (~var_4)));
                var_19 = var_7;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 = (((!var_10) ? (var_14 && 1026741752) : (!53850)));
                            var_21 = (min(var_21, var_1));
                            var_22 = (min(var_22, -15));
                        }
                    }
                }
            }
        }
    }
    var_23 += ((var_12 <= (!var_16)));
    #pragma endscop
}
