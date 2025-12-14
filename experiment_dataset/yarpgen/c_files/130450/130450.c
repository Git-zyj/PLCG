/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_15 = var_4;
                        var_16 = (arr_1 [i_0] [i_0]);
                        arr_12 [i_3] [i_0] [i_1] [i_1] [i_0] [i_0] = (min((min(var_7, (0 * 0))), (((((188 ? (arr_3 [6] [i_1 - 2] [i_0]) : 2228812748))) ? ((~(arr_2 [i_0]))) : (!var_12)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_0] [i_1] [0] [i_1] = (arr_4 [i_0 + 1] [9]);
                        arr_16 [i_0] [i_0] [i_0] [i_0] = (((((var_7 ? 1 : -512))) - var_3));
                        var_17 = ((-(arr_3 [1] [i_1 - 1] [i_2])));
                        var_18 = (~-524286);
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_19 = ((((max(5629028185622447783, ((min((arr_13 [i_0] [i_2] [i_5]), var_3)))))) ? (~14886471103393042254) : ((((arr_18 [i_0]) ? (((arr_2 [i_0]) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 347299542)) : 250)))));
                        var_20 ^= ((min(((var_12 ? var_2 : 4047788026743966032)), (((2228812748 ? var_8 : (arr_19 [i_5] [1] [i_5] [8] [i_5] [i_5])))))));
                        var_21 = (arr_8 [i_0 - 1] [i_0 + 1]);
                    }
                    var_22 = (7 / 951151353);
                }
                var_23 ^= (((((min(-827951423, (arr_3 [i_0 - 1] [i_0] [i_0 - 1]))) - (arr_17 [i_0 + 1] [i_1 - 2] [i_0] [4] [i_0 + 1]))) % (min(((15534591666550256053 | (arr_11 [i_0] [i_0] [7] [i_1]))), -33))));
                var_24 -= (max((arr_4 [i_0 + 1] [i_0 + 1]), var_2));
                var_25 *= ((max(((min(var_4, (arr_18 [0])))), var_1)));
                var_26 = (max(var_26, ((((((1 ? (arr_2 [2]) : var_11))) ? ((-33 ? 14862 : 33)) : (((((arr_14 [0]) <= (arr_14 [1]))) ? (arr_7 [4] [i_1] [i_0 + 1] [4]) : (arr_2 [8]))))))));
            }
        }
    }
    #pragma endscop
}
