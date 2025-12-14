/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (min(((~(arr_5 [i_0] [i_1] [i_0 + 2]))), ((((arr_2 [i_0] [i_1]) > (arr_0 [i_0] [i_2]))))));
                    arr_9 [i_0] [i_1] [i_2] = (((arr_6 [i_0] [i_0 + 2] [i_2]) ? (((arr_1 [i_0]) ? (((min((arr_7 [i_2] [i_0]), (arr_7 [i_1] [i_1]))))) : (min((arr_3 [i_2]), -6705066557736956779)))) : -976518786));
                    arr_10 [i_2] [i_1] [i_0] = ((-(132120576 * -1442564648)));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = var_10;
                        var_13 = (((~(arr_7 [i_0 + 1] [i_0 - 2]))));
                        var_14 += (min(((((arr_5 [i_0] [i_0 - 1] [i_2]) | (arr_5 [i_0] [i_0 - 2] [i_0])))), (((arr_5 [i_0] [i_0 + 1] [i_3]) | var_12))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = var_2;
                        var_15 = (min((((~(arr_7 [i_0 - 1] [i_0 - 2])))), var_4));
                        arr_19 [i_0] = ((((min(-3391434791610826715, (3391434791610826715 || var_1)))) && ((!(((arr_7 [i_0] [i_1]) && (arr_1 [i_0])))))));
                        var_16 = (max(var_16, ((min((max(((1 ? 3391434791610826715 : 103079215104)), (arr_0 [i_0] [i_0]))), (((-((max((arr_13 [i_4] [i_1] [i_0]), 242)))))))))));
                        arr_20 [i_0] [i_1] [i_2] [i_4] = (((arr_2 [i_0] [i_0]) ? -3391434791610826715 : -3865032042));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_24 [i_0] [i_2] [i_5] = ((((~(arr_11 [i_0] [i_0]))) | (max((-1585954305400805139 < 1954792073), (~57959)))));
                        var_17 = ((~(max(2712819260, (arr_11 [i_0 + 2] [i_1])))));
                        var_18 = (min(var_18, (arr_11 [i_0] [i_5])));
                        arr_25 [i_2] [i_1] [i_2] = ((((((arr_6 [i_0] [i_0] [i_0 - 1]) / (arr_2 [i_0 + 2] [i_0])))) ? (((-(!var_2)))) : var_12));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_19 = var_11;
                        arr_29 [i_0] [i_1] [i_2] [i_6] = ((62553 & ((~((3698580265021687003 ? 8445 : 1))))));
                    }
                    arr_30 [i_2] [i_1] [i_2] = (-127 - 1);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                var_20 = (min(((-(max(1, 3865032042)))), 650239440));
                var_21 = (~21941);
            }
        }
    }
    var_22 = ((var_8 ? ((~(var_12 & 74))) : (((max((min(280, 1)), (!71)))))));
    #pragma endscop
}
