/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((255 ? var_9 : var_10));
    var_18 = (((((-989453043589672527 ? 1 : ((43 ? -56 : 255))))) ? (~var_14) : ((1 ? 0 : var_12))));
    var_19 = (min((max((((-989453043589672531 ? 43 : 1326026720))), ((2147483647 ? var_5 : 0)))), 57));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (min(0, (arr_2 [i_0])));
        var_21 = (arr_1 [i_0] [i_0]);
        var_22 = (max(var_22, -9645));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_23 *= ((43 & ((((((((arr_5 [i_1] [i_1]) && (arr_6 [i_1]))))) == (var_1 - 124))))));
        arr_7 [i_1] = ((((((((var_9 ? var_13 : var_10))) ? (arr_4 [i_1] [i_1]) : ((65535 ? 7 : 0))))) ? (((((219 % (arr_4 [i_1] [i_1])))) ? (min(190, (arr_5 [i_1 - 1] [i_1 - 1]))) : (arr_4 [i_1] [i_1 - 1]))) : 492581209243648));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2] = (((1 % 1) << (63571 - 63552)));
        var_24 = (((((23278 ? 19 : 0))) ? (255 == 1) : (arr_8 [i_2])));
    }
    #pragma endscop
}
