/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 -= (((max(((255 ? 255 : 4573939137010507756)), var_8)) > (arr_1 [i_0] [1])));
        var_17 ^= ((var_5 ? ((((((arr_0 [i_0] [i_0]) ? 32746 : 32739))) ? (((arr_1 [i_0] [i_0 - 1]) ? 1 : (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0]))) : ((max((arr_0 [i_0] [i_0 - 1]), -32747)))));
        var_18 -= ((126 ? (((arr_1 [i_0 - 1] [i_0 + 1]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_1 [i_0] [i_0]))) : (((arr_1 [i_0] [12]) << (var_9 - 2193659350)))));
    }
    var_19 = var_9;
    var_20 = 10238;
    var_21 = var_6;
    var_22 = (min(-32754, (((((3411824184702436142 ? -4573939137010507750 : 5225655809202717373))) ? (((max(-32747, -32740)))) : var_7))));
    #pragma endscop
}
