/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((arr_0 [i_0]) ? (max(var_2, (arr_2 [i_1] [i_1] [i_1]))) : (((max(1, 1)))))) ^ ((min((arr_0 [i_0]), ((0 & (arr_3 [i_0] [i_0] [i_0]))))))));
                arr_7 [i_0] [i_1] = 1;
                arr_8 [i_0] = (!var_10);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_15 [i_3] [i_2] = (arr_12 [i_2] [i_2] [i_2 - 1]);
                arr_16 [i_2] = (((arr_0 [i_2 - 2]) ^ (arr_0 [i_2 - 1])));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_19 [i_4] |= ((arr_13 [i_4] [i_3] [i_3]) ? (((!(arr_4 [i_2] [i_2 - 2] [i_4])))) : (arr_0 [i_4]));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_26 [i_2 - 2] [i_6] [i_2] [i_5 + 2] [i_2] = (min((((arr_0 [i_2 + 2]) ? (arr_9 [i_2 - 3] [i_2]) : (arr_0 [i_2 + 1]))), (((var_5 && (arr_17 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 1]))))));
                                arr_27 [8] [13] [i_3] [i_4] [i_5] [i_2] [i_6] = (((1715028297 ^ (arr_5 [i_2 - 1] [i_2 + 1]))));
                                arr_28 [i_2] [i_2] [i_3] [4] [6] = 1;
                            }
                        }
                    }
                    arr_29 [i_3] [i_3] = min((arr_11 [i_2 + 2] [i_2 + 1]), (min((arr_17 [i_2 - 1] [i_2 - 3] [i_2 - 2] [0]), ((~(arr_1 [i_2] [i_2]))))));
                }
                arr_30 [i_2] [i_3] = (((min((arr_24 [11] [8] [i_2 - 1] [i_2 - 2] [i_3] [i_3] [i_3]), (arr_17 [i_2 - 3] [i_2] [i_2 - 2] [i_2 - 3])))) ? (arr_14 [9] [i_2 + 2] [i_2 - 3]) : var_0);
            }
        }
    }
    var_13 = var_8;
    #pragma endscop
}
