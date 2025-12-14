/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_12 = max((((88 ? (arr_1 [i_0] [i_0 + 3]) : var_8))), (arr_1 [i_0] [i_0]));
        var_13 = (max(var_13, (((((((arr_0 [i_0]) ? ((((arr_2 [i_0] [2]) || var_10))) : (((-99 + 2147483647) >> (((arr_1 [14] [i_0]) + 61))))))) && (((((var_11 || (arr_2 [12] [12]))) ? (((arr_0 [8]) ? var_3 : -114)) : (((arr_0 [i_0]) ? 51511 : var_10))))))))));
        var_14 = var_2;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_15 = (min(var_15, (var_3 <= 65534)));
        arr_6 [1] = -7952;
    }
    var_16 = 51521;
    var_17 = ((~(((((var_7 ? var_6 : var_4))) ? (((var_5 ? 18 : var_0))) : ((var_6 ? var_1 : 9223372036854775782))))));
    var_18 = -1;
    var_19 -= ((((var_1 > (var_4 / var_3))) ? (~1509233966) : var_3));
    #pragma endscop
}
