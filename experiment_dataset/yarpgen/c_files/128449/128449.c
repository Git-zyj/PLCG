/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 += (arr_8 [i_0] [i_0] [i_2] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_1] [i_1] [i_1] [i_2] [i_1] [i_4] = (min((((arr_4 [i_3 - 2]) * (arr_4 [i_3 - 2]))), (arr_4 [i_3 + 1])));
                                arr_14 [i_3] = (arr_3 [i_4 + 2] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((((max((min(0, var_9)), 181))) <= 0));
    var_13 = ((184 ? (74 / var_5) : (((!(((var_1 ? 1 : var_2))))))));
    var_14 = (((((var_0 ? var_5 : var_5))) != (max(((var_10 ? var_10 : var_8)), var_2))));
    var_15 = ((((((1 ? -8847410694294431250 : var_3)))) == var_8));
    #pragma endscop
}
