/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 85;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 += 8212;
                    arr_9 [i_0] = 85;
                    arr_10 [i_2] [i_1] [i_0 - 1] = ((((min(170, 120))) ? (arr_2 [i_1]) : (49863 % 170)));
                    arr_11 [i_0] [i_1] [i_2 - 1] [i_2] = ((-(min((((788663565 >> (var_2 + 53)))), 14186056046153552049))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = var_10;
                                arr_18 [i_0] [i_1 - 1] [i_2] = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_10;
    var_16 &= 1132538490;
    #pragma endscop
}
