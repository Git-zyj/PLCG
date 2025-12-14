/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_7 * var_7) ? ((2791425603 ? 38541 : 1503541715)) : var_7))) ? (-1503541705 - 2507867546) : var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    var_16 = var_2;
                    var_17 = min(1, 0);
                }
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_18 = var_8;
                                var_19 = (min(var_19, var_10));
                                var_20 *= -1;
                                var_21 = 25460;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_22 += (((((min(var_8, var_1))) <= (2507867546 < var_1))));
                                var_23 = (max(var_23, var_13));
                            }
                        }
                    }
                }
                var_24 = (max(1, (-127 - 1)));
            }
        }
    }
    var_25 = ((-328320453 ? -18893 : -57));
    var_26 = (max(var_26, ((+(((!18892) ? (var_9 & -1) : 63))))));
    #pragma endscop
}
