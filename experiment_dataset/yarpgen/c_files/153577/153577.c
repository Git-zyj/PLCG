/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = ((104 ? 4611686018427387904 : -10));
            var_20 = (max(var_20, (arr_1 [15])));
        }
        var_21 = ((!((((arr_1 [i_0]) ? ((1 ? 1 : 106)) : ((2684726606 ? 0 : 24)))))));
        arr_5 [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        var_22 &= ((-(arr_7 [i_2 - 2])));
        var_23 = ((~((var_19 << (((arr_2 [1]) - 15824814314466402256))))));
        arr_9 [i_2] [i_2] = (arr_3 [i_2 + 1]);
        var_24 = var_13;
        var_25 &= (arr_6 [i_2 - 2]);
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_26 = (798547070591610362 ? 44 : 0);
        var_27 = var_18;
        arr_12 [i_3] = var_4;
    }
    var_28 = var_10;
    var_29 = var_6;
    #pragma endscop
}
