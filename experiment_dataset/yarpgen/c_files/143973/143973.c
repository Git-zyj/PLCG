/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((((var_12 ? var_7 : var_14))) && -var_5))), var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 -= ((((max((arr_3 [9]), (max(var_6, (arr_1 [i_2])))))) ? (max(-5349174600046491756, ((var_8 ? var_2 : -5349174600046491762)))) : (var_9 >= var_14)));
                    var_17 -= 56;
                    arr_7 [i_0] [i_1] [i_2] = (min((((arr_4 [i_2 + 1]) ? 9725 : (arr_4 [i_2 + 1]))), (min((arr_3 [i_2 - 1]), var_4))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_2] = (((arr_9 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] [12]) == var_14));
                        var_18 += (((~(arr_0 [12]))));
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_2 - 2] [i_4] = (max(var_4, var_14));
                        arr_18 [i_0] [i_0] [i_2] [13] = (((((arr_11 [i_2] [i_2 - 2] [i_4 + 3]) ? (arr_11 [i_2] [i_2 - 2] [i_4 - 1]) : (arr_11 [i_2] [i_2 + 1] [i_4 - 1])))) || (((arr_11 [i_2] [i_2 + 1] [i_4 + 3]) || (arr_11 [i_2] [i_2 - 1] [i_4 + 3]))));
                        arr_19 [i_0] [i_0] [i_0] [i_2] = ((var_13 ? var_14 : (arr_9 [0] [i_2] [6] [i_4 + 1] [i_4] [i_4])));
                        arr_20 [i_2] = max((0 / 55), (((var_13 % -2147483638) ^ 65524)));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            arr_24 [i_2] = (((arr_16 [i_0] [i_4 + 3] [i_2] [i_4 - 1]) ? (!var_3) : (arr_9 [i_0] [i_2] [i_2 - 3] [2] [i_0] [i_5 + 1])));
                            arr_25 [i_2] [i_4 + 1] [11] [i_1] [i_2] [i_2] [i_2] = (-2147483647 - 1);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_29 [i_6] [i_2] [i_2 + 1] [i_2] [i_2] [i_0] = ((!(arr_2 [i_2 - 3])));
                            arr_30 [i_2] [i_2] = (((arr_11 [i_2] [i_4 + 3] [2]) | (arr_9 [i_2 - 2] [i_2] [i_2] [i_2 - 2] [4] [10])));
                        }
                    }
                    arr_31 [i_2] [i_2] [i_0] = (max(-15635, 55817));
                }
            }
        }
    }
    var_19 *= var_14;
    var_20 += ((var_5 - (max(var_8, var_5))));
    #pragma endscop
}
