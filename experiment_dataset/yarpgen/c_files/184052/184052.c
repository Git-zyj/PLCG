/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((max(((max((arr_5 [i_0]), (max(4225427052, var_8))))), (max((arr_4 [i_0]), var_2)))))));
                arr_6 [i_0] [i_0] [i_1] = (((((((((arr_3 [13] [i_0] [i_0]) & (arr_4 [5])))) ? (arr_2 [i_0] [i_1]) : ((max((arr_2 [i_0] [i_0]), var_5)))))) ? (arr_4 [8]) : (max((arr_3 [i_0] [16] [8]), (((arr_2 [14] [14]) ? (arr_4 [10]) : (arr_0 [4])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            {
                arr_13 [i_2] = -758016547837890606;
                var_11 = (max(var_7, ((((arr_11 [5] [5]) % (arr_5 [11]))))));
            }
        }
    }
    #pragma endscop
}
