/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 9223372036854775807;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((((arr_4 [i_1 + 1] [i_1 + 1]) || (arr_4 [i_1 - 2] [i_1 - 2]))) ? -1252935728291377617 : ((((arr_4 [i_1 - 1] [i_1 - 1]) << (arr_5 [i_1 - 1] [i_1 - 1]))))));
                arr_7 [i_0] = max(14, (arr_1 [9]));
            }
        }
    }
    var_18 = (max(var_18, -242));
    var_19 = (max(var_19, (((var_12 ? ((var_7 ? var_16 : (571306033 + var_3))) : 1)))));
    #pragma endscop
}
