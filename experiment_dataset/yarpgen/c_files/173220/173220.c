/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_15 < ((7 << (var_9 < var_15)))));
    var_17 &= ((var_1 ? var_5 : ((min(var_2, 7)))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_18 = ((~(((~6667679627090607622) ? ((var_14 + (arr_1 [i_0] [i_0 - 1]))) : (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] [i_0] = ((((!(((var_10 ? var_2 : var_2))))) ? 1970504207 : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = var_2;
                    var_20 = ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 182)));
                    var_21 = ((arr_6 [i_2]) - (((191 ? var_13 : var_4))));
                    arr_11 [i_0] [i_1] [i_2] = ((((var_9 ? ((~(arr_5 [i_1]))) : var_1)) & (arr_8 [i_1])));
                }
            }
        }
        var_22 -= (-(arr_5 [9]));
        var_23 = (((max((min((arr_5 [i_0 - 2]), -7834257684820110304)), (arr_9 [i_0 - 1] [i_0 - 1]))) << (((~var_0) + 53864))));
    }
    #pragma endscop
}
