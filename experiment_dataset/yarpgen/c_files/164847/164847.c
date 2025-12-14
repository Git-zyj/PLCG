/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_0] = var_1;
                    var_11 = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = (~((((arr_14 [i_0] [i_0] [i_3 - 1] [i_3] [i_4 + 1] [16]) <= (arr_14 [i_2] [i_1] [i_3 + 1] [i_3] [i_4 + 1] [i_2])))));
                                var_13 = (~14996324727423002388);
                            }
                        }
                    }
                    arr_15 [i_0] [i_2] [i_2] = min((((arr_5 [i_2] [i_1] [i_0]) >> (((arr_7 [i_0]) + 9492)))), (--1));
                }
            }
        }
    }
    var_14 = var_0;
    #pragma endscop
}
