/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (i_0 % 2 == 0) ? ((((((!(!var_13)))) << (((max(var_13, (arr_12 [i_1] [i_1 - 1] [i_1] [i_0] [i_1]))) - 40354))))) : ((((((!(!var_13)))) << (((((max(var_13, (arr_12 [i_1] [i_1 - 1] [i_1] [i_0] [i_1]))) - 40354)) - 12524)))));
                                var_18 = ((((min(2348279617221790082, ((35184371564544 ? var_1 : 9179442704116097687))))) ? ((((!var_12) <= (arr_3 [i_0])))) : (((-7398 <= ((min(var_11, var_3))))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_2] [i_1 + 3] |= ((((min(var_8, ((max((arr_4 [i_0] [i_1] [i_2] [i_1]), (arr_7 [i_2]))))))) ? (min((4294967295 - 63), (38089 - -96950706))) : ((((arr_10 [8] [i_2] [i_2] [i_0]) ? var_15 : 96950705)))));
                    arr_16 [i_0] [i_0] [i_1] [i_2] = (max(((((var_11 ? var_12 : var_9)) * (arr_0 [i_0] [i_0]))), ((min(((var_6 / (arr_1 [i_0] [i_1]))), var_7)))));
                    arr_17 [i_0] [i_0] [i_2] = var_10;
                }
            }
        }
    }
    var_19 = 3848312031778026066;
    var_20 = (((((((max(var_12, var_14))) ? (((max(var_4, var_6)))) : var_16))) ? -1 : var_1));
    var_21 = var_4;
    var_22 = -96950724;
    #pragma endscop
}
