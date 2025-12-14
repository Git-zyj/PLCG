/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (~var_4)));
    var_18 -= (!-20974);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [14] = ((66 & ((~(arr_2 [i_0] [i_0])))));
                var_19 ^= ((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]))) >> (((arr_1 [i_0]) - 50602)));
                var_20 = (((~(((arr_3 [i_0] [15]) >> (35587 - 35573))))) & ((((((35583 ? 2 : var_10))) ? (((arr_0 [17]) ? (arr_2 [i_0] [7]) : 0)) : -35606))));
                arr_6 [24] = (((((arr_1 [i_0 - 2]) - (arr_1 [i_0 - 2]))) * ((((arr_1 [i_0 - 2]) == var_11)))));
                var_21 = (min(var_21, ((35587 ? (((((-(arr_3 [i_1] [3])))) ? 29942 : ((9 ? var_0 : 35587)))) : (!35600)))));
            }
        }
    }
    var_22 = (min(var_22, (((!((!(12666377406131033000 ^ 225))))))));
    #pragma endscop
}
