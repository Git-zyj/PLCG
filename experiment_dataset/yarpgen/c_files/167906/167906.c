/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_18));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] = (max((((max(var_12, var_11)))), var_10));
                    arr_8 [i_0] [i_2 - 2] = (((((arr_5 [i_0]) || (((var_10 ? 0 : -1))))) || var_10));
                    arr_9 [i_0] [i_1] [i_1] = (((arr_0 [i_0]) != var_8));
                    arr_10 [i_0] [i_2] [i_2 + 2] = (arr_4 [i_0] [8]);
                }
            }
        }
    }
    var_21 = var_5;
    var_22 = (max(58553622283410578, var_11));
    #pragma endscop
}
