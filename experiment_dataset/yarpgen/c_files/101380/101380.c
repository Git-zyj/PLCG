/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (88 >> 0)));
    var_21 = ((var_4 + (max(var_2, ((var_4 ? var_15 : 7566472026661701786))))));
    var_22 = (min(var_0, (((!(127 > var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] |= var_10;
                var_23 = ((((min((arr_4 [i_1]), (min((arr_4 [i_1]), (arr_2 [i_0])))))) ? (max((arr_3 [i_0] [i_1] [i_1 + 3]), -9525456989547371991)) : (((127 ? (arr_3 [i_0] [i_1] [i_0]) : (((((arr_2 [i_0]) || var_9)))))))));
                arr_6 [i_1] [i_0] [i_1] = max((((arr_3 [i_1 + 1] [i_1] [i_1]) ? (arr_3 [i_0] [i_1] [i_0]) : -12680)), (max((arr_3 [i_0] [i_1] [i_0]), 1)));
            }
        }
    }
    var_24 = ((0 ? var_1 : ((var_11 ? var_6 : -var_17))));
    #pragma endscop
}
