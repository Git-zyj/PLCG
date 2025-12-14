/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((!(255 < 4249856758))))));
    var_18 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = var_12;
        var_20 = (((var_14 ? (arr_3 [i_0]) : 19349)) ^ var_9);

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 = ((var_10 / (arr_6 [i_1] [i_0])));
            var_22 = (max(var_22, ((((arr_0 [i_0]) + (arr_1 [i_0]))))));
        }
    }
    #pragma endscop
}
