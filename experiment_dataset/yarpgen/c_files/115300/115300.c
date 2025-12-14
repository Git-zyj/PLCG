/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 -= ((-(min((((arr_6 [i_1]) ? (arr_6 [i_0]) : (arr_6 [i_2]))), (((arr_6 [i_0]) ? 0 : 5992))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] = (arr_7 [i_1]);
                                arr_15 [i_0] [i_4] [i_2] [i_2] [i_4] = (((((((arr_7 [i_0]) ? var_12 : (-9223372036854775807 - 1)))) ? (min((arr_10 [i_0]), (arr_10 [i_2]))) : (arr_1 [i_0] [i_1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
