/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (arr_4 [i_0]);
                    arr_8 [i_0] [i_1] = (((((var_3 & (arr_5 [i_1] [i_1 - 4])))) <= ((3475861586560128126 - (arr_7 [i_0] [i_0] [9] [i_2])))));
                    var_18 *= ((max(((var_10 ? var_11 : var_15)), (arr_5 [i_2] [i_1]))));
                    var_19 -= (max((((((max(var_15, var_8))) ^ -1))), (max(6475074753650154261, 49))));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        var_20 += (((max((var_12 == 25898), 1401719559))) - (((((var_9 ? var_6 : var_15))) ? (((max(var_2, (arr_10 [1] [1]))))) : (min(var_6, (arr_11 [14] [i_3]))))));
        var_21 = (max(((max((arr_10 [i_3 - 2] [i_3]), (arr_10 [i_3 + 2] [i_3])))), (max((arr_9 [i_3 + 3]), 9367))));
    }
    var_22 = (min(var_22, var_15));
    #pragma endscop
}
