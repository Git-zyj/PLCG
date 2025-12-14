/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_2] [i_3] = ((((!(arr_3 [0] [6] [i_1 + 1]))) ? (((arr_3 [8] [6] [i_1 + 1]) ? (arr_3 [i_1] [i_1 + 2] [i_1 + 1]) : (arr_3 [i_0] [i_3] [i_1 + 1]))) : (((!(arr_3 [i_3] [3] [i_1 + 1]))))));
                            var_19 = ((!((((arr_9 [i_0] [10] [i_1 - 2] [i_3]) ? (arr_9 [i_0] [i_1] [i_1 - 1] [i_3]) : (arr_9 [i_0] [i_1] [i_1 - 1] [i_1]))))));
                            arr_11 [i_1] = (arr_5 [i_0] [i_1 + 1] [i_2] [9]);
                        }
                    }
                }
                var_20 = (arr_7 [i_1] [i_1] [i_0]);
            }
        }
    }
    var_21 = -var_11;
    #pragma endscop
}
