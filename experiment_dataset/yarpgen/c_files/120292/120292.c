/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((36733 ? 53 : 0))) ? ((var_5 ? var_8 : 2258458488)) : (min(var_4, var_1))));
    var_12 |= ((((min((((53 ? var_3 : 30))), ((var_10 ? var_9 : 15))))) ? var_3 : ((var_4 ? 0 : 65279))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = arr_4 [i_0 + 1];
                var_14 = ((((((arr_6 [i_1] [7]) ? (arr_3 [2] [i_1]) : (arr_6 [i_0] [i_1])))) ? var_6 : (arr_6 [i_0] [i_0])));
                arr_7 [i_0 + 1] [1] [i_0 + 2] = (arr_5 [i_0 + 1]);
                var_15 = 0;
            }
        }
    }
    var_16 = ((var_4 < ((3861695671 ? 53 : 0))));
    var_17 ^= min(14585, (((723114966 >= var_2) ? (min(203, var_2)) : (((-130366254738282110 ? var_7 : 33))))));
    #pragma endscop
}
