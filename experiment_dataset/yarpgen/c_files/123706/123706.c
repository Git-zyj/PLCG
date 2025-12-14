/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = -3387299030525251537;
                    arr_6 [4] = 2251797666201600;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, 1518251886));
                                var_16 = (min(var_16, (((((arr_3 [i_1 - 2] [i_1 + 1] [i_1 - 2]) ? (((arr_1 [i_3]) ? var_4 : -3387299030525251540)) : ((((arr_0 [i_0]) ? (arr_10 [3] [i_1] [i_1] [i_2] [11] [i_3] [i_4]) : var_11))))) | (((2047 ? (arr_4 [i_0] [i_1 - 1]) : (arr_3 [i_1 + 1] [i_4 + 1] [i_4 - 2]))))))));
                                var_17 = (min(var_17, ((min(236, 29622)))));
                            }
                        }
                    }
                    arr_11 [i_0] [i_0] = (((((-(arr_9 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 2])))) ? (arr_9 [i_0] [i_1] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_1] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_18 = ((var_13 ? var_9 : var_10));
    #pragma endscop
}
