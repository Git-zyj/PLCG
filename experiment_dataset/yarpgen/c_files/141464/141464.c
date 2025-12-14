/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max((!var_2), (~var_11))));
    var_21 = ((max((714367190 / var_1), -3580600089)) - var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (max(127, 3580600071));
                arr_5 [i_0] = (arr_3 [6] [i_1]);
                var_22 = var_18;
                arr_6 [i_0] [i_1] [i_0] = var_12;
            }
        }
    }
    var_23 = (((((min(var_3, 714367184)))) ? 262143 : var_4));
    var_24 = (((~var_0) ? ((262116 ? ((min(var_17, 6697))) : (((var_13 + 2147483647) >> (-5622 + 5626))))) : (((!((min(var_2, var_1))))))));
    #pragma endscop
}
