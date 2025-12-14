/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((-(63 * 1)));
    var_21 = (((-63 ? var_10 : (((max(var_2, 6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_22 = (arr_6 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_23 = (max((((!((max(var_9, 83)))))), (max((~var_10), (max(var_8, var_10))))));
                            var_24 = ((!(((min(var_19, (arr_11 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_18 ? var_11 : var_14));
    #pragma endscop
}
