/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 1] &= (((((120 - (-127 - 1)))) ? (min(8685190678547721202, (((1099454549 ? 253982385 : 1))))) : ((+(((arr_1 [i_0] [12]) + (arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = -1;
        var_17 *= (((!(((~(arr_0 [i_0])))))));
        arr_4 [i_0] [i_0] = 8685190678547721189;
    }
    var_18 = 4167635057;
    var_19 = (min(var_19, (((17 ? 12178567560569474631 : var_4)))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_1] = (8685190678547721189 < 1);
                var_20 = (max(var_20, (((4611686018427387904 - ((min((arr_8 [i_1] [i_2 - 4]), 1))))))));
            }
        }
    }
    #pragma endscop
}
