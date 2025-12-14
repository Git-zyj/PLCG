/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (max((min((((var_15 ? var_9 : var_2))), var_6)), var_8));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = ((((max((arr_1 [i_0]), (max((arr_0 [i_0] [i_0 + 3]), 18446744073709551604))))) ? var_17 : ((((arr_2 [i_0]) ^ ((((arr_1 [i_0]) < 38802))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] [7] [i_1] = (((((min(12, var_8)) << 1)) << ((((arr_5 [i_0 + 3]) >= (arr_0 [3] [3]))))));
                        var_20 = (1318386221694188444 ? ((-(arr_4 [i_1]))) : 0);
                    }
                }
            }
        }
        var_21 -= ((((min((arr_2 [i_0 + 1]), var_14))) ? (((min(-9975, var_4)))) : ((var_15 ? (((arr_5 [3]) ? var_11 : 26735)) : var_0))));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_22 += (((((((arr_19 [i_4 - 1] [i_6] [i_5]) % (arr_14 [i_5]))))) ? ((max((1 < var_1), ((var_12 >= (arr_15 [2])))))) : ((((arr_14 [i_5]) != 1)))));
                    arr_22 [i_4] [i_6] = ((((max(((-(arr_18 [i_4]))), (arr_19 [i_4 - 1] [i_5] [4])))) % (((arr_15 [i_4 - 1]) ? var_0 : var_13))));
                    var_23 = (min((((!(arr_21 [i_5 + 1] [i_5 + 1] [i_6] [0])))), (~206)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_24 = (arr_27 [3] [11] [8] [i_4] [11] [i_4 - 1] [3]);
                                var_25 = (((((arr_29 [i_4 - 1] [i_5 + 1] [i_4] [i_7] [i_5 + 1] [9] [i_8 - 1]) < (arr_27 [i_8] [i_8 + 2] [i_8] [i_4] [i_8 + 2] [11] [i_8]))) ? (min(((-(arr_17 [11]))), ((((arr_26 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4] [7]) < (arr_16 [i_4])))))) : (((11 < var_5) ? var_7 : var_0))));
                                var_26 = ((((arr_20 [i_4 - 1]) | (arr_20 [i_4 - 1]))));
                                var_27 += (min((((arr_24 [i_5] [i_5] [i_5 + 3]) >> (((arr_25 [i_5 + 3] [12] [i_5 - 2] [i_5 + 3]) + 19268)))), ((min((arr_19 [i_5 + 1] [i_5 + 1] [i_5 + 4]), (arr_24 [i_5] [i_5] [i_5 + 2]))))));
                            }
                        }
                    }
                }
            }
        }
        var_28 |= (((-28468 ^ 1) | (((((arr_18 [4]) ? 1 : (arr_17 [i_4])))))));
    }
    #pragma endscop
}
