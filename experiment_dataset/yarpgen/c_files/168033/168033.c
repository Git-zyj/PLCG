/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_2] [i_0] = 67108848;
                    arr_8 [i_0] [i_1] [i_0] = 255;
                    arr_9 [i_2] [i_0] [i_2] [i_2] = 33525;
                    arr_10 [i_0] [i_0] = 18;
                    arr_11 [6] [i_0] [6] [i_2] = -1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                arr_16 [i_3] [10] = -32756;
                arr_17 [i_3 - 1] [0] = -12;
                arr_18 [3] [i_3] [3] = 1545558462;
                arr_19 [0] = 10;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                arr_25 [0] = 7925504178708802323;
                arr_26 [i_5] = 84;
                arr_27 [0] = 1;
            }
        }
    }
    #pragma endscop
}
