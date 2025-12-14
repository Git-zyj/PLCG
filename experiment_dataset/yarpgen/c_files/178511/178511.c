/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = max(var_15, (~var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = (~-7072755647991792887);
                var_18 = (max(var_18, ((max((((!var_6) ? (((max(var_7, (-127 - 1))))) : var_3)), ((((arr_4 [10]) ? (arr_4 [i_1]) : var_5))))))));
            }
        }
    }
    var_19 = (!var_10);
    #pragma endscop
}
