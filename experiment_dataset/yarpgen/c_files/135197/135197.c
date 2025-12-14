/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (((max((arr_2 [i_1]), (((arr_0 [i_1]) ? var_2 : (arr_1 [i_1]))))) / ((((arr_0 [5]) / -7)))));
                var_15 = (min((23614 == -28990), ((!(((arr_5 [i_1] [i_1] [i_1]) >= -2))))));
                var_16 |= ((~(arr_4 [i_1] [10])));
                arr_6 [i_0] [i_0] [i_1 - 1] |= ((var_9 < ((((arr_1 [i_1]) == (~1))))));
                var_17 = 28;
            }
        }
    }
    var_18 = (min(((var_5 - ((var_3 ? var_12 : var_10)))), (max(-var_10, var_9))));
    var_19 = (min(((((1 ^ var_7) <= (min(359504958, 28984))))), 41930));
    #pragma endscop
}
