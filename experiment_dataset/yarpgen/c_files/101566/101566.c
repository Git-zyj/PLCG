/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] = (arr_9 [i_0] [i_1] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = ((-(~var_10)));
                                arr_17 [i_4] [i_0] [i_0] = (arr_11 [i_0] [i_2 - 2]);
                                arr_18 [i_0] [i_1] [i_0] [i_3] [i_0] = ((((((var_9 ? (arr_3 [i_3]) : var_0)))) ? (((!(arr_9 [i_1 - 2] [i_1 - 3] [i_2 - 1] [i_0])))) : ((var_6 ? var_1 : (((4294967295 == (arr_8 [i_4 - 3] [i_1] [i_1] [i_0]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [1] [i_0] [i_0] [i_0] = (((((+(((arr_23 [7] [i_2] [7]) ? (arr_15 [i_0] [i_0] [i_2 - 2] [i_5 + 4] [i_6]) : var_8))))) ? ((((arr_5 [i_6 + 2] [i_2 + 1] [3]) == ((((arr_20 [i_1]) < 536870911)))))) : 1));
                                arr_25 [i_0] [i_1] [i_0] [i_5] [i_6] = var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_30 [i_8] [i_7 + 1] [i_0] [i_1] [i_0] [i_0] [i_0] = ((12 ? (min(((-1 ? 836402180025980503 : 1449510025)), (arr_13 [i_7]))) : (arr_15 [i_0] [i_0] [9] [i_0] [i_8])));
                                var_19 = 134217728;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
