/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 |= var_12;
                    var_18 ^= (16 - 51);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [7] [i_2] [i_0] [7] = (max(2335958723983236830, ((((arr_1 [i_3 - 2] [14]) ? (arr_1 [i_3 + 1] [i_3 + 1]) : (arr_1 [i_3 + 4] [i_3]))))));
                                var_19 += (arr_9 [i_0] [i_1] [i_1] [10] [i_3] [i_3 + 4] [4]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_20 = ((((((arr_14 [i_5]) ? (arr_14 [i_5]) : (arr_14 [i_5])))) == (~2120394688)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_21 = 0;
                        var_22 = -var_9;
                        arr_25 [i_5] [i_6] [i_7] [i_7] [i_7] = (arr_9 [i_5] [i_6] [i_7] [7] [i_7] [i_7] [i_7]);
                    }
                    var_23 = var_9;
                    var_24 = ((((!(arr_1 [i_7] [i_6]))) || (2335958723983236830 > 47886643)));
                    var_25 = (!2335958723983236830);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_26 = ((var_10 ? ((var_16 ? ((((arr_26 [1] [i_9 + 1] [i_5]) ^ (arr_14 [14])))) : ((~(arr_23 [i_5] [8] [8] [i_5]))))) : (arr_1 [i_9 - 1] [i_5])));
                    var_27 = (((~(arr_24 [i_9 + 2] [i_5]))));
                    var_28 = (~25);
                }
            }
        }
    }
    var_29 = ((((((!2335958723983236830) > (!-148339951)))) - var_7));
    #pragma endscop
}
