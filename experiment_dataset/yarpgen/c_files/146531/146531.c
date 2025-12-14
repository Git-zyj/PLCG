/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    var_18 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = 1;
                arr_5 [i_1] [i_0] = ((((arr_2 [i_1]) <= (arr_2 [i_1]))) ? (min((arr_2 [i_0]), 2174276982)) : (arr_2 [i_0]));
                arr_6 [i_0] [i_1] = (((((~(arr_0 [i_0] [i_1])))) | (max((min(2174276982, (arr_2 [i_1]))), var_1))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [5] [i_3] [17] [i_4] = (!(((~(!-7423523348092006606)))));
                                arr_22 [i_2] [i_4] [i_4] [i_6] = (((((max(7227, var_11)))) ^ ((var_11 ? 57228 : (arr_20 [i_4] [i_3] [i_4] [i_3])))));
                            }
                        }
                    }
                    var_20 = (((arr_14 [i_2] [i_2]) ? (((((arr_14 [i_3] [i_4]) - (arr_10 [i_4] [i_3] [i_2]))) - (max(3788198722, 0)))) : (58325 <= 1710057202)));
                    var_21 = (arr_13 [i_2] [i_3] [i_4]);
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_22 = var_6;
                    var_23 = var_10;
                    var_24 = (arr_19 [6] [6]);
                    var_25 = (max(1669368844189236546, 173));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_26 = var_0;
                    var_27 = ((~(((var_16 < (arr_17 [i_2] [i_8] [i_3] [i_8]))))));
                }
                arr_30 [i_2] [i_3] = ((-1669368844189236563 ? (max(((var_5 * (arr_20 [24] [i_3] [10] [i_3]))), -var_14)) : ((((max(1, (arr_15 [1])))) ? var_0 : 1))));
                var_28 = (((((var_1 & var_16) ? ((-(arr_11 [i_2] [i_2] [i_3]))) : (arr_15 [10]))) & (((arr_29 [i_2] [i_2] [i_3] [i_3]) ? (~4034224722) : ((var_6 ? (arr_23 [i_2]) : 13409268770662467802))))));
                arr_31 [i_2] [i_3] [i_3] = (arr_16 [i_2] [i_3] [14]);
            }
        }
    }
    #pragma endscop
}
