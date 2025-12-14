/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = arr_4 [i_0];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = (~-20765);
                                var_16 = (max((arr_7 [i_4] [i_2] [i_0]), (arr_2 [4] [4])));
                                var_17 = (((((arr_8 [i_0] [i_3 + 1] [i_0] [i_4]) ? (arr_9 [i_0 + 3] [i_3 - 1] [10]) : (-2147483647 - 1))) << ((((!47492) > (arr_9 [8] [8] [i_0]))))));
                                arr_14 [i_0] [i_0] [i_0] = var_3;
                            }
                        }
                    }
                }
                var_18 = (((((arr_12 [i_1] [i_1] [i_0] [i_0] [i_0 - 1] [i_0]) ? var_4 : var_3))) ? -13227 : (arr_1 [i_0]));
            }
        }
    }
    var_19 = (1835958603 && 255);
    var_20 = (max(var_20, ((min(var_9, 0)))));
    #pragma endscop
}
