/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (~242);
        var_20 += (((((-(arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : (--3326198620147839609)));
        arr_3 [i_0] [i_0] = (max(23224, (((!((((arr_0 [7]) * 2130706432))))))));
    }
    var_21 += ((~(~var_9)));
    #pragma endscop
}
