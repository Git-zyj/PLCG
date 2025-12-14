/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [12] = ((9794062163748621965 ? ((((arr_1 [i_0] [i_0]) ? 64182 : (!var_13)))) : ((8652681909960929650 ? (arr_0 [i_0]) : ((((arr_1 [i_0] [i_0]) ? 11 : var_10)))))));
        arr_3 [i_0] = 62;
    }
    var_17 = var_0;

    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_18 ^= (max(9794062163748621965, ((max(var_6, ((max(var_7, -37))))))));
        var_19 ^= 8652681909960929651;
        var_20 = (((((!(((65535 ? 17380076402985888441 : 10722792982545802381)))))) >> (4972759451172012591 - 4972759451172012577)));
        var_21 = (max(var_21, ((((((-(max(var_2, (arr_1 [16] [16])))))) ? var_1 : ((var_12 ? (arr_1 [i_1 + 1] [4]) : var_4)))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_22 = (min(var_22, ((max((((arr_6 [i_3] [i_3]) ? -9223372036854775785 : ((247 ? var_16 : (arr_9 [i_1] [i_1] [8]))))), ((((arr_10 [i_2 + 3] [6] [i_1 - 1]) ? (arr_10 [i_2 + 2] [i_2 + 2] [i_1 - 1]) : var_6))))))));
                        var_23 = ((((max((arr_6 [i_1 + 2] [i_1 + 2]), (arr_5 [10] [5])))) ? 15702 : -var_7));
                    }
                }
            }
        }
    }
    #pragma endscop
}
