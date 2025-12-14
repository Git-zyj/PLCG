/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (((min((min(var_3, var_0)), var_15)) * var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            var_17 -= ((!(var_5 && 12847287986598914874)));
                            var_18 -= ((arr_11 [i_4 + 3] [i_4] [i_4 - 2] [i_4] [i_4 + 1]) ? 0 : (arr_8 [i_4 - 3] [i_4 + 2] [i_3] [i_4] [12]));
                            var_19 = var_8;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_20 = arr_8 [i_0] [i_1] [i_1] [i_3] [i_5];
                            var_21 = (((((((((arr_8 [i_0] [i_1] [i_1] [i_3] [i_5]) * var_7))) ? (((arr_11 [i_5] [i_3] [i_1] [i_1] [8]) ? (arr_8 [i_0] [i_0] [i_1] [i_0] [i_0]) : (arr_0 [i_0]))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((!(((var_9 ? var_6 : (arr_3 [i_1]))))))) : (18446744073709551615 == 2147483647)));
                            var_22 |= ((((arr_11 [i_0] [i_1] [i_2] [i_3] [i_5]) >= (arr_1 [i_5]))) ? var_3 : (min(((var_5 ? (arr_8 [i_5] [i_0] [i_2] [i_0] [i_0]) : (arr_2 [i_2] [i_5]))), ((((arr_9 [i_0] [i_0] [i_0] [15]) == var_6))))));
                            arr_14 [i_0] [i_1] [i_0] = ((arr_3 [i_1]) + var_12);
                        }
                        var_23 ^= (((arr_11 [i_0] [i_0] [i_1] [i_2] [i_3]) < var_0));
                        var_24 |= (((var_2 | var_3) ? (max((arr_13 [i_0] [i_1] [i_1] [i_2] [i_3]), var_13)) : (var_5 << 0)));
                        var_25 = (min(var_25, (((-var_11 >> (var_13 - 4464014140598708531))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_18 [i_1] [i_1] = (var_3 ^ var_3);
                        var_26 = (982824544 ^ 2334343912384189255);

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_6] [i_7] = (arr_17 [i_6] [i_6] [i_6] [i_6]);
                            var_27 = ((-809794393 ? 18446744073709551615 : 8951217974957934935));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_28 += ((arr_6 [i_0] [i_2] [i_6]) - (1320992658 - 0));
                            var_29 = (min(var_29, var_7));
                            arr_26 [i_0] [i_1] [i_2] [i_1] [i_6] [i_8] = var_14;
                            var_30 = (min(var_30, (((-(arr_22 [i_0] [i_0] [i_0] [i_6] [10] [i_0] [i_0]))))));
                        }
                        arr_27 [i_1] [i_1] [i_1] [i_0] [i_1] = (var_3 * ((982824544 ? var_8 : (arr_5 [i_2]))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_31 = (((((arr_8 [i_0] [i_0] [i_1] [i_0] [i_0]) << (((arr_1 [i_0]) + 2126728852)))) < (!var_10)));
                        arr_31 [i_1] [i_1] = (((max(18446744073709551615, (min((arr_0 [i_9]), 12437834750029082687)))) - (min((arr_24 [i_0] [i_1] [i_2] [i_9] [i_1] [i_1] [i_9]), (max(var_14, 2147483647))))));
                    }
                    var_32 = 6357501625592052409;
                }
            }
        }
    }
    #pragma endscop
}
