/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 |= var_16;
    var_19 += var_16;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_20 = ((var_3 ? (((arr_0 [i_0]) % (arr_2 [i_0]))) : (((arr_0 [i_0]) ? (arr_0 [9]) : 2522281062))));
        var_21 = (((arr_2 [i_0 + 1]) ? 0 : (arr_2 [i_0 - 2])));
        var_22 = (((arr_2 [i_0 + 1]) ? (~var_14) : (arr_2 [i_0 + 1])));

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (((arr_0 [i_0 + 1]) ? (arr_2 [i_0 - 1]) : var_13));
            var_23 -= ((33554431 ? 65535 : 31));
            var_24 = (~var_9);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_25 = ((~(arr_2 [i_0 - 2])));
            arr_9 [i_2] = (~28);
        }
    }
    #pragma endscop
}
