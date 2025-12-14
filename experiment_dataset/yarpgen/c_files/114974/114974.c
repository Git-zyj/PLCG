/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (0 + 52749);
                var_17 = (max(var_17, 0));
                var_18 = (((arr_1 [i_1]) ? ((max(0, 50203))) : ((-(arr_1 [i_0])))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2 - 1] = (arr_2 [i_2]);
        arr_11 [i_2] [i_2 + 1] = (1 != 4294967290);
        arr_12 [i_2 - 1] = (arr_3 [6]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    var_19 = (~862290949012638834);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_20 = (var_9 - -1680);
                                var_21 = (((arr_7 [i_2 + 1]) - (arr_3 [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = ((1682 | ((var_0 ? (arr_19 [i_7] [i_7] [i_7 - 1] [i_7] [i_7]) : 1679))));
        arr_27 [i_7] [i_7 - 1] = (arr_14 [8]);
    }
    var_22 = (max(((5810361637312523531 >> (-17696801396239294406 - 749942677470257206))), (((!(var_8 * 0))))));
    #pragma endscop
}
