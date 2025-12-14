/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = ((!((((!var_7) ? ((max(var_4, var_8))) : (var_1 - var_4))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (min(var_14, var_8));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_0] = (((((((var_0 - (arr_3 [i_0]))) * (arr_3 [i_0])))) ? (arr_4 [i_0] [i_1]) : (arr_7 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3])));
                        var_15 = var_11;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_16 = var_9;
                            arr_21 [1] [8] [i_5] [i_6] [i_0] = (1706924711 - 11);
                            var_17 = (((var_8 - var_6) ^ ((~(((!(arr_17 [i_5] [i_5] [i_5] [i_5] [i_4] [i_0]))))))));
                            var_18 -= var_5;
                        }
                    }
                }
            }
            arr_22 [0] [0] |= min((min(var_7, (arr_2 [4]))), (arr_9 [1]));
        }
        arr_23 [i_0] = (((((min((arr_4 [i_0] [4]), var_0))) ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [9] [i_0]))));
        var_19 = var_10;
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_27 [24] [i_8] = ((~(~var_6)));
        var_20 *= ((((var_1 == (!var_1))) ? var_5 : ((min(0, ((((arr_24 [i_8] [i_8]) < (arr_24 [i_8] [i_8])))))))));
        var_21 = ((-((-78 ? 87 : 6734))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        arr_37 [i_8] [i_9] [1] = ((((min((arr_28 [3] [i_10]), -84))) ? ((((arr_28 [i_8] [12]) <= (~var_7)))) : ((~(((var_4 != (arr_32 [i_9] [i_10] [i_10]))))))));
                        var_22 = var_0;
                        var_23 ^= var_9;
                        var_24 = (arr_26 [i_8]);
                        var_25 = (min(var_25, ((((((((var_2 && (arr_30 [i_8] [16])))))) && (arr_34 [i_8] [i_8] [i_10] [i_11]))))));
                    }
                }
            }
        }
        var_26 = 1984;
    }
    #pragma endscop
}
