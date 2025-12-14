/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = max(((max((arr_2 [i_0 + 3]), (arr_2 [i_0 - 2])))), (max((arr_0 [i_1]), (((arr_8 [i_1]) ? (arr_7 [i_0 + 1] [1] [1] [i_0]) : var_0)))));
                    var_17 *= (arr_3 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                {
                    arr_18 [i_4] [i_4 + 1] [i_3] [i_3] = max((((arr_16 [i_3]) ? (arr_3 [i_3] [i_3] [i_5]) : (arr_7 [4] [4] [i_5] [i_5]))), ((min(19118, var_9))));
                    var_18 *= (((arr_13 [4]) ? ((((min(206, (arr_3 [i_3] [i_4] [i_5 + 1])))) ? var_11 : (arr_9 [i_3] [i_5 + 2] [i_5] [i_4 - 1]))) : (arr_15 [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
