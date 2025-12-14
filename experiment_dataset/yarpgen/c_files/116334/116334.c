/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_7 ? (min(var_3, 80) : ((var_7 ? 109 : 84))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_2 [i_0]) >= (((var_6 ? (arr_1 [i_0]) : -7426271918237949129))))) ? 3202928554190075527 : ((-(arr_2 [i_0]))));
        var_11 = (max(((((arr_1 [i_0]) ? var_5 : (arr_1 [i_0])))), (((24457 ^ var_1) ? (((var_5 ? (arr_0 [i_0]) : -1))) : (((arr_1 [i_0]) ? 7426271918237949131 : (arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
        arr_5 [i_0] = ((((min((15204658110656074586 && 6079732369836653554), (arr_1 [i_0])))) >> (((max(127, (min(7426271918237949138, 18446744073709551615)))) - 7426271918237949110))));
        var_12 = ((+(((arr_0 [i_0]) ^ (arr_0 [i_0])))));
    }
    var_13 = ((((max((var_1 ^ 14079141851511275173), ((1 ? 3451515221 : var_6))))) ? var_3 : var_0));
    var_14 = (max(var_14, 3773284475));
    #pragma endscop
}
