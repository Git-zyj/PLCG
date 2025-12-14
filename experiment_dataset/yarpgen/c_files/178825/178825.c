/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 && ((var_14 && ((max(var_0, var_10)))))));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((((((arr_0 [i_0]) && var_2)) ? (max(0, 29)) : (arr_0 [i_0]))) > ((~((-(arr_0 [i_0])))))));
        var_17 = (min(var_17, (!143833713099145216)));
        var_18 = var_8;
    }
    var_19 = (max(var_19, (((var_15 ^ (((min(var_7, var_15)) ^ var_12)))))));
    var_20 = (((min((7966100784167042264 / var_12), var_10)) == (((((min(30481, var_1))) ? ((var_3 ? var_0 : var_8)) : var_7)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            {
                var_21 ^= ((-(((arr_7 [i_1]) ? (var_14 <= var_8) : 49072))));
                var_22 *= ((+(((var_3 >= ((17928108514561891566 ? (arr_5 [20] [i_1] [i_2]) : (arr_4 [i_2] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
