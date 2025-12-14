/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_9, var_1));
    var_11 |= ((~(!var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            var_12 = (arr_1 [6]);
            arr_4 [i_0] [i_0] [i_0] = ((4 ? (arr_0 [i_0]) : 18446744073709551609));
        }
        var_13 = (arr_1 [i_0]);
    }
    #pragma endscop
}
