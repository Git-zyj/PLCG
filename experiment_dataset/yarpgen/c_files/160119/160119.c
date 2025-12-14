/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 -= (((((-85 ? -16 : 0))) ? (max((arr_4 [i_0] [i_0]), 10556172087082180858)) : (((((arr_4 [i_0] [1]) == 1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = 1;
                                var_16 = ((((((min(13, var_2)))) & (var_6 % var_5))));
                                var_17 = (min((~-14), ((~(arr_4 [i_1] [i_1 + 1])))));
                                var_18 = ((19 + (((arr_11 [i_1 + 1] [i_1]) ? (arr_3 [i_1 + 1] [i_1] [i_2]) : -14))));
                                var_19 = (!-1);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_20 = 1;
                                var_21 = ((((min((arr_13 [i_7 - 2]), 1))) ? (1693095820 > -22) : 0));
                                var_22 |= ((25848 ? (((((1 ? -29760 : -76))) ? 10 : -8)) : ((-17181 ? 83 : 6314))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_23 = -13;
                                var_24 = (((((~(((arr_24 [1] [1] [i_7]) ? var_4 : (arr_24 [i_6] [i_7 - 2] [i_10])))))) ? (((arr_20 [i_7 - 2] [i_10 - 1] [i_10 - 1]) ? ((((arr_13 [i_11]) <= 75))) : ((min(var_2, 14))))) : (!29774)));
                                var_25 = ((1 ? ((0 - (arr_26 [i_7 + 1] [i_7 - 2] [i_7] [i_7]))) : ((((arr_22 [i_10] [i_10] [i_10 - 1] [i_10] [i_11]) ? 40 : (arr_22 [i_6] [i_6] [i_10 - 1] [i_11] [i_11]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
