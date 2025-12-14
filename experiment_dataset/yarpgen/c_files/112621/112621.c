/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 5252323757601496135;
    var_14 = ((var_7 << (((13194420316108055497 - 1) - 13194420316108055482))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_1] [i_0] = var_1;
                    var_15 = ((!(arr_5 [i_0] [i_1] [i_2 - 3] [i_2 - 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_3 - 1] [i_2 - 2]);
                                arr_15 [8] [i_3 + 2] [i_2] [i_1] [i_0] = (arr_5 [i_4] [i_2] [i_1] [i_0]);
                                arr_16 [i_4] [i_4] [i_3] [i_2] [i_1] [0] [0] = (!(arr_10 [i_2 - 3] [i_3 - 1] [i_3 + 1] [1] [i_3 + 1]));
                            }
                        }
                    }
                    var_16 = (arr_9 [i_0] [i_2] [i_0] [i_0] [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_17 = (-1 * var_2);
                                arr_21 [5] [i_5] [1] [i_0] [i_0] = 5252323757601496097;
                                arr_22 [i_0] [i_1] [1] [i_5] [i_6] = (arr_6 [i_0] [i_1] [i_2 - 1]);
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    arr_25 [i_7 - 1] [i_7] [i_0] [i_0] = ((-(((arr_18 [i_7 - 1] [i_7 - 1] [2] [i_7 - 1] [i_7 - 1] [i_7 - 1]) >> (((arr_18 [i_7] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1]) - 2813061254))))));
                    arr_26 [i_0] = (5252323757601496135 / -1);
                    arr_27 [i_0] [i_0] [i_0] = ((+((7320785873587522815 ? (arr_1 [i_7 - 1]) : var_1))));
                    var_18 ^= -1;
                }
                arr_28 [i_1] [i_1] [i_1] = ((var_5 ? 1455992080 : ((713275460 ? 10 : -7320785873587522815))));
            }
        }
    }
    #pragma endscop
}
