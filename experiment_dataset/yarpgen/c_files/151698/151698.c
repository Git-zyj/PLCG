/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_9 [6] [i_2] [i_1 + 2] [i_1] [i_1 + 2] [1] = ((((((arr_3 [i_0] [i_1 + 2] [i_1 + 1]) ? (arr_1 [i_0] [i_1 - 2]) : (arr_3 [i_1] [i_1 + 2] [i_1 - 2])))) ? (((arr_6 [i_0] [8] [i_0] [i_0]) - ((((arr_4 [i_0] [i_0] [i_2]) ? (arr_7 [i_0] [i_1 + 1] [9] [i_3]) : (arr_0 [4] [i_1])))))) : 93));
                            var_12 ^= var_0;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_13 [i_0] [i_4] [i_1] [i_4] = ((-((min((!var_0), (min(var_9, var_4)))))));
                    var_13 += ((!(((var_0 % (arr_7 [11] [i_0] [i_4] [i_1 + 1]))))));
                }
                var_14 = (((--93) && (((max(-98, (arr_1 [i_0] [14]))) != ((42 ? (arr_12 [i_0] [i_1] [i_0] [i_0]) : 128))))));
            }
        }
    }
    var_15 = (((!(((var_8 ? var_10 : var_8))))));
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {

                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    arr_22 [i_5] [i_6] [i_5] [9] = ((-(((((((var_1 > (arr_21 [i_6] [i_5]))))) != (max(25315, (arr_5 [i_5] [13] [i_5] [9]))))))));

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_17 = (((((arr_8 [1] [i_6] [i_7] [i_7 + 2]) != (((min((arr_21 [i_5] [i_5]), var_10)))))) ? (((arr_10 [i_7 - 2] [i_5] [i_7 - 3]) ? (((arr_10 [i_5] [i_5] [3]) + 75)) : ((908751621 ? (arr_1 [15] [i_5]) : var_1)))) : ((var_8 ^ (arr_14 [i_7 - 1])))));
                        var_18 -= ((((-((max((arr_2 [i_6] [i_6]), (arr_12 [i_8] [i_7] [5] [i_5])))))) >= (max((((arr_6 [5] [12] [8] [8]) ? 22908 : var_5)), (1 ^ 3)))));
                        var_19 = (arr_20 [10] [i_5]);
                    }
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_20 *= ((-((76 + ((var_1 ? 3386215686 : 56))))));
                    var_21 = (max((arr_7 [i_9] [i_9] [i_9] [0]), 1837));
                    arr_29 [i_5] [i_6] [i_5] = (max((((arr_1 [i_5] [i_6]) ? (arr_1 [i_5] [i_5]) : (arr_1 [i_5] [i_5]))), ((((((var_8 | (arr_14 [i_5])))) == (arr_7 [i_5] [12] [i_9] [i_5]))))));
                    var_22 -= (min(-2703779208294289816, ((-(arr_28 [i_6] [i_9])))));
                    var_23 ^= (((((arr_7 [i_9] [i_9] [i_9] [i_9]) < var_2)) && ((((!3) ? (4118673332804575288 / var_6) : ((max(1908884583, var_2))))))));
                }
                arr_30 [i_5] = ((213 ? (((((768 ? (arr_1 [i_5] [i_6]) : (arr_23 [i_5] [i_5] [i_6] [i_5])))) ? (arr_7 [i_6] [9] [i_5] [9]) : (((-(arr_0 [i_5] [i_6])))))) : var_6));
            }
        }
    }
    #pragma endscop
}
