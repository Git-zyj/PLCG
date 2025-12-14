/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_1, ((30758 ? 1 : 1))));
    var_17 = (min((((min(var_14, 1)))), var_5));
    var_18 = (max(var_18, var_5));
    var_19 = ((1102804213567716393 ? ((((min(1, 3942419478))))) : (min(((var_14 ? var_11 : var_11)), var_14))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 ^= ((1 ? (~1102804213567716402) : ((+(min((arr_2 [i_0]), 3942419478))))));
                var_21 = ((((min(1102804213567716389, (arr_1 [1])))) ? ((min((352547843 / 2325125769), var_2))) : (min((min((arr_2 [i_0]), 0)), ((min((arr_3 [i_1]), (arr_0 [i_0] [17]))))))));
            }
        }
    }
    #pragma endscop
}
