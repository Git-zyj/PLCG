/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0]) < ((-var_2 ? (7 < var_2) : (!27310)))));
        var_14 = (27310 ? -729282747281165819 : 98);
    }
    var_15 |= (((var_10 + 9223372036854775807) >> (var_10 + 8850429950314991429)));
    #pragma endscop
}
