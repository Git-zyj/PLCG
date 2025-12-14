/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 ^= (((var_2 - var_12) ? (arr_1 [i_0] [i_1]) : ((3229375803 ? 2942110450 : 1942419022))));
                var_16 = (max((max((11576646606996141541 | 6870097466713410074), (max((arr_2 [i_0]), var_9)))), (max(((min(var_14, (arr_3 [1] [i_1] [i_1])))), (arr_2 [i_0])))));
                arr_5 [i_1] [1] [i_0] = (0 < 1);
                var_17 -= ((12599856935908050079 ? 0 : 11576646606996141541));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            {
                arr_11 [i_2 - 2] = (var_5 ? ((max(var_14, (arr_10 [i_2] [i_3] [i_3 - 4])))) : (var_5 % -var_7));

                /* vectorizable */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_18 = (((arr_13 [i_4 - 1] [i_6 + 4] [i_6]) ^ (arr_13 [i_4 - 1] [i_6 + 1] [i_6])));
                            arr_20 [i_4] [i_3] [i_4] [i_5] [i_6 + 2] = (((!var_6) ? (((arr_16 [i_6] [12] [i_4 - 1] [i_5]) ? var_2 : (arr_8 [i_6 + 3] [i_3]))) : var_2));
                        }
                        arr_21 [i_2 + 1] [i_3] [i_4] [i_3] = (arr_7 [i_2 + 1] [i_4 + 1]);
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_19 += (arr_13 [i_2] [i_2] [i_2]);
                        arr_24 [i_2 - 3] [i_4] [i_4] [1] [i_3 - 2] = var_7;
                        var_20 = ((var_0 ? var_2 : (arr_18 [i_2 + 1] [i_2])));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_30 [i_4] = (arr_19 [i_2] [7] [i_4] [i_8]);
                            arr_31 [21] [9] [i_3] [i_4] [i_9] [i_8] = (!var_8);
                        }
                        for (int i_10 = 4; i_10 < 20;i_10 += 1)
                        {
                            arr_35 [i_4] [i_3] [i_4 + 1] [i_8] = var_11;
                            var_21 = var_1;
                            var_22 = ((var_4 ? var_13 : var_8));
                            var_23 = ((-(!var_9)));
                        }
                        arr_36 [i_4] [i_4] [i_3] [i_4] = ((~(arr_7 [i_4 - 1] [i_3 - 2])));
                    }
                    arr_37 [i_4] [i_3] [i_2] [i_4] = (((arr_17 [i_4] [i_4] [i_4 + 1] [i_3] [i_4] [i_2 - 2]) >= ((((!(arr_34 [19] [i_3] [i_2 - 1] [i_2] [i_2])))))));
                    var_24 = ((((var_14 ? var_14 : var_12)) >> ((1 >> (-8261405576861400840 + 8261405576861400842)))));
                    var_25 = (((!(arr_10 [i_2] [i_2 - 3] [i_4 + 1]))) ? (((var_14 >= (arr_33 [6] [i_4] [i_3 + 1] [i_3 + 1] [13])))) : (arr_23 [i_2 + 1] [i_3] [i_4] [i_4] [i_4]));
                }
            }
        }
    }
    var_26 |= var_8;
    #pragma endscop
}
