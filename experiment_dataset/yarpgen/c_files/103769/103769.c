/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(1, ((var_5 ? (~-30403) : (var_4 / var_14))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((((min((arr_3 [i_0] [i_0] [i_0]), var_6))) ? (((arr_0 [i_1]) + (arr_0 [i_0]))) : (((((min((arr_2 [i_0]), var_8)) <= (arr_3 [i_1] [i_1] [i_0])))))));
                arr_4 [i_0] [18] = max(((((var_17 ? (arr_0 [i_1]) : (arr_2 [i_0]))) - (arr_2 [i_1]))), (((((var_1 ? 1 : var_9)) <= var_10))));
                var_20 *= var_0;
            }
        }
    }
    var_21 = 1;
    #pragma endscop
}
