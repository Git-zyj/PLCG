/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max((!var_11), (max(var_3, var_5))))) == (max(var_11, ((814035363 ? 3480931936 : 0))))));
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((max((max((arr_6 [i_1 + 2] [i_1]), var_5)), ((max((arr_6 [i_1 + 2] [i_1 + 2]), (arr_3 [i_1 + 2] [i_1])))))))));
                var_19 = (min((((~var_13) & (2 & var_11))), ((max((arr_0 [15] [i_1 - 1]), var_6)))));
                arr_7 [i_1] = 13;
            }
        }
    }
    #pragma endscop
}
