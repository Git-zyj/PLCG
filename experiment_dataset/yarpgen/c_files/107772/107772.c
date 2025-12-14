/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((max((((!(((var_8 ? 0 : 1)))))), (arr_8 [i_0] [i_1] [16]))))));
                    var_14 = var_4;
                }
            }
        }
    }
    var_15 = var_8;
    var_16 = (max(var_16, 0));
    var_17 = (((~var_6) ? (~var_7) : ((1 + (0 + 0)))));
    #pragma endscop
}
