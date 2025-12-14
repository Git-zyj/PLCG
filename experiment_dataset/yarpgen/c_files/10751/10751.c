/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (var_16 >= -var_15);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (min(((((min(62, (arr_1 [i_0 - 2] [i_0 - 3])))) ? -839307049 : -565321643)), 565321650))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] = (min((((-248047439 ? (1 % 576460752303423487) : ((min(var_0, 248047441)))))), (((((-565321650 ? -4090 : 15))) ? (~-1) : (min(1, 274877906943))))));
                            var_19 = (max((arr_6 [i_0 - 2]), 3408712676));
                            arr_14 [i_0] [i_0] [i_0] [i_0 - 2] &= (arr_2 [1]);
                        }
                    }
                }
                var_20 *= (max(-4081, ((((max(-5254216206052544233, -9223372036854775806))) ? -21 : ((2139095040 ? var_4 : (arr_0 [i_0 + 2])))))));
            }
        }
    }
    #pragma endscop
}
