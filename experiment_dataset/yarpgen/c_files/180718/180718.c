/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((var_9 > (var_1 != -1064364353246229631)));
                arr_5 [i_0] [i_1] [i_1] = (var_10 - var_5);
                arr_6 [i_0] = ((-1064364353246229605 && (arr_0 [i_0 - 3])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_17 [i_3] [i_2] = (((var_6 >= var_3) ? ((((!(arr_14 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]))))) : (((arr_8 [i_3 + 1] [i_3 - 1]) ? (arr_14 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1]) : (arr_8 [i_3 - 1] [i_3 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] [i_3 + 1] [i_4] [i_5 + 2] [i_6] [i_5] [13] = ((1064364353246229630 ? -1064364353246229631 : (((1064364353246229631 ? (arr_9 [i_5 + 2] [i_3 - 1] [1]) : var_6)))));
                                arr_24 [i_2] [i_2] [i_2] [i_5 - 1] [i_6] [i_5 - 1] [i_2] = -1064364353246229631;
                                var_12 = (((arr_21 [i_6] [i_5] [i_4] [i_3 + 1] [i_2]) ? var_7 : (((arr_13 [i_2] [1]) % -1064364353246229626))));
                                arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (((arr_12 [i_2]) ? 1064364353246229631 : (((((var_6 ? 207 : (arr_11 [i_2])))) ? (min(9229890946624785779, -1064364353246229636)) : 44215))));
                            }
                        }
                    }
                    arr_26 [i_2] [i_3 - 1] [i_4] [i_2] = (min(1, ((var_2 ? ((var_8 ? var_4 : 1)) : var_7))));
                    arr_27 [i_2] [i_3] [i_4] [i_4] = ((!((min((arr_20 [i_3 - 1] [i_3]), (arr_20 [i_3 + 1] [i_3]))))));
                }
            }
        }
    }
    #pragma endscop
}
