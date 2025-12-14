/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = -3937734723287386953;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 = (max(var_15, -41672));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = arr_3 [i_0];
            arr_4 [i_0] = 3937734723287386963;
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_7 [14] [i_0] = -3937734723287386951;
            var_17 = ((~((~(arr_6 [i_2 + 1])))));
            var_18 = ((-(arr_0 [2] [i_2])));
        }
        var_19 = (min(7, 5394730425524544926));
        arr_8 [i_0] = (min((((arr_1 [i_0]) ? var_11 : (arr_1 [i_0]))), var_8));
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        var_20 = (min(-1, 143));
        var_21 = (~var_7);
        var_22 *= ((((max(-4294967285, (((-(arr_5 [i_3] [i_3]))))))) ? var_3 : (arr_3 [i_3 - 2])));
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        var_23 ^= (((arr_1 [18]) ? ((-((-(arr_10 [i_4 - 1]))))) : (((min(87, var_11))))));
        var_24 = (arr_12 [i_4 + 1]);
    }
    #pragma endscop
}
