/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (((((arr_5 [i_2] [7] [i_0]) | (((arr_2 [i_0] [1]) / (arr_0 [i_0] [i_0]))))) | (arr_1 [i_1] [i_2])));
                    var_21 *= (((arr_5 [i_0] [i_0] [i_0]) ? (((((arr_4 [i_0] [i_0]) == ((((arr_3 [i_0] [i_2]) < (arr_4 [i_0] [i_0])))))))) : (((arr_4 [i_2] [i_2]) % (((arr_3 [i_0] [i_0]) ? (arr_3 [2] [2]) : (arr_5 [i_2] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
