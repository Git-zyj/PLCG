/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min(var_15, ((min(var_12, var_12))))), var_9));
    var_19 = 18446744073709551609;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_20 = ((((((((arr_1 [i_0 - 2] [i_0]) ? (arr_0 [i_0]) : 106)) + (arr_1 [i_0] [i_0 - 2])))) ? ((+(((arr_0 [i_0]) + 563651115)))) : ((~(arr_0 [i_0])))));
        var_21 = (i_0 % 2 == zero) ? ((((arr_0 [i_0]) >> ((((var_5 ? (arr_0 [i_0]) : var_9)) - 18092997814259114368))))) : ((((arr_0 [i_0]) >> ((((((var_5 ? (arr_0 [i_0]) : var_9)) - 18092997814259114368)) - 17151967466937931863)))));
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = var_10;
    }
    var_22 ^= ((563651127 * (var_3 * var_14)));
    var_23 = (min(var_23, var_1));
    #pragma endscop
}
