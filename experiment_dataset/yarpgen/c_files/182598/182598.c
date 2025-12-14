/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min(((max(var_11, -26525))), ((var_15 ? var_10 : var_13)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (min((((5 == (arr_1 [i_0])))), ((((max(var_15, 30601))) ? -124 : 1885510374))));
        var_17 = (max(var_17, (((-((max(-64, 124))))))));
        var_18 ^= (63 + 9046705355796691089);
    }
    #pragma endscop
}
