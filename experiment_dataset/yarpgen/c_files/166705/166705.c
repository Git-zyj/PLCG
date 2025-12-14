/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((57974 > var_12) <= 3436772402));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((((~(arr_5 [i_0] [i_1])))) ? ((~(arr_5 [i_1] [i_0 - 1]))) : (((var_9 ? (((max(var_0, var_13)))) : (((arr_0 [i_1]) ? (arr_3 [i_0]) : 3436772388)))))));
                var_15 = (max(var_15, ((max((((arr_6 [i_0] [i_0 - 3]) ? (arr_6 [i_0] [i_0 - 2]) : (arr_6 [i_0] [i_0 - 1]))), (((!(arr_6 [i_0] [i_0 + 1])))))))));
                var_16 = ((20932 ? (arr_4 [i_0] [i_0]) : ((min((max((arr_3 [i_0]), (arr_3 [i_0 - 1]))), (37 ^ 111))))));
                var_17 = 41;
                var_18 = ((((min((arr_6 [i_0] [i_0 + 1]), -4082586348000276043))) ? (18446744073709551615 ^ 247) : ((((((~(arr_3 [i_0 - 3])))) ? (((arr_2 [i_0]) ? 3436772415 : 4294967295)) : 1)))));
            }
        }
    }
    #pragma endscop
}
