/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(18446744073709551601 + 3)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0]) >> (arr_1 [i_0])));
        var_20 = (arr_0 [10]);
        arr_2 [i_0] &= (var_2 ? (arr_1 [i_0]) : (arr_0 [i_0]));
        var_21 = (((8 > 18446744073709551587) % (arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_22 = (max(var_22, ((~(min((arr_4 [i_1] [i_1]), (min(28, 50))))))));
        var_23 = (max(var_23, (((~(((arr_5 [i_1] [i_1]) ? 64 : var_7)))))));
        var_24 = (max(var_24, var_17));
    }
    var_25 = ((((((~var_2) ^ var_3))) ? ((((var_7 == (~var_12))))) : 30));
    #pragma endscop
}
