/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((-(arr_3 [i_0])));
        var_16 = (min(var_16, (((((min((min((arr_2 [i_0] [i_0]), 17614414588099991222)), (((2044497849 ? var_10 : (arr_1 [i_0]))))))) ? (arr_0 [6] [6]) : (arr_2 [i_0] [i_0]))))));
    }
    var_17 = (1481551537 <= -2044497846);
    var_18 |= (((((~(!-2044497846)))) ? ((((143 == (var_1 * var_5))))) : 4207804791));
    var_19 = (min(var_19, var_12));
    var_20 = (((var_9 && 141215087551705620) || ((((((var_7 ? var_13 : var_3))) ? ((var_9 ? 101 : var_3)) : 112)))));
    #pragma endscop
}
