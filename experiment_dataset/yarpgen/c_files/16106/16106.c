/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((-2147483647 - 1) ? 742422634 : 2147483641));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 ^= ((0 ? ((((arr_2 [i_0] [3]) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [0])))) : (min((((var_7 ? var_4 : (arr_4 [i_0] [3] [i_0])))), ((9223372036854775807 << (((var_3 + 1177297382) - 39))))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_13 = (((max(0, (arr_6 [i_0] [i_1] [i_2]))) - var_9));
                    var_14 = (min(var_14, ((((((arr_4 [i_2] [i_1] [i_0]) & (arr_2 [i_0] [2])))) ? 6867352477232209630 : ((((min((arr_5 [i_2] [i_1] [i_0]), 84))) ? var_9 : 0))))));
                    var_15 -= -1251193653900161913;
                }
                var_16 = (min(var_16, (((+(min((arr_0 [i_0]), 4503462188417024)))))));
                var_17 = 2448109023;
            }
        }
    }
    var_18 = ((-(min((!3357937850), var_3))));
    var_19 = (~((((~2386650369604179573) || (((var_6 ? var_5 : var_1)))))));
    var_20 = (((((((var_2 >= (-2147483647 - 1)))))) ? var_6 : var_8));
    #pragma endscop
}
