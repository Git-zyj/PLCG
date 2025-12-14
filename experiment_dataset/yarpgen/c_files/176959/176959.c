/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((~var_2) || ((((!160895577) | var_10))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (max(var_19, ((((((var_4 / 2501847060308444368) + 9223372036854775807)) >> (((((min(1, (arr_1 [i_0])))) == var_8))))))));
        arr_2 [i_0] [i_0] = ((var_12 << (((arr_0 [i_0]) + 32))));
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_20 -= (-(((((~(arr_4 [i_1 + 2] [i_1])))) ? (((!(arr_4 [i_1] [i_1])))) : (arr_4 [i_1 - 2] [i_1 + 1]))));
        var_21 = ((~(arr_4 [i_1 + 2] [i_1 - 1])));
        var_22 = ((!var_3) ? (arr_3 [i_1 - 3]) : (arr_3 [i_1 - 2]));
        var_23 = ((arr_4 [i_1 - 1] [i_1 - 2]) ? (((arr_4 [i_1 - 2] [i_1 - 2]) ? (arr_4 [i_1] [i_1 - 3]) : var_16)) : ((min((arr_4 [i_1 - 2] [i_1 + 2]), (arr_4 [i_1] [i_1])))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                var_24 &= (((max(((176 ? 833800713571585720 : 127)), 1316182351))) ? (arr_4 [i_2] [i_3]) : (max(((-(arr_3 [i_2]))), (((arr_4 [i_3 + 1] [i_3]) ? (arr_5 [i_2] [i_3]) : 39544)))));
                var_25 = (((!1587848075) == ((-(arr_6 [i_3 - 1] [i_3 + 1])))));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_26 = (min(var_26, ((((((((-19 ? (arr_15 [i_2] [i_3 - 1] [i_3 - 1] [i_5] [i_6]) : (arr_8 [i_2] [i_6])))) ? ((((arr_17 [i_2] [i_3] [0]) || (-2147483647 - 1)))) : (((arr_5 [i_2] [14]) >> (var_10 - 1663748204))))) * ((((((arr_16 [i_2] [i_3] [i_4] [i_5] [i_6]) ? (arr_12 [12]) : var_3))) ? (arr_5 [i_2] [12]) : ((31736 / (arr_10 [i_6] [i_5] [i_4] [i_3]))))))))));
                                var_27 += (-1386513871 * (((!((((arr_8 [i_2] [i_3 - 1]) - var_0)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_26 [i_2] [i_2] [i_4] [i_7] [i_8] &= ((!(arr_10 [i_3 + 1] [i_3 - 1] [i_3 - 1] [11])));
                                var_28 = (min(var_28, ((-((-(arr_0 [14])))))));
                            }
                        }
                    }
                }
                var_29 = max((((!(arr_13 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3])))), (((((((arr_25 [10] [10] [i_3] [i_3 - 1] [7]) | (arr_23 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3])))) || var_6))));
            }
        }
    }
    var_30 = var_15;
    #pragma endscop
}
