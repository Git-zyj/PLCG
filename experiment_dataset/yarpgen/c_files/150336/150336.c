/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((((min(85, var_7)))) || (((102 ? var_3 : var_11))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_0, ((13 ? var_12 : 76))));
                                var_15 ^= (((((min(-123, 43)))) ? (var_6 / -64) : ((((max(60, -73))) ? ((34 ? -38 : -41)) : var_10))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] &= (((((((max(var_5, (-127 - 1)))) ? ((-9 ? var_4 : var_0)) : ((max(var_11, var_12)))))) ? (max(((-5 ? 0 : 66)), ((max(-84, 0))))) : (((((var_0 ? -80 : var_9))) ? ((48 ? var_5 : 126)) : ((max(var_12, 28)))))));
                                arr_15 [i_0] [i_0] [i_0] [1] [i_0] [i_0] [i_0] = ((var_0 ? (((-30 + 2147483647) << ((((2 ? 17 : -54)) - 17)))) : (max(((17 ? -42 : 6)), ((min(63, var_10)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}
