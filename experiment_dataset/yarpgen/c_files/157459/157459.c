/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_8 [i_0] = arr_2 [i_0];
                arr_9 [i_0] [i_1 + 1] = (((4284644694 ? 190 : 1195438595104539856)));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1 + 1] [i_2] [i_3 + 2] [i_4] = ((61 ? (arr_0 [i_4 + 1]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                                var_10 = (~-10486);
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_11 = (arr_10 [i_0]);
                    var_12 = (max(var_12, (arr_7 [i_0] [i_1 - 1] [i_5])));
                }
                var_13 = (min(var_13, ((((arr_0 [i_1 - 1]) ? (((arr_18 [i_1 - 1] [i_1 - 1]) / (max(var_0, (arr_17 [i_0] [6]))))) : ((((var_1 != ((((!(arr_2 [4]))))))))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                arr_24 [i_6] [i_6] [i_7] = -190;
                arr_25 [1] [i_6] [4] = (((((1149203096 ? (arr_22 [i_6] [i_6] [i_7]) : (arr_22 [i_6] [i_7] [i_7])))) ? (min(867754396, 253)) : 2147483647));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_14 &= (min(8, (((arr_14 [i_8] [i_9 - 1] [4] [i_9 + 1] [i_9 + 1]) ? 2 : (arr_14 [i_8] [i_9 - 1] [0] [i_9 + 1] [0])))));
                                arr_33 [i_7] [i_7] [i_8] [i_8] [5] [i_9] = -21074;
                            }
                        }
                    }
                }
                arr_34 [i_7] [i_6] = (((11287572810217060189 != 1) ? (min((arr_31 [i_7] [2] [i_7] [i_7] [i_7]), -1)) : 1));
            }
        }
    }
    #pragma endscop
}
