/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 ? ((((var_10 ? var_4 : 4611686018427387840)) + var_9)) : (((((min(var_5, var_7))) ? ((13305665400629897716 ? 789171777 : var_1)) : var_10)))));
    var_15 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((+(((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_1]) : (((var_6 <= (arr_0 [i_0] [i_0]))))))));
                var_16 -= (min((min((arr_3 [i_0] [i_1]), ((min((arr_1 [i_1]), (arr_1 [i_1])))))), ((((max(var_5, 81)) <= ((var_2 ? 2 : var_3)))))));
                arr_5 [i_0] = var_9;
                var_17 = 4294967295;
            }
        }
    }
    #pragma endscop
}
