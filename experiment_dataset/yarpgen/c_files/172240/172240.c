/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0] [11]) ? (((-(arr_0 [i_0])))) : (13877108472064690940 - 2423070345483329419)));
        var_14 = ((255 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    var_15 = var_5;
    #pragma endscop
}
