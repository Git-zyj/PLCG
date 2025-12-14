/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((-8734271913371326917 || 1) ? (((arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 2]) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 2]) : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 2]))) : (max((arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 2]), (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 2])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] = (((arr_9 [i_0 + 2]) + (arr_9 [i_0 + 2])));
                            var_16 += (((((arr_1 [i_3 + 4] [i_0 - 1]) ? (arr_1 [i_3 + 4] [i_0 - 1]) : (arr_1 [i_3 + 4] [i_0 - 1])))) ? (((arr_0 [i_1] [i_2]) ? (arr_3 [i_0] [1] [1]) : (arr_0 [i_0] [i_2]))) : (arr_9 [i_3 + 4]));
                            arr_11 [i_2] [i_2] [i_2] &= ((33554431 + ((-(arr_0 [i_3 + 4] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    var_17 &= var_10;
    #pragma endscop
}
