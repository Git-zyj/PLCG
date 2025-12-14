/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = ((~(((arr_3 [i_2] [i_2]) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [8] [i_1] [8] = (max((((((((arr_11 [i_0] [i_2] [i_3 + 2]) ? 1 : (arr_10 [i_4] [i_3] [i_2] [i_1] [i_0])))) ? 1 : (1 % -95)))), ((+(((arr_9 [i_3] [i_1] [i_3]) ? var_6 : 11614230284963558357))))));
                                var_16 = ((+(((arr_8 [i_1] [i_2]) ? (arr_4 [i_3 - 1] [i_3 + 1]) : (arr_11 [i_0] [0] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
