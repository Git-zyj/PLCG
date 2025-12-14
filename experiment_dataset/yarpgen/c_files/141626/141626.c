/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_14 - (~var_2)))) ? var_16 : (((((17935218256076555587 ? -42 : 17935218256076555587))) ? -var_4 : -var_6))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = 16183910976732883366;
        arr_3 [i_0] [i_0] = (6183317942956092737 + 1890402870);
        var_18 += 791696693;
        var_19 = (arr_0 [2] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = arr_5 [i_1];

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_21 = ((var_12 ? (arr_7 [i_1] [i_2]) : (arr_5 [i_1])));
            var_22 = (min(var_22, (arr_8 [i_2] [i_2])));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_23 = (arr_10 [i_1]);
            arr_11 [i_1] [i_1] = (((arr_5 [i_1]) ? 8014385098578206817 : (arr_6 [i_1])));
        }
        var_24 = ((0 ? (arr_5 [i_1]) : (arr_5 [i_1])));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_25 += (!16183910976732883372);
        var_26 *= (arr_6 [i_4]);
    }
    #pragma endscop
}
