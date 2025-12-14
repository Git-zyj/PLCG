/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    var_21 = ((min((((14334659003306236003 ? 1537747869 : var_17))), (min(4112085070403315613, -67)))));
    var_22 += (min((((-9222 ? var_2 : 46914))), ((((((-78 ? 0 : 0))) ? var_11 : (-1 && var_16))))));
    var_23 = (((((min(91, (-26045 | var_7))) + 2147483647)) >> (var_15 + 1636762204)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_24 = (arr_2 [1] [i_1]);
                arr_4 [i_1] [i_1] = ((((var_3 ? (arr_1 [i_0]) : (arr_1 [i_0]))) / ((4112085070403315613 * (arr_1 [i_0])))));
                arr_5 [i_0] [i_1] [i_0] = (arr_1 [i_0]);
                arr_6 [i_0] [i_0] [i_0] = ((~(((!(arr_1 [i_0]))))));
                var_25 = (min(var_25, var_2));
            }
        }
    }
    #pragma endscop
}
