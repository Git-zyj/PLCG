/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 0;
    var_17 = (min(var_17, var_9));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_0 [i_0])));
        var_19 = (((arr_1 [2]) ? 1 : (arr_2 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = (arr_4 [i_1]);
        var_20 &= ((var_6 ? 33050 : -7045521602418914247));
    }
    #pragma endscop
}
