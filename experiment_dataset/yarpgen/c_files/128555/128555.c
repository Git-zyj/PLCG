/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -375490445;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_12 = max(1588008757, 15576);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_13 = (min(var_13, (((1909847591 ? -32744 : -15603)))));
            var_14 = (arr_1 [5] [i_0]);
            var_15 -= var_4;
            var_16 = var_5;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_17 = (arr_2 [i_0 - 1] [i_2] [i_2]);
            var_18 = var_9;
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_19 -= 32743;
        var_20 = (32752 != -32743);
        var_21 = (max(var_21, (((arr_8 [i_3] [i_3]) ^ ((var_4 / (arr_7 [4])))))));
    }
    var_22 = (max(var_22, 27664));
    #pragma endscop
}
