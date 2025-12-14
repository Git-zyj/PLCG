/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_2 [i_0]) ? (max((arr_0 [i_0]), ((-(arr_1 [i_0]))))) : (max(1, (min((arr_3 [i_0]), var_18))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 -= ((~(((arr_12 [i_1 + 3] [i_1] [i_2 + 1] [i_1]) + (arr_12 [i_1 + 4] [i_1 + 4] [i_2 + 1] [i_1 + 4])))));
                    var_21 = ((((arr_0 [i_0]) > ((max(21, var_8))))) ? (arr_3 [i_1 + 4]) : (min((arr_3 [i_1 - 2]), ((min(var_1, var_14))))));
                }
            }
        }
        var_22 += (min(var_12, var_13));
        var_23 -= (((((~(arr_0 [i_0])))) ? (arr_8 [i_0]) : 254));
    }
    var_24 &= (var_4 ? var_18 : (((234 + 40) ? var_3 : var_18)));
    #pragma endscop
}
