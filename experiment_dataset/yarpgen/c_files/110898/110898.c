/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((var_9 < ((((var_7 ? var_13 : var_4))))));
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_16 = (min((((((var_13 ? var_13 : (arr_1 [i_1]))) - (var_9 + var_1)))), (((arr_4 [i_1] [i_0]) & (arr_7 [i_2] [i_1] [i_0])))));
                    var_17 = (((arr_2 [i_0]) < (1 + 1)));
                    var_18 = (((arr_3 [i_0]) ? ((max(var_7, (arr_3 [i_1])))) : ((((arr_3 [i_2]) || (arr_3 [i_2]))))));
                }
                for (int i_3 = 1; i_3 < 6;i_3 += 1)
                {
                    var_19 = ((((((arr_2 [i_3 + 3]) >= (arr_4 [i_0] [i_1])))) < ((var_10 ? (arr_10 [i_0] [i_1] [i_3 + 4]) : (arr_4 [i_0] [i_3 - 1])))));
                    arr_11 [i_1] [i_3] = ((((((arr_5 [i_0] [i_1] [i_3]) ? ((var_1 ? (arr_0 [i_1]) : (arr_3 [i_0]))) : (var_3 / var_12)))) ? (((arr_5 [i_0] [i_3 - 1] [i_0]) ? (arr_5 [i_0] [i_3 + 1] [i_3 + 2]) : (arr_5 [i_0] [i_3 + 2] [i_3]))) : ((((((1 ? 1 : 1))) ? ((min((arr_9 [i_0] [i_1] [i_3] [i_0]), var_12))) : ((var_13 ? (arr_4 [7] [i_1]) : (arr_8 [0] [i_3 + 1]))))))));
                    var_20 = (min(var_20, (((((((arr_4 [i_1] [i_3 + 1]) ? (arr_4 [i_0] [i_3 + 3]) : (arr_4 [i_1] [i_3 + 1])))) ? ((var_11 ? (arr_9 [i_0] [i_3 + 2] [i_3] [i_0]) : (arr_4 [i_0] [i_3 + 1]))) : (((arr_4 [i_0] [i_3 - 1]) ? var_9 : (arr_9 [0] [i_3 + 1] [i_3] [i_1]))))))));
                }
                var_21 *= (arr_4 [i_0] [i_1]);
            }
        }
    }
    var_22 = (var_12 >= var_5);
    var_23 = (max(var_23, (((var_13 && (((var_5 ? var_7 : ((var_3 ? var_8 : var_12))))))))));
    #pragma endscop
}
