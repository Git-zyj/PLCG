/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= ((18109 < (((((arr_1 [i_0]) && (arr_1 [i_0]))) ? (((arr_0 [i_0]) ? -8590 : (arr_1 [8]))) : (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_11 = max(16514, 25688);
            var_12 += arr_1 [i_0];
            arr_6 [i_1] = (((((arr_4 [i_0]) ? ((var_1 ? -7168 : (arr_0 [i_0]))) : -7709))) ? (((((var_8 ? var_7 : 1487636690))) ? var_3 : (((arr_1 [i_0]) ? (arr_1 [1]) : 3620017245)))) : (((((arr_3 [i_1]) < (arr_3 [i_1]))))));
        }
        var_13 = ((((((3012731421 <= var_9) ? (arr_4 [i_0]) : 5575))) ? -21657 : (((-5547 <= (1282235874 > 459094231))))));
    }
    var_14 = (((!((min(var_9, var_6))))) ? var_0 : (max(var_0, var_3)));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    var_15 = ((((arr_9 [i_2 - 1]) ? ((var_5 ? 7159 : 493221040)) : (((var_7 ? (arr_14 [i_2] [i_4]) : (arr_12 [i_4])))))) & (((arr_13 [i_4 - 1] [11]) ? (max((arr_9 [i_2]), (arr_10 [i_2]))) : ((var_4 ? var_8 : (arr_15 [i_4]))))));
                    var_16 += (arr_15 [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
