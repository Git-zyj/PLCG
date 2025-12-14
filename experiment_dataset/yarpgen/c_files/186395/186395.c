/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(max(((max(244, 1))), var_6))));
    var_18 = ((((((244 + 1) ? 18446744073709551615 : var_12))) ? 14680064 : ((max(121, 1353490857)))));
    var_19 = var_16;
    var_20 = ((-((var_2 ? (((17273 ? 32767 : var_16))) : (var_14 - var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = 1;
                                var_22 = (((((max(2047, 196)))) - ((-(-542965324374091289 + 8687830060550660315)))));
                            }
                        }
                    }
                }
                var_23 = ((~(-13625 > -6570)));
            }
        }
    }
    #pragma endscop
}
