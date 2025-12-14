/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_1 [i_0 - 2] [i_0 + 1])));
        var_12 -= -0;
        var_13 = ((-1 ? 4278314992601364975 : 8727373545472));
    }
    var_14 += var_11;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_15 = ((32520 ? 4 : 12753));
                    var_16 = (((arr_10 [11] [i_1] [i_1]) + (40872 | 3751585550109977415)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_17 -= (arr_9 [i_5] [i_2]);
                                var_18 = ((~(min((arr_8 [i_4]), (arr_8 [i_1])))));
                                var_19 -= (((((arr_6 [i_1]) > (((arr_12 [i_1] [i_1] [i_4] [i_4]) | 8254046406695272076)))) ? ((~((var_9 ? (arr_6 [i_2]) : 35654)))) : (((~((1 ? 39 : 929696855)))))));
                            }
                        }
                    }
                    var_20 = (((((-(arr_11 [i_1] [14] [i_1])))) ? (max((arr_11 [i_1] [i_1] [i_1]), (arr_11 [i_3] [i_2] [i_1]))) : (min((arr_11 [i_1] [i_1] [i_3]), (arr_11 [i_3] [i_3] [i_3])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                arr_20 [i_6] [i_7] = (arr_19 [i_6]);
                var_21 = (max(((-1 % (~11779808508098459252))), (arr_16 [i_6] [i_6])));
            }
        }
    }
    #pragma endscop
}
