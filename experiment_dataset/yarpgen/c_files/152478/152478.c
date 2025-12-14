/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = 15205521641054824971;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1 - 1] = -15404158923033975112;
                    arr_10 [i_0] [6] [i_0] [i_0] = 1;
                    arr_11 [i_0] = (1 & -42712988949599541);
                }
            }
        }
    }
    var_15 = ((~(((63 ? 1 : 1145340126)))));
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_16 = (max(var_16, (arr_12 [i_3 + 1])));
                arr_18 [i_3 - 3] [i_3] [i_3] = max(var_0, -1);
            }
        }
    }
    #pragma endscop
}
