/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0] [i_0]) ? 1780251311259017961 : (arr_1 [i_0] [i_0])));
        var_14 = (max(((((min((arr_0 [i_0] [i_0]), var_4))) ? (var_6 & var_3) : ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))), (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 ^= (((((var_0 ? (arr_3 [i_1]) : 1682235462))) && ((min((var_6 != var_3), (arr_3 [i_1]))))));
        arr_5 [i_1] = (max((((arr_3 [i_1]) * (arr_3 [i_1]))), var_12));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = ((arr_6 [i_2]) && ((max(var_8, (var_5 < var_11)))));
        var_16 = ((min(((var_3 ? (arr_7 [i_2] [i_2]) : var_9)), ((((arr_7 [i_2] [i_2]) && var_12))))) & (18 / 3));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [i_3] [i_3] [i_3] = arr_17 [i_6];
                        arr_23 [i_3] [14] [i_3] [i_3] [i_4] [i_5] = ((!(-2147483647 || 6286720122400077423)));
                    }
                }
            }
        }
        arr_24 [i_3] = (16777215 - 29);
    }
    var_17 |= var_9;
    var_18 = (min(-var_6, var_1));
    #pragma endscop
}
