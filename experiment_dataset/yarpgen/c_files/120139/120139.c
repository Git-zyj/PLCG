/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(max(var_15, var_5))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (17 || var_17);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_21 = var_5;
            arr_6 [0] &= (arr_4 [8] [0] [i_0]);
        }
        var_22 = var_15;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_13 [i_3] = (min((max(16113832755995350109, (arr_12 [i_3] [i_2]))), (((((18446744073709551615 || (arr_5 [i_2] [i_2]))) ? ((511 ? -5600010273070975811 : (arr_10 [i_2] [i_3] [i_3]))) : (0 + 4294967295))))));
            var_23 = ((-(((((var_16 ? var_12 : var_3))) + (min(0, var_1))))));
            var_24 = (min(var_24, 21));
            var_25 = (min((((arr_4 [i_2] [i_3] [i_2]) ? var_17 : var_0)), ((((arr_0 [i_3] [i_3]) * (arr_0 [i_3] [i_3]))))));
        }
        var_26 = ((((max(var_13, ((((arr_4 [i_2] [i_2] [i_2]) ? 4294967286 : (arr_9 [i_2] [i_2] [i_2]))))))) ? (((((min(14, (arr_2 [i_2])))) || var_15))) : (arr_8 [i_2])));
        var_27 &= var_16;
        var_28 = (max(((((arr_2 [i_2]) < 32))), var_15));
    }
    var_29 = var_3;
    #pragma endscop
}
