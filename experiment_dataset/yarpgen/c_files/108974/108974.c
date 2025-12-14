/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_1] = -32762;
                    arr_8 [i_0] [14] [i_0] = ((((((var_8 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))) + 2147483647)) >> (arr_2 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    arr_17 [i_4] [i_4] [i_4] = 0;
                    arr_18 [i_4] [i_4] = (14977 == 0);
                }
            }
        }
    }
    #pragma endscop
}
