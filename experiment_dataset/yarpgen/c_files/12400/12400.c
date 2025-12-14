/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((var_6 ? (((max(var_2, var_6)))) : var_2)), var_1));
    var_17 = (min((min(((min(1, var_4))), (max(var_1, var_4)))), ((min(1, 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (arr_1 [i_0])));
                var_19 = (max(var_19, (arr_1 [i_0])));
                arr_4 [i_1] = ((((((arr_0 [i_0]) ? var_10 : (((max((arr_0 [i_1]), (arr_2 [i_0])))))))) && ((max((min(var_14, var_11)), var_6)))));
            }
        }
    }
    var_20 = (max(var_20, (min((max((min(var_5, var_11)), var_5)), var_11))));
    var_21 += 2676051463606224928;
    #pragma endscop
}
