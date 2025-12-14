/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = var_9;
                var_16 += var_4;
                var_17 = (max(var_17, (~5192276537523081037)));
                var_18 = (max((((-2147483640 && ((((arr_4 [4] [10]) ? 144115188075855871 : 14)))))), 13051724886953475513));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_19 = arr_6 [i_2] [i_2];
                var_20 = var_11;
            }
        }
    }
    #pragma endscop
}
