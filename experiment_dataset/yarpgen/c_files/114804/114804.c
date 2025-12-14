/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 ^= var_11;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (arr_2 [5]);

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_15 ^= (min(1, 1));
            arr_7 [4] [i_1 - 2] [i_0] = (arr_2 [i_0]);
        }
        arr_8 [i_0] = (max((var_6 | var_1), 0));
    }
    var_16 = -26561;
    #pragma endscop
}
