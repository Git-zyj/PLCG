/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [8]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (arr_5 [i_0 + 2] [i_2])));
                    arr_10 [10] [i_2] [i_2] [i_0] = ((((arr_8 [i_2] [i_2]) ^ var_7)));
                    var_15 = (((((arr_2 [i_1]) ? var_12 : (!var_10)))) ? (arr_5 [i_2] [6]) : (arr_0 [i_1 - 2]));
                }
            }
        }
        var_16 = ((((~(((arr_9 [16]) ? (arr_2 [i_0]) : 64)))) | var_9));
    }
    var_17 ^= ((((((var_4 + var_2) ^ ((min(var_9, var_1)))))) ? var_6 : ((~(max(-2496158589248435120, -2496158589248435136))))));
    var_18 = ((var_8 ? ((var_6 ? var_9 : -2496158589248435114)) : var_12));
    var_19 = (((((var_11 >= 20007) && (!249))) ? ((var_2 ? -2496158589248435136 : var_3)) : ((((!(var_4 * var_1)))))));
    #pragma endscop
}
