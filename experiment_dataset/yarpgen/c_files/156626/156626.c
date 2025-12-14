/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-var_0 ? var_11 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_15 = (min(((min((arr_7 [i_1] [i_1 + 1] [i_2]), (arr_6 [i_2] [i_0] [i_2])))), 2819822505901419913));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_16 = (((((15626921567808131722 & (((arr_2 [i_0] [i_1]) ^ 15875055006205594056))))) ? (arr_2 [i_2] [i_0]) : var_9));
                        var_17 = (max(var_17, ((((((~(arr_9 [i_0] [i_1 + 2] [i_1 + 2] [i_0])))) ? (arr_9 [i_0] [i_1] [i_1 + 2] [i_0]) : var_11)))));
                        arr_10 [i_0] [i_2] [i_1 - 1] [i_2] = (arr_0 [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_13 [6] [i_2] = (min(((((max(20571, (arr_8 [i_2] [i_2])))) ? var_9 : 1)), ((((~-18) & (arr_8 [i_2] [i_1]))))));
                        arr_14 [i_2] [10] [i_2] = (arr_3 [i_0] [i_0]);
                        var_18 = var_7;
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_19 = var_6;
                        var_20 &= ((~(((arr_9 [i_1 + 1] [i_1] [i_2] [i_0]) ? var_12 : (((-18 ? var_5 : var_8)))))));
                        var_21 = (max(var_9, (((-(arr_6 [i_2] [i_1 + 1] [i_5]))))));
                        var_22 = (((((arr_5 [i_0] [i_0]) ? (((arr_0 [2]) ? (arr_1 [4]) : var_0)) : ((min((arr_0 [i_0]), (arr_4 [i_0] [i_1 - 1] [14]))))))));
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        arr_20 [i_6 + 1] [i_2] [i_2] [7] = ((+(((arr_3 [i_1 + 1] [i_1 + 1]) ? var_9 : (arr_3 [i_1 + 1] [i_1 - 1])))));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_23 [i_0] [i_1] [12] [i_0] [i_2] [12] [9] = -var_1;
                            var_23 = (min(var_9, (((((min(var_7, var_11))) & ((~(arr_1 [i_0]))))))));
                            var_24 += (min((min((arr_9 [i_0] [i_2] [1] [i_0]), (arr_22 [i_6 + 1] [i_7] [4] [i_7] [i_1 + 2]))), (arr_9 [i_6 + 1] [i_1 + 1] [i_1 + 1] [i_0])));
                            var_25 = (arr_8 [i_2] [i_1]);
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_26 = -911849539;
                            var_27 = ((((~((min(var_1, var_0))))) != ((((min((arr_3 [i_1] [15]), var_9)) != (arr_26 [8] [i_2]))))));
                        }
                    }
                }
                var_28 = ((!(arr_6 [i_0] [i_0] [i_0])));
                var_29 |= (arr_3 [i_0] [i_1]);
                var_30 = (max(var_30, (arr_9 [i_0] [i_1 - 1] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
