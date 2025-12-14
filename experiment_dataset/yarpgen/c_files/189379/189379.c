/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((~(arr_4 [i_0]))));
                var_17 = (min(var_17, (arr_1 [i_0])));
                var_18 = ((!(arr_3 [i_0] [i_1])));
                arr_5 [i_1] [i_0] = (arr_3 [i_0] [i_0]);
            }
        }
    }
    var_19 = var_10;
    var_20 = var_4;

    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2] = (((((arr_7 [i_2 + 1]) - (~var_12))) == ((min((~var_8), ((var_12 ? 1707536575 : var_10)))))));
        var_21 &= (max((arr_7 [i_2 - 1]), ((((max(var_4, var_0))) ? -17 : (var_1 % 9223336852482686976)))));
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        arr_14 [i_3] [i_3 + 2] = (((((arr_11 [i_3 + 2] [i_3]) != (!var_10))) ? (((arr_13 [i_3 + 2] [i_3 - 2]) ? (arr_13 [i_3 + 1] [i_3 - 2]) : var_6)) : ((((((arr_11 [i_3] [i_3]) ? 122 : var_9))) ? (arr_13 [i_3 - 2] [i_3 + 2]) : var_4))));
        arr_15 [i_3] = ((~(arr_13 [i_3 + 2] [5])));
    }
    #pragma endscop
}
