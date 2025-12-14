/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((max(((var_8 ? 17093630732491298030 : 3436010051)), var_13))) ? ((3436010054 ? (max(3436010052, 1)) : var_17)) : var_11)))));
    var_20 = ((124 ? ((((((251 ? 3226933959 : var_5))) ? var_11 : var_7))) : (max((max(5, 858957253)), 3436010023))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = max(-28839, (min(3436010066, var_9)));
                    var_22 = (min(var_22, ((((((max(123, 21)))) ? ((max((arr_7 [i_1 - 2] [i_1 - 1]), ((((arr_0 [2] [i_1 + 1]) || var_9)))))) : (~var_8))))));
                }
            }
        }
    }
    #pragma endscop
}
