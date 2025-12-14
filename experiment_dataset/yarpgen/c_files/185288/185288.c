/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [13] = (max(2180157998, 433025187));
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        var_17 = var_5;
    }
    var_18 -= var_7;
    var_19 *= var_11;
    var_20 = (min(var_20, ((((((((2546083984 < 1716026779) < var_15)))) < var_3)))));
    var_21 = (2288718490 <= ((((var_6 ? var_12 : 2493397388542142292)) << ((((var_12 ? 1 : var_6)) - 3245613702)))));
    #pragma endscop
}
