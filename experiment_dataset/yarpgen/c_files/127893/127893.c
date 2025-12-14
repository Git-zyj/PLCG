/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= ((var_10 ? var_10 : (1266681058 && 12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (-32767 - 1);
                    var_13 = ((var_4 ^ (((var_4 < (((arr_6 [i_0] [3] [i_2] [i_0]) ? (arr_5 [1] [i_1] [19] [19]) : (arr_5 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_14 = 7168;
                }
            }
        }
    }
    #pragma endscop
}
