/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_0] [i_3] [i_2] [i_0] [i_0] = ((((((-(arr_8 [i_4] [i_0] [i_0] [i_1])))) ? (max((arr_2 [i_2]), var_11)) : (((arr_12 [i_0]) % var_7)))));
                                var_14 += (((min((arr_7 [i_4] [i_0 + 1] [i_4]), ((var_5 ? (arr_2 [i_3]) : var_10)))) | ((max(0, var_10)))));
                            }
                        }
                    }
                    var_15 = (max(var_15, ((min((((-var_0 ? ((var_9 ? (arr_13 [i_0] [i_0] [4] [i_2] [i_0] [2]) : (arr_5 [i_1] [10]))) : (!var_12)))), (min(var_3, var_10)))))));
                    var_16 = min(var_7, (((((var_3 ? 111 : var_4))) ? ((-(arr_1 [i_0]))) : var_8)));
                    arr_15 [2] [20] [i_2] &= (((min((~var_5), (min(802931594122338670, var_5)))) <= var_4));
                }
            }
        }
    }
    var_17 &= var_12;
    #pragma endscop
}
