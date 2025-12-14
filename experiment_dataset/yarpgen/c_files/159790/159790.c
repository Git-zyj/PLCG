/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_14 = 1;
                    var_15 = (((arr_3 [i_1] [i_1] [i_1]) ? (((1 ? 14719662368832121841 : 1389346972))) : ((-(arr_6 [i_1 - 1] [i_0] [i_0])))));
                }
            }
        }
    }
    var_16 += 16812777789191272186;
    var_17 = var_3;
    #pragma endscop
}
