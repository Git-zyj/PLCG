/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = var_7;
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] = 1;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_1] = max((min(829620438, 7275270234546329637)), 2382876521169148654);
                    arr_11 [i_2] [i_1] [i_0] = (max(-1698597932, (arr_1 [4])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [1] [i_2] [4] = ((((min((~98), (((var_14 && (arr_1 [3]))))))) ? (((((1865084109 ? 177 : var_9))) ? 2382876521169148654 : 1698597918)) : (((((arr_5 [1] [i_2]) >= -1698597932))))));
                                arr_17 [5] [i_3] [i_3] [i_2] [i_1] [i_3] [i_0] = ((72 ? (arr_12 [i_3 + 1] [i_3 - 1] [i_4 - 2] [i_4 + 1]) : (((arr_0 [i_3 + 1]) * (((min(var_9, var_14))))))));
                            }
                        }
                    }
                    arr_18 [i_0] [4] = 46103;
                }
            }
        }
    }
    #pragma endscop
}
