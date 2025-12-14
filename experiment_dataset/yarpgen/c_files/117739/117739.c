/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (--1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = 236;
                                var_22 -= ((~(arr_5 [i_2] [i_2] [i_2] [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [8] [i_2] [i_0] [i_6] = (arr_2 [i_0] [17]);
                                var_23 -= (arr_16 [i_6] [i_1] [i_2] [i_1] [i_0]);
                            }
                        }
                    }
                    var_24 ^= (((arr_17 [i_2] [i_2] [i_0] [i_0] [1]) >= (~128)));
                }
            }
        }
    }
    var_25 = var_16;
    #pragma endscop
}
