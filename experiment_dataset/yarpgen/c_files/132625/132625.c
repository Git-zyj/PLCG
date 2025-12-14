/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 -= (max(((((5 ? var_1 : var_2)))), ((var_13 ? var_7 : (min(var_1, var_2))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 = ((((((0 ? 1946976743 : 465594485)) >= var_13)) ? ((-(arr_0 [14]))) : (max((((115 ? (arr_1 [1]) : (arr_1 [14])))), ((250527792 ? (arr_0 [20]) : (arr_0 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_17 *= (-(arr_3 [i_0 - 2]));
            var_18 = (~0);
            var_19 = -14;
            var_20 = ((((var_12 ? var_13 : (arr_0 [i_0]))) ^ (((1 ? 801869932 : var_0)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_21 = (((~var_0) >= (var_5 + 125)));
            var_22 = (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 2])));
            var_23 = 2111865285;
            var_24 = (((arr_5 [i_0 + 1] [i_0 - 2]) > (!var_9)));
        }
        var_25 += var_12;
        var_26 ^= 0;
    }
    var_27 = (((((max(var_8, var_8)))) ^ (((18446744073709551603 && ((max(var_8, 0))))))));
    #pragma endscop
}
