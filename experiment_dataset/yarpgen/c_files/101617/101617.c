/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((((var_6 - 128) / ((((-2147483647 - 1) != 2147483647))))) * ((((!var_8) != ((min(var_15, var_15))))))));
    var_18 *= var_4;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = (((((0 ? (-127 - 1) : 2147483643))) + (-29918 ^ var_4)));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] [7] = var_4;
                            arr_17 [i_0] [i_0] [i_2] [i_0] = ((var_6 - (var_11 ^ var_15)));
                            arr_18 [i_0] = (min(((var_14 << (((min(71494644084506624, var_12)) - 16460)))), ((var_10 << (var_0 - 118)))));
                        }
                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            var_19 = 2147483647;
                            var_20 = ((((((((-2524831808540745026 ? var_4 : var_13))) ? ((min(var_9, var_2))) : (9338643416866079314 & 3314232324488745789)))) ? ((var_15 ? var_11 : var_9)) : 1));
                        }
                    }
                }
            }
        }
        arr_22 [i_0] = 1950849869;
    }
    #pragma endscop
}
