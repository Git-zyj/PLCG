/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_14 -= var_6;
                arr_5 [i_0] [i_1] [2] = ((-(-101 / 26822)));
                var_15 += (17540 > 17540);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                {
                    var_16 ^= var_12;
                    var_17 = ((-18108 ? ((((arr_8 [i_4] [i_3]) > (arr_13 [i_2 - 1] [i_3] [i_4] [i_3])))) : (arr_8 [i_3] [i_2 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
