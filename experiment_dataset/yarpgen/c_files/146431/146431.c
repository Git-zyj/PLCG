/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((var_5 ? (max((max((arr_5 [8] [11] [11]), 0)), (~var_17))) : var_17));
                    var_20 |= ((((((19 && var_11) >= (((var_3 < (arr_2 [i_2] [i_2] [i_2])))))))) % (max((19 ^ 9), (arr_6 [i_0] [8] [1] [11]))));
                }
            }
        }
    }
    var_21 = -32761;
    #pragma endscop
}
