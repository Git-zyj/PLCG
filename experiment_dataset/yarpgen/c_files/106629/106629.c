/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(var_13, var_0)))) + var_2)));
    var_17 = ((var_12 ? ((((!(((var_14 ? var_4 : var_6))))))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = min(((((((-127 - 1) + (arr_3 [i_0] [i_1])))) ? (arr_3 [i_0] [i_1]) : ((232 ? var_1 : var_8)))), -1461427437);
                var_19 = ((!(!var_14)));
                var_20 = var_2;
                var_21 = ((-((((arr_3 [i_0] [i_1]) > ((1 >> (var_15 - 10482535628507115697))))))));
                var_22 = var_12;
            }
        }
    }
    var_23 = (((((var_14 + (max(142989288169013248, var_7))))) ? -63 : (((-63 != ((var_5 ? -1461427458 : 1461427453)))))));
    #pragma endscop
}
