/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] &= (max(((-7914958192841119923 * ((7914958192841119923 ? (arr_0 [8]) : var_10)))), (((((((arr_2 [i_0]) / var_6))) ? ((min((arr_1 [i_0]), 8))) : 1)))));
                arr_7 [i_0] = ((((arr_2 [i_0]) > (arr_2 [i_1]))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((+((((arr_10 [i_1] [i_0]) >= (arr_10 [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = max((arr_2 [i_0]), (((arr_2 [i_0]) ? (arr_13 [10] [i_0] [i_0] [i_2] [i_1] [i_0]) : (arr_13 [i_0] [1] [i_0] [i_0] [i_0] [i_0]))));
                                var_16 = (~((var_0 ? ((18446744073709551598 ^ (arr_5 [i_4]))) : (min((arr_5 [i_0]), var_2)))));
                                arr_17 [i_1] [i_4] = (max((arr_3 [i_0]), (min((arr_10 [i_0] [i_1]), (((arr_10 [i_3] [i_1]) - (arr_5 [i_0])))))));
                                arr_18 [i_4] [i_1] [1] [i_3] [i_4] [8] = (7914958192841119907 ? (arr_8 [i_0] [i_0]) : (((((arr_9 [i_4] [i_3] [i_2] [i_1]) >= 249)) ? ((20742 ? var_10 : 1)) : (((-7914958192841119922 ? 32754 : (arr_2 [i_4])))))));
                            }
                        }
                    }
                    var_17 |= ((((((var_8 ? var_14 : var_10)))) - ((-7914958192841119924 ? (arr_13 [i_1] [i_1] [i_2] [i_0] [i_1] [i_2]) : (arr_15 [i_2] [i_1] [i_1] [i_0] [i_0])))));
                }
            }
        }
    }
    var_18 = (max(var_18, ((-((-7914958192841119925 ? (~var_14) : (var_3 / var_11)))))));
    #pragma endscop
}
