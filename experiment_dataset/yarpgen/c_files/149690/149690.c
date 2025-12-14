/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((!(((var_10 >> (-19375 + 19393))))))) - 54));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_20 = (min(var_20, ((((arr_5 [i_0] [i_1]) * (((((arr_5 [i_0] [i_2]) && var_13)))))))));
                    arr_10 [3] [9] = (min(((var_0 ? (arr_4 [i_0] [7] [i_2]) : ((max(21832, 12747))))), ((min((arr_7 [i_0] [4]), 43)))));
                }
                for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [1] [i_3] = (arr_7 [5] [5]);
                    var_21 += (((((~((var_0 ? (arr_5 [i_1] [1]) : -19357))))) ? var_1 : (max(var_16, (arr_4 [i_0] [i_1] [i_3])))));
                    arr_15 [i_3] = ((+((-51 ? (arr_4 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : (arr_4 [i_3 + 1] [i_3 + 1] [i_3 - 1])))));
                    var_22 = (max(var_22, (((-(((((0 ? (arr_7 [i_0] [i_3 + 1]) : 1))) ? ((var_11 ? 1 : 114)) : ((max(3, -125))))))))));
                    var_23 = (min(var_23, (((((max(((((arr_1 [i_0]) || var_11))), 114))) ? ((((var_15 < (arr_13 [1] [i_1] [11] [i_0]))) ? (((9223372036854775807 ? 3672710499 : 4294967292))) : (min(var_5, var_1)))) : (max((arr_5 [i_1] [1]), ((var_11 ? (arr_9 [1] [i_3 - 1] [i_3]) : 22067)))))))));
                }
                for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    arr_18 [12] [1] = ((24339 ? (((arr_11 [i_4 + 1] [i_0] [i_0] [i_0]) ? (arr_11 [i_4 - 1] [i_0] [i_0] [i_0]) : (arr_11 [1] [1] [i_0] [i_4 - 1]))) : (arr_0 [i_1])));
                    var_24 ^= (max(-24339, (((!(arr_0 [i_4 + 1]))))));
                    var_25 = (max(var_25, 0));
                }
                for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_28 [i_5] [16] [1] = ((var_2 ? (((var_6 ? (arr_6 [i_5] [i_6] [i_7]) : (-24340 | var_9)))) : (((((9223372036854775807 ? 9223372036854775807 : 1))) ? (arr_26 [i_5] [i_7 - 3] [16] [14] [14] [i_7 - 3]) : -3371949018))));
                                arr_29 [1] [i_1] [i_5 + 1] [i_5] [i_7] = ((-1 && ((max((arr_3 [1] [i_7]), ((var_10 ? (arr_25 [i_0] [4] [i_0]) : var_12)))))));
                            }
                        }
                    }
                    var_26 = (min(((max((arr_22 [i_5] [i_5] [i_5 - 1]), 11132))), (((arr_22 [i_5] [3] [i_5 - 1]) * (arr_19 [i_5] [i_5] [i_5 - 1])))));
                    arr_30 [i_5] = (((arr_9 [i_5] [i_1] [i_0]) >> ((((min(-24314, -29314))) ? (((var_11 <= (arr_2 [i_0])))) : ((var_12 ? (arr_24 [i_5] [i_5] [i_5] [i_0]) : var_5))))));
                    arr_31 [i_5] [i_1] [i_5 - 1] = ((!(~28)));
                }
                var_27 = (min(var_27, 19375));
            }
        }
    }
    #pragma endscop
}
