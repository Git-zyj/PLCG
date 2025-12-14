/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((max(var_3, var_0))), (((max(var_2, var_9))))));

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        var_13 = (max(var_13, (((((!(-35 % 14))) ? ((min((min((arr_0 [8]), -11)), (arr_2 [7] [i_0 - 3])))) : ((((arr_2 [i_0 + 1] [i_0 + 1]) && (arr_2 [0] [1])))))))));
        var_14 = ((!((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))))));
        var_15 = (max(var_15, (arr_0 [9])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_16 = ((((((arr_2 [21] [9]) != var_5)) ? (~18446744073709551615) : ((min(-614451917, (arr_3 [19])))))));
        var_17 = 0;
        arr_5 [i_1] = ((((((min((arr_0 [8]), -18077))) * ((((arr_2 [1] [12]) != var_3))))) + ((((min((arr_0 [15]), (arr_1 [1] [1])))) ? var_7 : (arr_3 [i_1])))));
        var_18 = (max(var_18, ((0 ? 1 : 63175))));
    }
    var_19 = (((((1 ? (min(var_10, var_0)) : (min(var_10, var_9))))) ? ((((var_2 ? var_11 : var_8)) & ((min(var_2, var_7))))) : ((var_11 ? 1 : var_10))));
    #pragma endscop
}
