/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (min(((~(arr_2 [i_0 - 1]))), ((max(-33, 77)))));
        var_14 = (min(var_14, ((max((178 >= 77), ((((1030177159488886645 == (arr_2 [i_0]))) ? 65535 : 25564)))))));
        arr_4 [i_0] = ((((min(127, 255))) ? ((((arr_0 [i_0 - 3] [i_0 - 1]) >= var_6))) : var_9));
    }
    var_15 = ((~(var_6 == var_0)));
    #pragma endscop
}
