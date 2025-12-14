/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (min(var_3, (~var_4)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 &= var_4;
        var_12 ^= (!197);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_4 [i_1] = (arr_0 [i_1]);

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_7 [i_1] [i_2] [i_2] = var_9;
            var_13 = (~267911168);
            arr_8 [i_1] [i_2] = ((-((var_1 ? var_8 : (arr_6 [i_1 + 1])))));
        }
    }
    var_14 = var_4;
    var_15 = (max(var_15, var_3));
    #pragma endscop
}
