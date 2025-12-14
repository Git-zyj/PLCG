/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 = (max((((min(6, (arr_2 [i_0]))))), (((1 | var_17) ^ var_16))));
        arr_4 [i_0 - 1] = 1;
        var_20 = (((var_9 ? (arr_3 [i_0 + 1] [i_0 - 2]) : (arr_3 [i_0] [i_0 - 2]))));
        arr_5 [i_0 - 1] [i_0] = 11;
    }
    var_21 = (min(var_21, ((min(17, ((var_6 ? (var_8 > var_15) : var_11)))))));

    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        var_22 += (1 ? (1 >> 0) : (max(6854723296845294992, var_4)));
                        arr_17 [i_1] [i_2 + 1] [i_2] = max(var_3, ((~(var_17 ^ var_2))));
                        var_23 |= (((((~1) + 2147483647)) << (((((~40790) + 40793)) - 2))));
                        var_24 = (min(((1 ? (arr_13 [i_2 - 1] [i_2 + 2] [i_2] [i_2 - 1]) : (arr_11 [i_2 + 2] [i_2 - 1]))), 1));
                        var_25 = (max(var_25, (((((((!17) ? 0 : (40780 * var_6)))) ? (max(((((arr_9 [i_1]) == var_10))), ((0 ? -1 : 1)))) : 0)))));
                    }

                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        arr_22 [i_1] [i_1] [i_1] [i_1] [1] [i_1] = (arr_2 [i_5]);
                        var_26 = (min(var_26, (((((min(((var_16 ? 0 : var_13)), 40790))) ? (((1 ? (arr_13 [i_1 + 2] [i_1 + 3] [i_2 + 2] [i_2 + 2]) : (arr_13 [i_1 + 1] [i_1 + 2] [i_2 + 1] [i_2 + 1])))) : ((44719 ? 4152721464 : 1)))))));
                    }
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        var_27 = ((5 * ((((arr_1 [i_3] [i_3]) / 9223372036854775800)))));
                        var_28 = arr_0 [i_1];
                        var_29 = (((4294967295 >> (var_13 + 105))));
                        var_30 = var_16;
                        arr_26 [i_2] [i_2 - 1] [i_2] [i_1] = ((((arr_21 [i_1 - 1] [i_1] [i_1]) && (arr_21 [i_2] [i_2] [i_3]))));
                    }
                    var_31 = (max(var_31, 1));
                    arr_27 [i_1] = (arr_12 [i_3] [i_2 + 2]);
                }
            }
        }
        var_32 = (max(var_32, ((max(0, ((var_13 ? 1 : (~21591))))))));
    }
    #pragma endscop
}
