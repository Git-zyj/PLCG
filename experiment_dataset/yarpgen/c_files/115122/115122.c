/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1] = (arr_5 [i_0] [2]);
            var_11 = 82;
            var_12 = -52;
        }
        arr_7 [i_0] = (241646506 ^ 17027955345053978399);
        var_13 ^= 4588;
    }
    #pragma endscop
}
