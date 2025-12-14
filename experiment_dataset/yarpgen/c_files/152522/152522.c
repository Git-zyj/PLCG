/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_17 = (-3 != -32761);
        var_18 = (((((((min(61768, (arr_1 [i_0 + 2])))) ? (arr_0 [i_0 + 3]) : (var_3 + var_6)))) ? (((((arr_1 [i_0 + 2]) <= (max(var_10, 18446744073709551589)))))) : (min((arr_0 [i_0 - 1]), 15))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 = (max(var_19, -162228311));
            var_20 ^= (arr_0 [i_1]);
            var_21 = ((-9103 & var_3) / 9095);
        }
    }
    var_22 = (((min((~15), (min(var_9, 0)))) ^ ((((!-1) ? var_10 : var_2)))));
    var_23 = (min((((max(31, var_1)) << 1)), var_16));
    #pragma endscop
}
