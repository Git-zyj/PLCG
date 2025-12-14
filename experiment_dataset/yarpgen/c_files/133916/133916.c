/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 9186274018419968127;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [12] [i_1] = ((1 ? ((var_9 ? var_6 : (arr_6 [i_2] [i_0] [i_0]))) : (arr_0 [i_1])));
                    arr_10 [i_1] [i_2] = ((11524043545697279533 ? (arr_5 [i_0] [14] [i_2]) : var_10));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_12 += (arr_5 [i_0] [i_0] [i_4]);
                    var_13 = (min(var_13, (((1 ? 1 : 3658884797)))));
                }
            }
        }
    }
    #pragma endscop
}
