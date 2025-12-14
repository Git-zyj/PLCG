/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((!var_11) ? ((min(530304135, var_17))) : ((530304115 ? var_5 : var_17))))) ? (min(((-91 ? 3764663161 : var_9)), ((-1438207101 ? 390504228 : -261763290)))) : ((((max(var_0, var_0))) ? var_1 : ((530304115 ? var_7 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (0 > -545371955);
                arr_5 [i_0] [i_0] = max((arr_1 [i_1] [i_0]), (arr_2 [i_0]));
                arr_6 [i_0] = (max(((var_16 ? (((var_11 ? var_16 : (arr_4 [i_0] [i_0] [i_1])))) : var_14)), (((!((max(77, 0))))))));
                var_21 ^= ((530304115 ? 0 : 515905004));
            }
        }
    }
    var_22 = (~(((!545371937) ? (((var_6 ? var_15 : -91))) : var_12)));
    var_23 = var_10;
    #pragma endscop
}
