/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 ^= (((0 - (arr_0 [i_0]))));
        arr_2 [i_0] = (((65535 ? 65535 : 65535)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = ((-(arr_3 [i_1 - 2] [12])));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_1] [i_2] = (!973684220673918962);
            var_15 = -32;
        }
        var_16 = (arr_8 [i_1] [i_1] [i_1]);
        arr_10 [i_1] = (((arr_6 [i_1 + 1]) & (arr_6 [i_1 + 1])));
    }
    var_17 = -var_4;
    var_18 = var_9;
    var_19 = ((!(((!var_1) <= ((var_8 ? var_6 : var_3))))));
    #pragma endscop
}
