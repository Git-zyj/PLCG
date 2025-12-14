/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((-var_8 ? (!var_11) : (~var_14)))) ? ((var_6 ? (((var_13 ? 9 : var_10))) : ((var_8 ? var_12 : 2735396701)))) : ((108 ? (((-2147483643 ? var_11 : var_10))) : ((var_5 ? var_0 : var_3))))));
    var_17 = ((-(((!var_3) ? -3 : ((var_15 ? var_4 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] = 1;
                arr_7 [i_0] |= (((((((arr_2 [7] [i_1] [i_1]) ? var_14 : 2967462258)))) ? ((((arr_4 [i_0] [i_0] [i_1]) ? var_12 : ((var_0 ? (arr_4 [i_0] [i_0] [i_0]) : (arr_1 [i_1])))))) : (((((200 ? 1444833930 : -29416))) ? ((19668 ? (arr_1 [i_1]) : (arr_5 [i_0]))) : var_10))));
                arr_8 [i_0] [i_0] [i_0] = ((-1983168580 ? 88 : -2521607305593535011));
            }
        }
    }
    var_18 = ((-((((var_9 ? var_11 : -1617155337))))));
    #pragma endscop
}
