/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_12 = ((-(arr_0 [i_0 - 2] [i_0 - 1])));
        var_13 += -var_1;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (arr_1 [i_1 - 2] [i_1 - 2])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_15 [i_3] [i_3] [4] [5] = arr_8 [i_4] [2];
                        arr_16 [i_3] [i_3] [i_3] [i_3] &= var_10;
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_15 = (max(var_15, 7808));
            var_16 -= (!1698433170252867138);
        }
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((0 - (arr_21 [i_6 + 3])));
        var_17 = (((((~(arr_5 [i_6])))) && (26830 & -22919)));
        arr_23 [i_6] = (((var_1 + 2147483647) >> (((arr_4 [i_6 - 1] [i_6 + 1] [9]) ? var_10 : 4526885464169943880))));
        var_18 = (-9223372036854775807 - 1);
    }
    var_19 = var_7;
    #pragma endscop
}
