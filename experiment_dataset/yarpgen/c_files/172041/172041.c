/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = var_6;
                arr_5 [i_0] [i_0] |= ((var_12 & (arr_2 [i_1 + 1] [i_1 - 3])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_18 = var_12;
                var_19 = ((var_4 ? (arr_3 [i_2 + 2]) : ((((var_1 + 2147483647) << ((((var_15 ? (arr_1 [i_2] [i_3]) : (arr_0 [i_3]))) - 18607)))))));
            }
        }
    }
    #pragma endscop
}
