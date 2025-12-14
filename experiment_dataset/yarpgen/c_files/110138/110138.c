/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((min((!var_2), 124))) ? var_9 : 342420053)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_2] = (arr_7 [i_0] [i_1] [i_2]);
                    arr_10 [10] [i_1 + 2] [i_2] = var_6;
                }
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    var_11 = 105;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_12 = -0;
                                arr_17 [i_0] [i_0] [i_0] [i_4] [i_5] &= (((~(((arr_0 [i_5] [i_3]) / var_5)))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_13 = ((((((29751 % 4272909219) ? (((var_6 ^ (arr_15 [16] [16] [i_6] [i_7] [i_1])))) : var_3))) ? -22825 : (((!(((~(arr_12 [i_0] [i_0] [i_0])))))))));
                        var_14 = (max(var_14, (((!(((((max(-55, (arr_4 [i_0] [i_0])))) ? (arr_15 [i_0] [i_1 + 2] [i_7] [i_7] [i_7]) : 261120))))))));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_24 [i_0] [i_1 + 1] [i_0] [i_6] [i_6] [i_6] = var_3;
                        var_15 = 8192;
                    }
                    var_16 = -16727979939273278897;
                    var_17 -= var_4;
                    arr_25 [15] [i_1 - 1] [15] = (11098648462264411412 % 166);
                    arr_26 [i_0] [i_0] = 2067273509531488620;
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_18 = 59;
                                var_19 = (~((((min((arr_6 [i_10]), 32))) ? 32767 : ((var_5 & (arr_3 [i_0] [i_0] [10]))))));
                                arr_35 [i_10] [i_9] [i_0] = (max(((max((arr_7 [i_1 - 1] [i_1 - 1] [i_11 - 1]), -11754))), (arr_16 [i_10])));
                            }
                        }
                    }
                }
                var_20 = ((((((var_7 + (arr_22 [i_0] [i_1 + 1]))) % 448976064)) - var_9));
            }
        }
    }
    #pragma endscop
}
