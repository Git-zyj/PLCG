/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_11;
                arr_5 [16] [16] [16] = 59961;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [8] [i_1] [14] [i_1] = ((var_3 ? (arr_2 [12] [3] [i_2]) : ((max(-1986792993, var_12)))));
                            arr_14 [20] [i_1] [6] [6] [5] [20] = -7611;
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_1] = ((var_7 & (((((max(var_3, 59066))) || var_1)))));
            }
        }
    }
    #pragma endscop
}
