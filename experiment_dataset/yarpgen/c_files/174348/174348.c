/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = ((-(arr_2 [i_0] [i_1] [i_0])));
                                var_15 ^= (arr_0 [i_3]);
                                arr_11 [i_0] [i_2] [5] [i_1] [i_2 - 1] [i_3] [i_3] = (((((-(arr_7 [12] [0] [i_3] [1] [i_4 + 1])))) ? var_7 : ((((arr_7 [8] [i_1] [i_2 - 1] [i_3 - 2] [i_4 + 1]) < 32767)))));
                            }
                        }
                    }
                    var_16 = 133955584;
                    arr_12 [i_1] |= -14633;
                }
            }
        }
    }
    var_17 *= var_2;
    var_18 += var_2;
    #pragma endscop
}
