/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((((((min(65530, 0))) ? (arr_0 [i_0] [i_0]) : (((arr_1 [i_0] [i_0]) ? (-32767 - 1) : 4515332146443237981))))) ? (((2147483647 ? 127 : 1))) : (max((var_2 / -3383601952860664929), 13258))));
        var_14 *= 37;
        var_15 = (max(var_15, (((-(((arr_1 [i_0] [i_0]) + (-32767 - 1))))))));
    }
    var_16 = (max(var_16, var_6));
    var_17 = (max(var_17, (((var_13 ? (((var_4 / var_2) ? (!var_9) : ((var_3 ? 1 : var_12)))) : var_10)))));
    var_18 |= var_1;
    #pragma endscop
}
