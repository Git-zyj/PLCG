/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (min((var_6 == -848706617), ((!(arr_3 [i_0 + 2])))));
                    arr_8 [i_0] [i_0] [i_0] = ((var_5 ? -2516 : ((1 ? -18229 : 16))));
                }
            }
        }
    }
    var_15 = (14066113157101258660 / 1);
    var_16 = (var_4 ^ var_8);
    var_17 = (min(var_9, 1));
    #pragma endscop
}
