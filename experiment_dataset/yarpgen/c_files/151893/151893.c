/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = (max((arr_9 [i_0] [i_0] [15] [i_0] [i_0]), -1041593430));
                            arr_10 [i_0] [i_0] [i_0] [i_0] &= (max((((var_10 ? 28270 : (arr_7 [i_0])))), (-var_6 == 67108860)));
                        }
                    }
                }
                var_13 = ((var_6 > (((var_2 ? var_11 : var_5)))));
                arr_11 [i_0] [i_0] [i_1] = (min(((((((~1) + 2147483647)) >> 0))), (((9 > var_5) ? (((var_8 ? var_9 : var_5))) : 4294967295))));
            }
        }
    }
    var_14 = var_6;
    var_15 = (!3424953543);
    var_16 &= (min(3424953543, 4294967276));
    #pragma endscop
}
