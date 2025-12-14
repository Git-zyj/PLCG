/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = ((var_6 >= (~0)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1 - 1] [12] [i_1] [10] [i_4] = ((~(arr_12 [i_1] [i_1] [i_2] [i_1])));
                                arr_17 [i_0] [i_1] [i_1] [i_1] = ((((-1695005626 != var_2) < -26075)));
                                arr_18 [i_1] [21] = var_1;
                            }
                        }
                    }
                    arr_19 [i_0] [i_0] [i_1] [i_1] = var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_26 [i_5] = (~var_0);
                                arr_27 [i_6] [i_1] [i_2] [i_1] [22] = (-7841 - var_9);
                                arr_28 [i_1] [i_2] [i_2] = (((arr_5 [i_1] [i_2] [i_2]) ? -3450773659 : ((((((14613632385880105408 ? var_5 : 844193648))) ? (var_0 == var_13) : (13 == -38))))));
                                arr_29 [i_0 - 2] [i_1] [i_5] [i_1] [i_6] [i_2] = (((arr_2 [i_2 + 2]) ? (~9007164895002624) : (((arr_25 [i_2 + 2]) * var_0))));
                            }
                        }
                    }
                    arr_30 [12] &= (((((-481884791 ? 7866 : (min((arr_1 [i_0]), -13537))))) ? ((((var_12 - var_1) < 11564805512620972499))) : ((((var_0 >= var_6) >= var_11)))));
                }
            }
        }
    }
    #pragma endscop
}
