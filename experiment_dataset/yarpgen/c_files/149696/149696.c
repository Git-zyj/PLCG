/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = (min(((((var_8 ? 94 : var_3)) << (((max(-207197568, var_5)) + 207197575)))), (~3)));
                    var_11 = (max(var_11, ((((((161 ? (187 > 180) : (1732239328 / -25)))) ? ((max((max((arr_2 [i_0] [i_0]), (arr_8 [i_0] [i_1] [i_1] [i_2]))), 0))) : (((arr_4 [i_2] [i_2] [i_2]) / (((max(var_2, var_2)))))))))));
                }
            }
        }
    }
    var_12 = max((!-25), 177);
    #pragma endscop
}
