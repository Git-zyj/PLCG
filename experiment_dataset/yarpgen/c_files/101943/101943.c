/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (var_17 ? (var_5 & var_5) : (~var_7));
    var_21 -= 2893397464398955166;
    var_22 = (var_16 + var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = -2344609347338509780;
                    var_23 -= ((((~(arr_2 [i_0] [i_1 - 1]))) * (!189)));
                    var_24 &= var_7;
                    var_25 ^= ((((((((arr_2 [i_0] [i_1]) ? (arr_1 [i_1]) : 1071644672))) ? (((2344609347338509759 ? (arr_0 [i_0]) : 224))) : (((arr_1 [i_1]) ? 3223322645 : var_9))))) ? ((~((var_9 ? (arr_6 [0] [i_1] [i_1] [i_1]) : (arr_6 [2] [4] [2] [i_1]))))) : (arr_4 [i_2]));
                    var_26 -= -1;
                }
            }
        }
    }
    #pragma endscop
}
