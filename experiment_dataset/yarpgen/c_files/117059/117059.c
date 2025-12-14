/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 ? 2147483647 : (((((9384 ? var_0 : 15503840518815755948))) ? 5810 : (15503840518815755948 >= var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = (max((((arr_3 [i_0 - 2] [i_0] [i_0]) ? (min(2942903554893795667, var_15)) : 31552)), -94));
                var_20 = (max(((((max(var_9, 0))) ? (((max(52, var_0)))) : (~-914153913900074630))), (27436 >= 15503840518815755948)));
                var_21 ^= (max((max(4597, ((min((arr_4 [i_0] [i_0] [i_1 + 1]), (arr_4 [i_0] [i_0] [i_0])))))), (((((~(arr_1 [i_1]))) != (((!(arr_2 [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
