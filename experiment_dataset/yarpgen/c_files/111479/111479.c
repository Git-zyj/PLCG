/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 127;
    var_16 = var_4;
    var_17 = (((-(var_14 && var_11))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2] [i_1] [i_1] = ((~(var_6 ^ var_1)));
                        var_18 = ((~((((arr_7 [i_1] [i_0 - 1] [9] [i_3] [i_0]) && (((3637620342144979590 ? 1 : var_2))))))));
                        var_19 = (((max(var_1, (((arr_8 [i_0] [i_0] [i_3]) ^ 1062352049))))) ? (((min(var_14, (arr_3 [i_0] [i_1] [i_2]))) & 0)) : ((min((~-18), -99))));
                    }
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        arr_15 [i_1] = (min(2147483644, var_3));
                        arr_16 [i_0 - 1] [i_0 + 3] [i_1] [i_2] [3] = ((~(((((~(arr_1 [i_1])))) ? 1 : var_1))));
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        arr_19 [i_1] [i_5 - 3] [i_2] [i_1 + 2] [i_0] [i_1] = (arr_1 [i_0]);
                        var_20 = (((((1 ? var_9 : 0))) && 1));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_21 = (max(var_21, var_14));
                            arr_26 [i_0 + 3] [i_0] [i_1] [i_0] [i_0 + 2] [i_0 + 2] = (((arr_3 [i_1 - 1] [i_1] [i_6 - 3]) && var_2));
                            arr_27 [i_0] [i_2] [i_2] [i_6 + 1] [i_7] [i_1] [6] = (var_5 < var_1);
                        }
                        for (int i_8 = 3; i_8 < 12;i_8 += 1)
                        {
                            var_22 = ((-(arr_4 [i_0 + 1] [i_6 - 2] [i_8 - 2])));
                            var_23 = (((var_2 && 4244445350662886187) ? var_0 : (~-1)));
                        }
                        var_24 *= var_1;
                        arr_30 [i_1] [4] [i_1 + 2] [i_1 + 3] [i_2] [i_6] = (arr_12 [i_1] [i_0 + 3] [i_2] [i_6 - 3] [i_1 + 1] [i_6 - 3]);
                    }
                    arr_31 [i_0] [i_1] [9] = (arr_12 [i_1] [i_1 + 2] [i_1] [8] [i_1 + 2] [i_1]);

                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        var_25 -= ((((min((~1), (((arr_8 [i_9] [i_9] [i_9]) ? var_7 : var_8))))) && 1073741823));
                        arr_35 [i_1] [i_1 + 2] [i_2] [i_9 + 2] = (var_1 | (min((var_12 < var_5), ((var_5 ? 1 : var_12)))));
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_26 = var_0;
                        var_27 = -1;
                        arr_39 [i_1] [i_1 + 1] [i_1] [i_1] = ((var_8 ? (max(-var_7, (arr_4 [i_10] [i_1] [i_2]))) : ((((arr_28 [8] [i_1] [i_2] [i_2] [i_2] [i_10]) | 1)))));
                    }
                    var_28 = (max(var_28, var_9));
                }
                var_29 = var_2;
                arr_40 [i_0 + 1] [i_1 + 3] [i_1] = (((max((((!(arr_38 [i_1] [i_0 + 2] [i_1] [i_1])))), var_7)) < var_9));
                var_30 += (!var_6);
            }
        }
    }
    #pragma endscop
}
