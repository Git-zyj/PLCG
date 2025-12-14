/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (0 - 1988164647);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (min(((~(arr_14 [0] [14] [i_2] [1] [1] [i_2]))), (((~(arr_13 [i_4 + 1] [i_4 - 1] [22] [i_4 - 1] [3] [i_4 + 1] [20]))))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_4 + 2] = ((((((arr_5 [9] [9] [9]) ? (arr_3 [11]) : 1988164647))) ? ((((min(2306802643, 20)) != (arr_8 [i_0] [12])))) : (((var_14 ? var_13 : -8)))));
                                var_18 = var_5;
                            }
                        }
                    }
                }
                var_19 -= (max((((var_7 << (((var_5 + 25354) - 3))))), ((min(-11, var_4)))));
            }
        }
    }
    #pragma endscop
}
