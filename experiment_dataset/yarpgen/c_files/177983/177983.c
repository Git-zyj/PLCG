/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(-846462811, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((var_12 ? (((((min((arr_4 [i_0]), (arr_0 [i_0]))) <= ((max(var_11, 846462811))))))) : (((arr_8 [5] [i_0] [i_0] [i_1]) ^ (max((arr_4 [0]), (arr_8 [i_0] [i_0] [i_2] [i_2]))))))))));
                    arr_9 [i_2] [9] [i_1] [i_2] = ((var_6 != (((max(-78, 241))))));
                    var_18 = (min(var_18, (((((((max((arr_6 [i_0] [i_1] [i_1] [i_1]), (arr_8 [i_1] [0] [2] [i_1]))) ^ ((((!(arr_6 [i_0] [i_1] [i_0] [i_2])))))))) ? -37 : ((((((arr_1 [i_2]) ? (arr_6 [i_0] [1] [i_2] [i_1]) : 241))) ? (((1 ? (arr_3 [i_1]) : -116))) : var_8)))))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 = (min(var_19, ((((arr_10 [i_0] [i_0] [7] [i_0] [0]) - ((((max((arr_0 [6]), 2783945357960961165))) ? (min((arr_6 [i_3] [i_2] [i_1] [i_0]), (arr_0 [i_0]))) : (((arr_4 [i_3]) ? (arr_0 [i_0]) : (arr_11 [i_3] [4] [i_2]))))))))));
                        var_20 = ((var_0 ? (((arr_2 [i_2 - 2]) ? 231 : (arr_2 [i_2 - 3]))) : (arr_2 [i_2 - 1])));
                    }
                    var_21 = (max((max((var_15 + var_3), ((var_15 ? (arr_10 [i_0] [i_0] [i_1] [2] [i_2 - 3]) : var_10)))), (((+((var_1 ? (arr_5 [i_0] [i_1] [i_1] [4]) : (arr_1 [i_1]))))))));
                }
            }
        }
    }
    var_22 = ((var_14 - (max(var_11, var_2))));
    var_23 = (!var_5);
    var_24 = (max(var_24, var_6));
    #pragma endscop
}
