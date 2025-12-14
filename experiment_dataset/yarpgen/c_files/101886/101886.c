/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = ((((((arr_1 [i_1 + 3] [i_1 - 1]) ? (arr_2 [i_1 + 3] [i_1 - 1] [i_1]) : 1))) ? (arr_1 [i_0] [3]) : (max(((1 ? 63615 : (arr_4 [i_0]))), var_9))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] |= (((max((arr_0 [i_1 + 1] [i_1 - 1]), var_0)) % var_5));
                    arr_9 [i_0] [i_0] [i_2] [i_2] |= ((-(((~1) ? (arr_7 [i_0] [i_1] [i_1]) : ((57694 ? 1 : 0))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_1] [i_1] [i_1] [i_1] |= (arr_0 [i_0] [i_1]);
                    var_13 = ((~(arr_0 [i_0] [i_1 - 1])));
                    var_14 |= (((arr_4 [i_1 + 3]) && (arr_4 [i_1 + 2])));
                    arr_13 [i_0] [i_0] [i_0] [i_0] |= ((((var_8 <= (arr_2 [i_0] [i_0] [i_0]))) ? (((arr_4 [i_0]) ? 166 : (arr_10 [i_0] [i_1] [i_3]))) : (((arr_11 [i_0] [i_0] [i_3] [i_1]) ? (arr_5 [i_0]) : (arr_7 [i_0] [i_1] [i_3])))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_15 |= (((arr_5 [i_5 + 3]) ? var_11 : var_4));
                                var_16 = (((arr_11 [i_1] [i_5] [i_5] [i_5]) ? ((1 ? (arr_7 [i_5] [i_0] [i_0]) : var_5)) : (arr_16 [i_0] [i_1 - 2] [i_4] [8])));
                            }
                        }
                    }
                    var_17 = ((1 ? ((91 ? 166 : 158)) : (arr_23 [i_4] [i_4] [i_4] [i_4] [i_0] [i_0] [i_0])));
                    arr_24 [i_1] [i_1] [i_0] [i_0] = var_10;
                }
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_7] [i_7] = (arr_17 [i_0] [i_1] [i_7 + 2] [i_8]);
                            var_18 = (((arr_2 [i_1 + 4] [i_1 + 4] [i_8]) && -1));
                            arr_31 [i_0] = 5754079329433722740;
                        }
                    }
                }
            }
        }
    }
    var_19 |= var_11;
    #pragma endscop
}
