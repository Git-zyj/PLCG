/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (arr_0 [i_0]);
                var_11 |= (max((arr_0 [i_0]), (((arr_5 [1] [i_1] [i_1]) ? (arr_1 [4]) : var_2))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_12 = (min(var_12, var_7));
                            arr_15 [i_0] [i_0] [i_2] [i_0] = (max((max((arr_5 [i_0] [i_1] [i_1]), (arr_8 [i_0] [5] [i_3]))), ((min((arr_0 [i_1]), (arr_5 [i_0] [i_1] [i_0]))))));
                            var_13 = var_5;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_14 = ((var_0 ? (arr_11 [i_0] [i_0] [i_4] [i_5]) : (arr_7 [i_0] [i_1] [i_4] [i_0])));
                            arr_20 [i_0] [i_1] [i_0] [i_5] = ((-0 ? ((((!(arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]))))) : var_2));
                            var_15 = ((((((arr_2 [i_1]) ? (arr_2 [i_4]) : (arr_2 [i_5])))) - (max(((-(arr_4 [17]))), (((arr_10 [i_0] [i_0] [1] [i_0]) + var_5))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
