/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-31 || (((((8658182042497616244 ? var_3 : 8035164538216366763)) + ((0 >> (var_0 + 2828640992749382000))))))));
    var_20 = (min(var_20, var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = ((arr_1 [i_0]) ? (-4323268727877370896 || -946523179976646051) : (((var_10 + 9223372036854775807) << (-2412422886873622681 + 2412422886873622686))));
        var_22 = ((((-9223372036854775807 - 1) / 3284157273068649702)) ^ var_14);
    }
    #pragma endscop
}
