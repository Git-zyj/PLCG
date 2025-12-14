/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((!51) ? 51 : var_1)));
    var_11 = var_1;
    var_12 &= ((((~((var_2 ? var_3 : 62)))) * (((!(((var_2 ? var_9 : var_9))))))));
    var_13 = (max(var_13, (((var_0 ? var_4 : ((((max(var_9, var_8)) == 52))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((((arr_3 [i_0] [i_0] [i_0]) - (arr_0 [i_0] [i_0]))) + 2147483647)) >> (((arr_2 [i_0] [i_0] [i_0]) + 1673336370))))));
                var_15 = 262143;
                var_16 *= (((arr_1 [i_1]) || (((((arr_2 [i_0] [i_0] [i_0]) && 25165824)) && ((max((arr_3 [i_0] [i_0] [i_0]), 204)))))));
            }
        }
    }
    #pragma endscop
}
