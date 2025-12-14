/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = var_1;
                arr_5 [i_0] [i_0] = -1;
                arr_6 [i_0] = 3;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    arr_13 [i_2] = arr_10 [i_2];
                    arr_14 [i_2] [i_2] [11] [i_3] = ((((((-6 ? var_8 : var_3)) >= (!var_8))) ? (((!(arr_11 [i_4 + 1] [10] [i_4 + 1] [i_2])))) : (((((arr_7 [8]) >> (arr_4 [i_3] [4]))) / -var_14))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_21 [0] [i_2] [i_3] [i_2] = (max((max((((var_10 + 2147483647) >> (var_0 + 65))), ((-125 ? -101 : 81)))), (((arr_3 [i_5] [i_5]) * (((arr_1 [i_2] [i_2]) ? 53 : -11))))));
                                arr_22 [i_3] [i_3] [i_2] [i_3] [i_3] = 32;
                                arr_23 [i_2] [i_3] [i_4 + 1] [i_2] [i_6] = ((((((var_15 ? 96 : var_10) != (((-34 >= (arr_3 [i_4 + 1] [i_6])))))))));
                            }
                        }
                    }
                    var_17 = ((21 << (-50 + 70)));
                }
            }
        }
    }
    #pragma endscop
}
