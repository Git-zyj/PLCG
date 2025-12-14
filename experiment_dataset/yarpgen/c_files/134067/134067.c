/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_16);
    var_19 = (8203064185506978697 + 8203064185506978694);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 += ((min((arr_1 [i_0]), var_10)));
        var_21 = var_14;
        arr_2 [9] [i_0] = (((-(((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_1] = (arr_3 [i_1] [i_1 + 1]);
                        arr_11 [i_1] [i_1] [i_1] [i_3] = (((-9223372036854775807 - 1) ? 10243679888202572918 : 994004092));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            var_22 = (arr_8 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2]);
                            arr_14 [i_1] [i_1] [5] [i_1] [2] [i_1] = -9223372036854775798;
                            arr_15 [i_1] = ((var_15 ? ((-(arr_13 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1] [i_1 - 1]))) : 1));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_5] [i_3] [i_1] [i_1] [i_1 + 3] [i_0] = var_9;
                            arr_21 [4] [i_1] [i_1] [4] [i_1] = ((((min(((var_16 ? var_10 : var_7)), (arr_9 [i_5])))) ? (min(var_13, ((max(-2991051081851305555, -1846231951))))) : (((var_11 >> (((arr_8 [i_1 - 1] [i_1] [13] [i_1 + 2] [i_1]) + 1952742106)))))));
                            arr_22 [i_0] [i_0] [7] [i_3] [17] [i_1] = var_6;
                            arr_23 [i_0] [i_1] [6] [i_1] [i_5] |= ((~(((((!(arr_17 [i_5])))) | var_7))));
                        }
                    }
                    arr_24 [i_1] [i_1] = ((var_1 ? (((((var_9 ? 10635333871526703197 : (arr_19 [8] [i_1] [1] [1] [1] [11])))) ? (8203064185506978698 ^ -2072012201678619703) : (((((-9223372036854775807 - 1) != (arr_6 [i_1] [8]))))))) : ((((arr_3 [i_1] [i_1]) - (arr_3 [i_1] [i_1]))))));
                    arr_25 [i_1] = ((15816982489650417320 ? -9223372036854775790 : 1846231951));
                    var_23 = (arr_13 [i_0] [9] [9] [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
