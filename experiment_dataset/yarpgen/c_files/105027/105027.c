/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_9;
    var_11 = (min(var_6, (((var_5 << (var_2 - 86))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (-((((min(var_2, var_0))) ? (((arr_3 [i_0]) ? var_2 : 5)) : ((((arr_0 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_0])))))));
                arr_6 [i_0] [i_0] = min((((arr_1 [i_0]) ? ((~(arr_4 [i_0]))) : (((arr_2 [i_0]) * (arr_0 [i_0]))))), (((((((arr_3 [i_0]) ? (arr_0 [i_0 - 1]) : (arr_4 [i_0])))) ? (((arr_4 [i_0]) ? var_9 : (arr_1 [i_0]))) : (((!(arr_3 [i_0]))))))));
                arr_7 [i_0] [i_0 - 1] [i_0] = (((((((arr_1 [i_0]) > var_9)) ? ((((!(arr_1 [i_0]))))) : (max(var_3, 8)))) * (arr_5 [i_1] [i_1 + 1])));
            }
        }
    }
    var_13 -= var_6;
    #pragma endscop
}
