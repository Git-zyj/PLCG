/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (((~1677689388) ^ var_1));
                var_15 *= (min((((-6733 != (arr_1 [i_0 - 1])))), ((((max(1414590772, 1414590772))) ? (~-530010072) : (arr_4 [i_1 + 1] [i_0 + 1])))));
                var_16 = ((((max(1391889368, -90))) ? ((12233252481111813777 ? -1391889375 : 1391889375)) : ((min((arr_5 [i_1] [i_1 + 1] [i_1]), (arr_2 [i_1] [i_1 - 2]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 = ((((min(-var_10, ((1 ? var_1 : 58793))))) ^ (((arr_11 [i_4] [i_3 + 2] [i_4]) & ((var_11 ? var_6 : -25923))))));
                    var_18 ^= (((((~((55 << (530010081 - 530010066)))))) ? (((arr_9 [i_2 + 2]) ? (arr_4 [i_4 + 1] [i_4 + 1]) : ((max((arr_2 [i_2] [15]), -20))))) : var_1));
                }
            }
        }
    }
    var_19 = 25935;
    #pragma endscop
}
