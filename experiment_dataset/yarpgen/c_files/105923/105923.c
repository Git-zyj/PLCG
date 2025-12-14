/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_10;
    var_13 = ((var_8 ? (((820244760 + var_6) ? (var_1 + var_1) : (var_5 >= 1))) : var_9));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((((min((arr_4 [i_0]), 109))) || ((min(((min((arr_6 [i_1]), var_7))), (arr_1 [i_0 + 2]))))));
                    arr_9 [i_0] [i_0] [14] |= (min((((arr_2 [i_0]) ? -1875130842 : ((min(var_3, 1))))), (((-(arr_6 [1]))))));
                    arr_10 [i_0] [i_1] [i_1] = 118;
                }
            }
        }
        arr_11 [i_0] [i_0] = 105;
        arr_12 [i_0] = (min(((var_6 - (arr_2 [i_0 - 3]))), (arr_2 [i_0 - 3])));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_14 = ((var_0 ? (((arr_1 [i_3]) ? (arr_1 [i_3]) : 1)) : (((((((arr_13 [i_3]) ? 9005010823690990006 : 714991004))) ? -190682919 : -71)))));
        var_15 = var_9;
        var_16 = var_5;
        arr_15 [i_3] = (((((arr_3 [i_3]) / 150)) == (((arr_7 [i_3] [i_3] [i_3] [i_3]) ? (98 - 77) : ((max((arr_3 [i_3]), 1)))))));
    }
    #pragma endscop
}
