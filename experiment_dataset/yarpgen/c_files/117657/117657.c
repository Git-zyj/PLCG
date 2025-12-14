/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -1749391977202031058;
    var_14 ^= (max(var_11, (min(var_10, var_6))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = ((~((min(13280, 1)))));
                                arr_16 [i_0] [i_1 + 1] [i_0] [i_0] [i_3] = ((min(13291, 52255)));
                                var_16 = (max(var_16, (((((max(52270, (arr_2 [i_0 + 3])))) < ((max(87, var_2))))))));
                                arr_17 [9] [i_1] [i_1 + 1] [9] [i_1 + 1] [i_3] = (arr_1 [i_4] [1]);
                            }
                        }
                    }
                }
                var_17 = -1260956802;
            }
        }
    }
    var_18 += (min(1, -55));
    #pragma endscop
}
