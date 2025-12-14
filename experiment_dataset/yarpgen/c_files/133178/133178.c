/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((((arr_6 [i_2 + 1] [i_2 - 3] [i_2 - 1]) ? ((53886 ? 671560652 : 3623406643)) : ((671560645 ? 13229 : 0)))))));
                    var_22 = ((!(((var_15 ? ((var_9 ? -8088437704674779316 : var_3)) : var_14)))));
                    arr_7 [i_0] [i_0] [19] [i_0] = (max(((var_11 ? -1129042008 : 1)), (((arr_3 [i_0] [8] [8]) % (arr_1 [1])))));
                }
            }
        }
    }
    #pragma endscop
}
