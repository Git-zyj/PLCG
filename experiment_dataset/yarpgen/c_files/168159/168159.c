/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_1 * var_5);
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 &= ((!(((~(min(65504, var_8)))))));
                    arr_10 [i_0] [i_1] [i_2] = (max(16384, -52));
                }
            }
        }
    }
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_14 = (((((((max(-77, 2815687589))) ? (!-21) : (-127 - 1)))) ? 20 : ((var_6 ? 2351508127 : 5604682209566296830))));
                var_15 = (max((1 ^ var_2), (var_6 - 4294901791)));
            }
        }
    }
    #pragma endscop
}
