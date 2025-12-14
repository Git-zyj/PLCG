/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 ^= (((((25 ? 11 : -14962))) ? (((var_12 & (((var_0 ? var_3 : var_14)))))) : var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 += ((~(arr_0 [4] [i_0])));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (arr_5 [i_0]);
            arr_7 [i_0] = (12 ? (arr_1 [i_0] [i_0]) : var_13);
            arr_8 [i_1] [0] [i_0] = (arr_0 [i_1] [i_1]);
            var_21 = (((arr_1 [i_0] [i_0]) ? (!var_2) : (arr_5 [5])));
            var_22 = (((var_10 ? (arr_0 [12] [i_1]) : (arr_5 [1]))));
        }
        arr_9 [i_0] [i_0] = var_9;
    }
    var_23 = (!288089638663356416);
    var_24 = -var_12;
    #pragma endscop
}
