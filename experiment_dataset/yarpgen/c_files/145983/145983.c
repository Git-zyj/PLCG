/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (min((~var_3), (min(1, var_10))));
        var_12 = (max(var_12, ((min(var_1, var_9)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_13 = (min(1, (arr_4 [i_1])));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_14 = ((~((15429626369442586823 ? var_2 : 1))));
                var_15 -= 108;
                arr_9 [i_1] [i_2 - 1] [i_2] [11] = (((arr_6 [i_3] [i_2] [i_2 + 1]) ? (arr_5 [i_2 + 2]) : (~var_7)));
            }
            var_16 = 1542096327;
            var_17 ^= (((arr_7 [i_2 + 3] [i_2] [i_1] [i_1]) ? (arr_7 [i_2 - 2] [10] [1] [i_1]) : (arr_7 [i_2 - 1] [i_1] [i_1] [i_1])));
        }
        arr_10 [i_1] [i_1] = ((((((-61 ? 63 : -2920954233462542413)))) ? (((arr_6 [i_1] [i_1] [i_1]) ? 1 : var_5)) : (arr_5 [16])));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_13 [i_4] = (4294967295 + 184);
        var_18 = (arr_1 [i_4] [i_4]);
        var_19 = (arr_4 [i_4]);
        var_20 = (min(var_20, (((((arr_4 [i_4]) ? (arr_4 [i_4]) : var_5))))));
    }
    var_21 = (((2920954233462542412 ? -15660 : -4294967295)));
    #pragma endscop
}
