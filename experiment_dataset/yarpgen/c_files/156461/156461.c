/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = 16930;
                var_14 = (min(var_14, -11224));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 |= -16756;
                            var_16 = ((max((arr_2 [i_0 + 1] [i_1]), -16752)) + var_8);
                            var_17 = (((-49 + 2147483647) << (((-1 + 3) - 2))));
                            arr_11 [i_1] [i_0] [i_2] [i_0] [i_3] = (arr_9 [i_0 + 2] [i_0 + 2] [i_2] [23]);
                        }
                    }
                }
                var_18 = ((~((((((arr_10 [i_0]) & var_9)) < var_3)))));
            }
        }
    }
    var_19 = ((max((((var_12 ? var_7 : 1))), ((var_2 ? var_6 : -23984292295477778)))) << 1);
    var_20 = -16752;
    var_21 = (min(var_4, (max(((1 ? var_3 : -7520563161949266145)), ((var_8 ? -16740 : var_12))))));
    #pragma endscop
}
