/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((min(66, 65526)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                var_21 = (max(var_21, (arr_3 [i_0])));
                var_22 ^= (((arr_5 [i_0 + 1] [i_1 - 2] [i_2 - 1]) ? 16 : var_15));
            }
            arr_7 [i_0] = (!8128);
            var_23 += ((((arr_5 [i_0] [i_1] [i_0]) ? 1 : (arr_0 [i_0 - 1]))));
        }

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_24 = 1;
                            var_25 = ((1 ? (arr_16 [i_5] [i_3 + 1] [i_3 - 1] [i_5]) : var_13));
                            var_26 = (max(var_26, 10));
                        }
                    }
                }
            }
            var_27 = (max(var_27, (((30863 ? -4959747193660994670 : 9)))));
            var_28 = (max(var_28, (!1)));
        }
        arr_17 [i_0] = ((var_13 << (var_17 - 15381210534359926783)));
    }
    for (int i_7 = 4; i_7 < 9;i_7 += 1)
    {
        var_29 ^= ((((-(arr_16 [8] [10] [i_7] [i_7]))) != -2147483629));
        arr_20 [i_7] = (arr_0 [i_7]);
        var_30 = (arr_6 [4]);
        var_31 += (max(1540698793, (arr_1 [i_7 - 3])));
    }
    var_32 = (~var_7);

    /* vectorizable */
    for (int i_8 = 3; i_8 < 17;i_8 += 1)
    {
        var_33 = var_2;
        var_34 -= (15 ? 175 : -24988692);
        arr_23 [i_8] |= 127;
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_27 [12] |= min(5606814510362684573, 66);
        var_35 = ((max(var_9, (arr_25 [i_9]))));
    }
    #pragma endscop
}
