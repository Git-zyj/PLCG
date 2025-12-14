/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_11 = (max(((var_4 ? (arr_1 [19] [i_1]) : 30887)), ((((arr_1 [i_0 + 1] [i_1]) >= (((var_1 - (-2147483647 - 1)))))))));
                    var_12 = (min(var_12, (arr_2 [i_1] [i_2])));
                }
                arr_7 [i_0 + 1] = (~(arr_5 [6] [i_0 - 1]));

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_13 = (min(var_13, (((((max(0, (arr_9 [i_3] [i_1] [11])))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_14 = (((((0 ? var_5 : (arr_9 [i_0 - 1] [i_3] [i_5])))) ^ (((-2147483647 - 1) ? var_10 : (arr_5 [i_1] [i_1])))));
                                arr_16 [i_1] = (((((arr_13 [i_0] [i_0 + 1] [i_0]) == var_2)) ? (((!(~255)))) : ((~((max(1, 0)))))));
                                var_15 = (-109 * 119);
                            }
                        }
                    }
                    var_16 = (max(6094058714926056491, 255));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_17 = (min(var_17, ((((max((arr_14 [i_0] [i_1] [i_6] [i_0] [i_0] [i_6] [i_0 - 1]), -2088750655)) * (var_9 / 255))))));
                    var_18 = (min(var_18, (((((max(0, 255))) ? ((((-2147483647 - 1) && 0))) : var_8)))));
                }

                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_28 [i_7] = (min((min(((var_5 / (arr_11 [i_9] [i_8] [i_7] [i_0] [i_0]))), (1 * 0))), ((min(var_2, var_4)))));
                                arr_29 [i_8] [i_8] [i_8] [i_8] [i_9] = (min(((((24 || (arr_3 [i_1]))) ? (~var_8) : (arr_2 [i_0 - 1] [i_7 + 1]))), -var_3));
                                var_19 = (max(var_19, var_1));
                            }
                        }
                    }
                    var_20 = (max((((!var_10) ^ (arr_20 [i_7] [i_7] [i_1] [i_0]))), ((~(max(2108810480, 1))))));
                }
            }
        }
    }
    var_21 |= var_3;

    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_33 [i_10] = (-1846239011 || 1);
        arr_34 [11] [11] = (min((min((arr_31 [i_10] [i_10]), (arr_31 [i_10] [i_10]))), ((((231 & 24) <= (arr_32 [9]))))));
    }
    var_22 = var_1;
    #pragma endscop
}
