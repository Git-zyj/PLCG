/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = var_7;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((((((max((arr_0 [i_1]), var_3)) - (arr_11 [1] [i_4 - 2] [i_2] [8] [17] [i_3])))) ? (((arr_6 [i_3 + 1] [9] [i_4] [i_1]) ? (arr_6 [i_3 - 2] [i_4] [i_4 + 1] [i_1]) : var_5)) : ((((max(0, 1)) ? -var_8 : (((max(0, var_11)))))))));
                                var_15 += (((((var_10 >> (arr_5 [i_2 + 2] [i_1] [i_3 - 2] [i_1 - 1])))) ? (((arr_5 [i_2 - 3] [i_1] [i_3 - 2] [i_1 + 4]) ? (arr_5 [i_2 - 2] [i_1] [i_3 - 1] [i_1 - 2]) : (arr_5 [i_2 - 2] [i_2 - 2] [i_3 + 1] [i_1 - 1]))) : var_12));
                                arr_13 [i_1] = 0;
                            }
                        }
                    }
                }
                var_16 = ((((((((var_12 ? var_0 : var_10))) ? (((min((arr_7 [i_0] [3] [19] [i_1] [i_1]), var_4)))) : (min((arr_8 [i_0] [i_0] [13] [8] [i_0] [i_0]), var_5))))) ? ((min(((var_13 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : 0)), ((524032 ? var_0 : var_14))))) : (max((max(var_7, var_6)), (arr_10 [i_1] [i_1 + 1] [i_1 + 4] [i_1 - 1] [i_1 - 3])))));
                arr_14 [i_0] [i_1] [i_1] = (((((var_10 <= (((!(arr_9 [i_0] [i_0] [i_0] [1]))))))) * ((max((arr_7 [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 + 1]), var_0)))));
            }
        }
    }
    var_17 ^= (min((max(var_13, var_11)), ((var_7 % (~var_10)))));
    #pragma endscop
}
