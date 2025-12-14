/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= 162;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((var_6 >> (arr_0 [7]))))))));
                    var_17 = (max(90, (arr_4 [i_0] [i_2])));
                    var_18 = (((!((((arr_4 [i_1] [i_1 + 1]) & 9))))));
                }
            }
        }
    }
    var_19 = 88;
    var_20 = (((-127 - 1) % var_10));
    #pragma endscop
}
