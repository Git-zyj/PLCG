/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((var_12 / 209), (((((max(209, var_7))) || -1)))));
    var_15 = 0;
    var_16 = (max(var_16, ((((16 ? ((min(var_8, var_1)) : (var_9 * var_1))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((max(209, ((47 ? (arr_4 [22] [i_2] [8] [i_4 + 1]) : 27)))) | 0)))));
                                var_18 = (~var_8);
                                arr_12 [i_2] [1] [i_2] [i_2] = var_11;
                            }
                        }
                    }
                    arr_13 [i_2] [i_1] = (max((max((((16 ? 63233 : 0))), (((arr_0 [i_0]) ? (arr_3 [i_1]) : var_6)))), ((min(var_9, (((arr_2 [i_0] [i_0]) + 65519)))))));
                    var_19 = (max(var_19, (((!((max(44247, 15))))))));
                    arr_14 [i_2] [i_1] [i_2] = 43;
                }
            }
        }
    }
    #pragma endscop
}
