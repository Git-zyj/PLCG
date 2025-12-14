/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (var_7 & var_10);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_13 = (min(var_13, ((((arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_3 - 1]) <= (arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1]))))));
                        var_14 = (min(var_14, (((74 << (arr_2 [i_2 - 1] [i_3 - 1]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_15 = (((arr_11 [i_4] [i_2] [i_1] [1] [i_0]) <= (arr_7 [i_0] [i_0] [i_0] [i_2] [i_4])));
                        arr_13 [i_4] [i_4] [i_4] [8] |= (((((arr_1 [i_0]) ? var_6 : (arr_10 [i_0] [i_0] [i_0] [i_0]))) % (-127 - 1)));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_16 = ((((((((arr_17 [i_6] [i_2]) >= (arr_16 [i_0] [i_0] [i_6] [i_6]))) ? ((((arr_17 [i_0] [i_1]) << (((arr_12 [1]) + 107))))) : (arr_11 [i_6] [i_5] [i_2] [i_1] [i_0])))) ? (min((arr_16 [i_2] [i_2] [i_6] [i_2 - 1]), (arr_16 [i_2] [i_2 - 1] [i_6] [i_2 + 1]))) : (((min((((arr_1 [i_2]) || var_1)), (arr_17 [i_0] [1])))))));
                            arr_18 [7] [i_1] [i_2] [i_6] [i_6] = ((3 != ((((min((arr_3 [i_6]), 6376549704040548896))) ? (min(-2618270463082684902, (arr_3 [i_0]))) : 1))));
                            arr_19 [i_0] [8] [i_2] |= var_4;
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_17 = (min(var_17, ((((min((arr_4 [i_7] [1]), ((4114524057 ? var_7 : (arr_0 [i_2] [12])))))) & (min(((min((arr_5 [i_0] [i_0] [i_0]), 1))), (min(3785343631, var_4))))))));
                            var_18 = var_11;
                        }
                        arr_22 [i_1] [i_1] [i_1] = ((-45 ? (min((((arr_16 [i_0] [i_0] [8] [i_2]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_5)), ((min(var_3, 1))))) : var_4));
                        var_19 = (max(var_19, (((min((arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]), (arr_9 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1]))) ? ((min(((var_8 ? (arr_16 [i_0] [i_0] [8] [i_0]) : var_9)), (arr_10 [i_0] [i_0] [i_0] [i_0])))) : (min(((min(-124, 77))), (min(var_3, var_0))))))));
                    }
                    var_20 -= ((((arr_17 [i_2] [i_1]) | (((arr_14 [i_0] [i_1] [i_0]) ? 890267723 : (arr_8 [i_0] [1] [1] [i_2]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    var_21 = (max(var_21, (((((((arr_15 [i_0] [i_0] [i_9]) ? var_4 : ((min(var_7, (arr_28 [i_0] [i_8] [i_9]))))))) == (((arr_23 [i_8] [1] [1]) ? 0 : ((77 ? var_3 : -5111427883599369485)))))))));
                    var_22 -= (arr_21 [7] [13] [13] [7] [1]);
                }
            }
        }
        arr_29 [i_0] = (((min(3404699584, ((var_10 ? 890267723 : var_0))))) ? (arr_11 [i_0] [i_0] [i_0] [3] [i_0]) : (min((((232 < (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))), (min(var_3, var_11)))));
    }
    var_23 = (min(var_23, var_0));
    #pragma endscop
}
