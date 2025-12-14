/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_10 = (((((arr_0 [i_0 - 1]) || 2143288306475162223)) ? (min((!4995953418623821690), (max((arr_0 [i_0]), 2147352576)))) : (((max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))))));
        var_11 = (min(var_11, ((((((arr_1 [2]) <= (arr_1 [8]))) ? (arr_1 [1]) : (max(var_2, 467293304339638583)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_3] [i_0] [i_1] [i_0] = var_0;
                                var_12 *= (((arr_4 [i_4] [i_1] [i_2 - 3] [i_3]) ? ((2147614731 ? 1352671117 : 17724025710357335252)) : (((((max((arr_3 [i_1] [i_2] [i_4]), 31))) ? 2942296191 : (722718363352216354 >= var_9))))));
                            }
                        }
                    }
                    var_13 = var_3;
                    arr_13 [i_0] [i_0] = (((((arr_10 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2 + 1]) || (arr_10 [i_1] [i_1] [i_2] [i_2 + 1] [i_0] [i_2 - 3]))) ? ((((!(arr_10 [i_1] [i_1] [i_1] [i_2] [i_0] [i_2 + 1]))))) : (max(var_8, (arr_10 [i_1] [i_2] [i_2] [i_2] [i_0] [i_2 - 3])))));
                }
            }
        }
    }
    var_14 = 17724025710357335252;
    var_15 = var_4;

    /* vectorizable */
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        arr_17 [i_5] = (((arr_14 [i_5 + 2]) | var_8));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_16 = (min(var_16, ((~(arr_14 [i_5 + 1])))));
            var_17 = (!6);
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_22 [i_5] = (((((arr_15 [i_5] [i_5]) - 7)) - var_8));
            arr_23 [i_5] = (arr_20 [i_5] [i_5 - 2]);
        }
        arr_24 [i_5 + 2] [i_5] = ((!(2147614704 && var_9)));
        var_18 = (max(var_18, ((((((109 ? 6841149030947782863 : 2147352603))) || ((!(arr_18 [i_5] [i_5] [i_5]))))))));
    }
    #pragma endscop
}
