/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 38;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 = 2147483647;
            var_18 = (((~var_7) ? (((((var_6 ? (arr_2 [i_1] [i_0]) : (arr_1 [i_0])))) ? var_12 : ((max(-55, var_11))))) : 3301954455));
            var_19 = (((((((((arr_0 [i_0] [6]) % 993012821)) <= (~var_15))))) % 993012823));
        }
        var_20 = ((((((-(arr_4 [4]))) + 2147483647)) >> (arr_0 [i_0] [1])));
        var_21 = (((var_0 % var_8) / (((-var_5 % (arr_6 [6]))))));
    }
    var_22 -= (var_10 * var_9);
    var_23 = (~(-var_0 / -20));
    #pragma endscop
}
