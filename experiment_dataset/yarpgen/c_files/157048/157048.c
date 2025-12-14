/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((((((var_10 ? var_2 : var_8)))) ? (((((var_6 && var_4) && (var_11 && var_11))))) : (max((var_11 - var_7), (((var_6 ? var_4 : var_3)))))));
    var_14 = -var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = ((var_5 ? var_4 : ((-(var_1 + var_7)))));
                                arr_15 [i_0] [i_3] [i_2] [i_0] = (min((((((var_5 ? var_1 : var_6))) ? (11920482995245876423 - 8192) : (((var_3 ? var_12 : var_11))))), var_1));
                                var_16 = (min(var_16, ((max((((((arr_1 [i_1]) >= var_9)) ? (arr_5 [0] [0]) : (var_3 || 1))), ((((arr_13 [i_1] [i_1] [i_2] [i_4] [i_1] [1] [8]) ? (arr_13 [i_3] [i_3] [i_4] [i_4 + 1] [i_4] [12] [i_4]) : var_3))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] = ((((((arr_14 [i_4] [i_2] [5] [i_2] [11]) ? (arr_9 [9] [i_1] [i_2]) : (var_11 + var_1)))) && (arr_9 [i_1] [15] [i_4])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_24 [11] [i_1] [i_1] [i_1] [i_0] [i_1 + 1] [i_1 - 1] = (arr_5 [i_0] [i_0]);
                                var_17 = (min(var_17, (((((((((var_10 ? var_11 : var_7))) ? (var_2 > var_11) : var_2))) ? ((var_12 + (((arr_2 [i_0]) | var_4)))) : (!var_11))))));
                            }
                        }
                    }
                }
                arr_25 [i_0] = -9223372036854775807;
            }
        }
    }
    #pragma endscop
}
