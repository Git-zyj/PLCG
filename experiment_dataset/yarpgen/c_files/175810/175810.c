/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((var_8 ? 32768 : ((var_9 ? var_5 : -1719326259)))), (((var_6 <= (var_7 <= 39574))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = 25962;
        var_18 = (max(2080374784, ((var_14 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    #pragma endscop
}
