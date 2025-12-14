/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!-5734801739088183777);
    var_14 = ((var_12 ? (~var_11) : (!4294967295)));
    var_15 = (((((-((1270649301 ? var_4 : 6))))) ? 12 : (((((2859411943 ? var_0 : 59450))) ? (max(var_5, var_11)) : -4))));
    var_16 = ((var_11 ? ((((1 ? var_4 : var_12)) * var_8)) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((var_6 ? ((((max((arr_2 [i_0] [11] [i_1]), var_3))) ? (!9) : (arr_2 [i_0] [i_0] [i_1 + 2]))) : ((max(-32765, 7))))))));
                arr_5 [i_1 + 2] [i_0] = (arr_0 [i_0] [i_1]);
                var_18 += (min((!65024), -1959160912));
            }
        }
    }
    #pragma endscop
}
