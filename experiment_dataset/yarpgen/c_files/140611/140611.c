/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (min(((~(~var_6))), var_2));
    var_14 = -36;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = 32766;
                var_16 = (min(var_16, ((((((arr_0 [i_0]) / ((~(arr_1 [15]))))) == (arr_1 [i_0]))))));
            }
        }
    }
    var_17 &= ((((((~-1784285971) ? (var_3 | var_2) : ((122 ? var_5 : 32760))))) ? ((var_12 >> (var_9 - 332288161))) : var_1));
    var_18 = (((-34 == var_9) >> ((((-66 % (max(var_1, var_0)))) - 4160453556606034492))));
    #pragma endscop
}
