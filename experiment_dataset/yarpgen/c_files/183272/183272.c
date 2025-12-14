/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((!(!var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = ((((arr_7 [i_0] [i_0]) <= (arr_4 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [4] [i_1] [2] [2] [i_4 + 2] = (((((arr_10 [i_2] [i_2] [i_4 - 3]) <= (arr_10 [i_2] [i_3 + 1] [i_4 - 2]))) ? (arr_8 [i_0] [i_2] [i_4 - 3]) : 985102359581689988));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [9] = (((((arr_6 [i_0] [i_0] [i_2] [i_4 + 1]) | (arr_13 [i_0] [i_0] [i_0] [i_4 + 1] [i_3 - 1])))) | ((~(arr_2 [2]))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [1] [i_4 - 1] = (((((((8056 ? 985102359581689988 : -8056))) ? (arr_8 [2] [2] [i_3 + 1]) : (arr_4 [i_3 - 1]))) - (((!((((arr_8 [1] [1] [i_3 + 1]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_2 [i_0])))))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_2] = (((((63 ? 6318232231725440344 : 288230358971842560)))) ? (((!(arr_12 [i_0] [i_1])))) : ((-(arr_4 [i_1]))));
                    arr_18 [i_0] [i_1] [i_1] = (arr_5 [i_0] [i_1] [i_0]);
                }
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
