/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 -= (arr_1 [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 -= var_1;
                                var_20 = (min((min((var_7 % 1464467227), ((var_11 ? (arr_11 [i_0] [16] [i_1] [i_2] [i_3] [i_4]) : var_10)))), (((arr_2 [i_0 + 1]) ? (254 % var_5) : (((arr_9 [i_0] [7]) ? var_12 : (arr_6 [i_0] [10] [1])))))));
                                arr_12 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] [i_4 - 3] = ((((min((arr_7 [i_0 + 1]), ((((arr_8 [i_0] [i_1]) && 242)))))) ? (arr_8 [i_0] [i_1]) : ((var_3 ? 0 : (arr_10 [i_4 + 3] [i_1] [i_2] [i_2] [i_4] [i_3])))));
                                arr_13 [i_1] [i_1] [i_0] [i_2] [i_4] [15] = var_12;
                                var_21 = (max(var_21, ((min(((-var_15 || (((var_12 ? var_3 : var_1))))), (((arr_11 [i_1] [9] [i_2] [i_3] [i_3] [i_4 - 2]) != -var_9)))))));
                            }
                        }
                    }
                    var_22 = (arr_5 [i_2] [1] [i_0]);
                }
            }
        }
    }
    var_23 *= ((31539 ? var_11 : var_4));
    var_24 = (max(var_24, (((var_0 ? ((((((23798 >> (var_2 - 30999)))) ? var_13 : 167))) : (var_3 / var_16))))));
    var_25 = var_13;
    #pragma endscop
}
