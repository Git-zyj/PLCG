/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_6 [i_1] [i_1] [i_2] = var_9;
                    var_16 = (min(((616585032 ? 13642637053049524427 : (13642637053049524436 * 0))), (((-46420 + (arr_3 [i_1]))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [21] [i_1] [i_0] [i_0] = (((arr_2 [i_1]) && var_0));
                        var_17 = ((var_13 ? ((var_6 ? (arr_0 [8]) : var_5)) : (arr_3 [i_1])));
                        arr_10 [i_1] [i_1] [i_1] [i_1] = (13642637053049524434 / 616585032);
                    }

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_2] [i_4] = ((~(arr_8 [i_1])));
                        arr_14 [i_1] [i_1] = ((125 && ((((arr_7 [i_0] [i_0] [i_1] [i_4]) ? var_8 : 13642637053049524427)))));
                        var_18 = ((((((max((arr_1 [i_2] [19]), 13642637053049524427)) >= var_2))) + ((max(49, (arr_3 [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_2] [i_0 + 3] [i_2] |= (((arr_2 [i_2]) ? (((var_3 ? var_7 : var_7))) : 4804107020660027176));
                        var_19 = (max(var_19, (arr_5 [i_2] [i_0] [i_0 - 3] [i_0 - 1])));
                        var_20 = ((113 ? var_4 : (13642637053049524445 >= 13642637053049524437)));
                        arr_18 [i_1] [i_1] [i_1] [i_5] = (((-(arr_16 [0] [i_1]))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_21 |= ((var_4 && ((((0 * -27) + (arr_12 [i_2] [i_1]))))));
                        arr_21 [i_0] [i_1] [i_2] [i_6] [i_6] |= ((((arr_12 [i_2] [6]) >= var_11)));
                        var_22 = (((min(var_4, (arr_2 [i_1]))) + ((max((arr_8 [i_1]), 57344)))));
                    }
                }
                var_23 = ((-117 ? 66 : 149));
                arr_22 [i_1] [10] [i_1] = 118;
                var_24 = (min(var_24, ((((((-12754149422012028156 ? ((min(var_7, (arr_4 [16] [16] [i_1] [i_0 + 2])))) : var_10))) ? (max(var_3, (arr_2 [10]))) : (arr_5 [14] [i_1] [6] [i_0]))))));
            }
        }
    }
    var_25 |= ((13642637053049524436 ? var_14 : var_11));
    #pragma endscop
}
