/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += 2977962968556767662;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((~(arr_0 [i_0])));
        var_16 = (arr_3 [i_0] [i_0]);
        var_17 += ((((max(181, 811))) ? ((~(max(997150413, 4935458931366694290)))) : -4935458931366694314));
        var_18 = var_10;
        var_19 = -1567432469;
    }
    var_20 = -1567432469;
    #pragma endscop
}
