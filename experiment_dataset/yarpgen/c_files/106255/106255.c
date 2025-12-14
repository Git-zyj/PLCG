/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 ^= 12177;
                arr_5 [10] [i_0] [i_0] |= (((~(arr_2 [i_0]))));
            }
        }
    }
    var_18 = (min((((var_6 ? var_12 : (var_3 && var_7)))), (((min(var_6, 144)) - (10543 + 82)))));
    var_19 = (max(var_19, (((var_10 ^ (var_10 == var_10))))));
    var_20 = var_16;
    #pragma endscop
}
