/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = -5505299993682806186;
        var_17 *= ((-5505299993682806158 ? var_15 : (((~var_14) ^ var_13))));
        var_18 = (((((var_1 ? var_14 : ((5505299993682806187 >> (var_14 - 2432)))))) ? (min(((var_0 ? var_3 : var_2)), var_2)) : (5505299993682806178 <= var_5)));
        var_19 = (max(var_19, ((max(-var_10, (var_13 <= var_6))))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_20 -= ((~((~(arr_1 [i_1 + 1] [i_1 - 2])))));
        arr_5 [i_1] = ((max(((var_2 ? var_0 : var_1)), ((5505299993682806180 ? (arr_4 [i_1]) : var_9)))));
        var_21 = (min(((min(var_4, var_4))), var_0));
    }
    var_22 = ((((max(-5505299993682806183, -5505299993682806158))) ? (((((var_12 << (5505299993682806183 - 5505299993682806167))) == (~var_6)))) : var_0));
    var_23 = var_14;
    #pragma endscop
}
