/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((~6949904260941733508) <= (((var_9 ? var_5 : (arr_1 [i_0] [i_0]))))));
                arr_7 [i_0] = ((((((arr_5 [i_0] [i_1]) | (arr_0 [i_0])))) ? var_16 : var_13));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
