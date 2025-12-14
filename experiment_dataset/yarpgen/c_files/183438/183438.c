/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 || (((!var_5) && -1859838403274273393))));
    var_14 = 1859838403274273400;
    var_15 &= 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = min((((arr_7 [9] [i_1] [i_1] [i_1] [9] [i_1]) ? var_2 : 255)), (((((145 ? (arr_1 [i_0]) : (arr_3 [i_0]))) <= (((!(arr_7 [i_0] [i_0] [i_0] [i_0] [15] [i_0]))))))));
                            var_16 = (min(var_16, (((max(((min((arr_6 [i_0] [i_0] [i_0]), 1))), (((arr_5 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_6 [i_0] [7] [12])))))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_17 = (((min(7551, (arr_6 [i_0] [i_0] [i_0])))));
                    var_18 = (max(var_18, ((max(((0 ? (arr_1 [i_0]) : -323)), ((~(arr_1 [i_0]))))))));
                }
                arr_13 [i_0] = ((max((arr_12 [i_0] [i_0] [i_0] [i_0]), (arr_12 [19] [i_1] [i_1] [i_1]))));
                arr_14 [i_0] [i_0] [i_0] = 2147483647;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_19 = (min((min((arr_6 [i_0] [i_0] [i_0]), ((2147483647 / (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))), ((max(96, 43165)))));
                            var_20 = max((min((((231 < (arr_4 [i_0] [i_0])))), ((1 ? (arr_12 [i_0] [i_0] [8] [i_0]) : 61285)))), (((arr_5 [i_0] [i_0] [i_0]) ? (((-(arr_1 [i_0])))) : 3370672708486637772)));
                            var_21 = 2147483647;
                        }
                    }
                }
            }
        }
    }
    var_22 -= -8;
    #pragma endscop
}
