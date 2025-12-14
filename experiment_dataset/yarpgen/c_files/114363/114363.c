/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((21632864 ^ (min(var_2, (11170151829236421106 * 1595331249)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((max(var_5, (min(var_6, var_11)))) - (max((var_7 || var_10), (var_11 ^ 2387107318)))));
                var_16 = (max(((~((var_2 << (var_12 - 16449796683738634868))))), ((((((arr_4 [i_0] [i_1 + 2] [i_1]) > 24223)) ? 1907859978 : ((var_7 ? var_9 : var_9)))))));
                var_17 = (((var_12 ? (min(var_3, -1030809102)) : ((var_6 ? 8 : (arr_1 [i_1 + 3]))))));
            }
        }
    }
    #pragma endscop
}
