/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= -2046480075;
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [0] = ((((((!var_0) % ((var_14 ? var_15 : 7227305799470582255))))) ? ((~(arr_2 [i_0 - 1] [i_1] [i_1]))) : 9223372036854775796));
                arr_7 [i_1] [i_1] [4] = (((max((arr_0 [i_0 - 1]), var_14)) & (((max(var_9, var_3))))));
                arr_8 [i_0] [i_1] = ((((1 ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 - 1])))) ? (~1) : (((14672118356404990438 | -9223372036854775771) ? (((arr_4 [1]) ? 33 : 9223372036854775796)) : var_8)));
                var_19 = (max(var_19, (((var_11 ? (((arr_4 [i_0]) ? var_8 : (arr_2 [i_0] [i_1] [i_0 + 1]))) : ((var_7 ? (arr_2 [i_0] [i_1] [i_0 - 1]) : (arr_2 [i_0] [i_1] [i_0 + 1]))))))));
                var_20 = ((~(max(-9223372036854775796, var_16))));
            }
        }
    }
    var_21 = (min(var_21, ((var_7 ? ((var_3 ? -18707 : ((-22673 ? -7227305799470582256 : 18707)))) : var_6))));
    #pragma endscop
}
