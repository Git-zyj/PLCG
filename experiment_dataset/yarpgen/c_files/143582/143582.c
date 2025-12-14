/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((((((((!(arr_0 [i_1]))) ? ((((arr_5 [i_2] [i_2] [i_2] [9]) || (arr_2 [i_0])))) : ((~(arr_5 [i_0] [i_0] [i_2] [i_2])))))) ? (arr_2 [i_0]) : (arr_5 [i_0] [i_1] [i_0] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = ((arr_11 [3] [3]) ? (arr_1 [i_0]) : (((((arr_12 [i_1]) || ((((arr_1 [i_4]) ? (arr_0 [i_0]) : (arr_9 [i_0] [i_0] [i_2] [i_3] [6] [1])))))))));
                                var_13 = (((((~(((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_11 [i_0] [i_1]) : (arr_8 [i_2] [i_4])))))) ? (min((arr_11 [i_0] [i_0]), ((min((arr_12 [10]), (arr_8 [i_0] [i_0])))))) : ((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [10]) : (((arr_10 [i_1] [i_2] [12]) ? (arr_11 [i_1] [i_2]) : (arr_11 [i_2] [12]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((((var_5 == var_6) || var_2)) ? (~-9022) : ((-((var_7 ? var_3 : var_0)))));
    #pragma endscop
}
