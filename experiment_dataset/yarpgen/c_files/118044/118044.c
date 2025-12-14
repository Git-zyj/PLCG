/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(-8, (((var_2 ? 40 : var_10)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);
        var_16 ^= min(40, (max((arr_0 [5]), (max(784733174, 2584723409)))));
        arr_2 [i_0] [i_0] &= 10;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = 4322818218753788094;
            arr_8 [i_0] [i_0] [i_0] = ((max(67108863, 32125)));
            var_17 *= (arr_3 [i_0] [i_0]);
            var_18 = (1710243887 > 1710243893);
        }
    }
    var_19 = var_8;
    var_20 = var_10;
    var_21 = max(1114550333489450067, 2584723399);
    #pragma endscop
}
