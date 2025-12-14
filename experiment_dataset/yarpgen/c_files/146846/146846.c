/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 += (arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((((-(!1)))) ? ((-((var_3 ? 3190234268 : (arr_4 [i_3]))))) : 1)))));
                                var_18 = var_11;
                                var_19 += (arr_13 [i_4]);
                                arr_15 [i_0 + 1] [i_0] [i_2] [i_3] [i_1 - 1] = ((~(min((~var_13), 6761138004231601849))));
                                var_20 += 6761138004231601849;
                            }
                        }
                    }
                    var_21 = (!0);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            {
                var_22 = ((var_12 ? -103 : (((!((max((arr_8 [i_5] [i_6]), 255))))))));
                arr_21 [i_5] [i_6] = ((!((min(-63, (arr_14 [i_5] [i_6] [i_6] [i_6] [19]))))));
                var_23 = (((max((-127 - 1), 253696108))) % ((-99 ? var_13 : ((((arr_6 [i_5] [i_5] [i_5]) ? 0 : var_2))))));
            }
        }
    }
    var_24 |= var_15;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 14;i_9 += 1)
            {
                {
                    arr_29 [i_7] [1] [4] [i_9] = ((+(((((var_4 ? (arr_26 [i_8]) : (arr_8 [i_7] [i_9])))) ? (arr_13 [i_9]) : (var_15 && 1)))));
                    arr_30 [i_7] [i_8] [i_7] = (arr_19 [i_9] [i_9] [i_9]);
                    arr_31 [i_7] [i_7] [i_7] [1] = (arr_12 [i_7] [i_8] [i_9] [i_8] [20] [21] [2]);
                }
            }
        }
    }
    #pragma endscop
}
