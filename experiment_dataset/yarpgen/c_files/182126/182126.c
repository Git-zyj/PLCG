/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4068539507;
    var_14 = (~1);
    var_15 &= ((var_12 ? (((~((var_9 ? var_2 : var_1))))) : ((19061 ? 226427788 : -8345100225779838756))));
    var_16 = ((((2318865750 ? (!296) : (var_0 && var_10)))) && (~var_12));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_17 = ((((((((1 ? (arr_0 [i_0]) : var_11))) | 1755718520))) ? ((var_7 ? 2217050950 : var_3)) : 124));
        arr_2 [i_0 - 1] [i_0 - 2] = arr_0 [i_0 + 1];
    }
    #pragma endscop
}
