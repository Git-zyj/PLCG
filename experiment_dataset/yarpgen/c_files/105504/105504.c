/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 += (((((var_0 / (arr_0 [i_1] [i_3])))) ? (arr_8 [i_0] [i_1] [i_1] [i_2] [i_1]) : ((min(8, 1)))));
                        arr_11 [i_2] = (((-(arr_9 [i_3]))) > (((((-(arr_7 [i_0] [i_1] [i_2] [i_3])))) ? (arr_7 [i_0] [16] [19] [i_3]) : ((18 << (((arr_8 [i_0] [i_1] [i_2] [i_3] [i_2]) - 24514)))))));
                        var_20 = (max((arr_0 [i_3] [3]), (((arr_6 [i_0] [i_2] [i_3]) + (((arr_7 [i_0] [i_1] [i_2] [i_3]) ? (arr_10 [6] [6] [i_2] [6]) : (arr_4 [i_0] [i_1])))))));
                        arr_12 [i_0] [i_0] [7] [i_2] = ((18 > ((max(-22, 1)))));
                    }
                }
            }
        }
        arr_13 [i_0] = (((((((max((arr_10 [i_0] [i_0] [i_0] [0]), (arr_6 [i_0] [i_0] [i_0])))) ? (arr_1 [i_0]) : var_12))) ? (arr_0 [i_0] [i_0]) : ((-(arr_7 [i_0] [i_0] [i_0] [i_0])))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_21 = ((+(((arr_3 [i_4] [1]) ? (arr_3 [i_4] [i_4]) : (arr_3 [i_4] [i_4])))));
        arr_17 [i_4] = (-(((!(arr_16 [i_4])))));
    }
    var_22 = (min(var_22, (min((min((min(var_4, var_3)), -var_12)), ((-19 ? var_11 : (((var_6 ? var_14 : var_7)))))))));
    var_23 = (max(var_11, (min(((var_13 ? var_13 : var_11)), ((max(var_8, var_7)))))));
    #pragma endscop
}
