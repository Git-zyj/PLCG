/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/23
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_2;
    var_16 = var_6;

    for (int i_0 = 2; i_0 < 14; i_0 += 2)
    {
        arr_4 [i_0] = var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1)
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4)
            {
                {
                    arr_10 [i_2] [i_1] [i_0 + 1] = (max((max((((+(arr_1 [i_0] [i_1])))), ((127 ? (0ULL) : -1344337413)))), (((((((arr_3 [i_0]) - (536346624ULL)))) ? 1 : (arr_8 [i_0] [i_0] [i_2] [i_0]))))));
                    arr_11 [i_2] [i_2] [i_2] [i_2] = -1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 2)
                        {
                            {
                                arr_16 [i_3] = (+(~120));
                                arr_17 [i_0 + 1] [i_3] [i_2] [i_3] [i_4] = 1;
                                arr_18 [i_0 - 1] [i_3] [i_3] [i_4] = ((+(((arr_3 [i_0 - 1]) ^ (arr_0 [i_0 - 1])))));
                            }
                        }
                    }
                }
            }
        }
        var_17 = var_14;
    }
    #pragma endscop
}
