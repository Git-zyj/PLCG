/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_18 > (!var_17))));
    var_21 = (max(var_21, 21));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = ((~(((arr_0 [i_0]) ? (((arr_4 [i_1]) ? (arr_3 [i_0] [i_1]) : (arr_2 [15] [i_1]))) : (arr_2 [i_1] [i_0])))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_23 = ((((((((7684770359720514715 ? (arr_2 [i_0] [i_1]) : (arr_6 [i_0] [i_0] [i_0])))) ? (min(4294967272, 19)) : var_3))) - 7764988843311810745));
                    arr_9 [i_0] [i_0] [i_0] = (((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))) <= ((max((arr_7 [i_0] [i_0] [i_1] [i_2]), (arr_7 [i_0] [i_1] [i_1] [i_2]))))));
                    arr_10 [i_0] [i_0] [i_0] = (arr_5 [i_2] [i_1] [9]);
                    arr_11 [i_0] [i_0] [i_0] = (max((((-(arr_3 [i_1] [0])))), ((var_16 ? 11 : (arr_8 [i_0] [i_0] [i_0] [i_0])))));
                    var_24 = ((~(max((arr_3 [i_2] [i_2]), var_1))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_19 [i_4] [i_4] [9] [i_1] [i_4] = (((((((min((arr_16 [i_0] [i_0] [i_4] [i_0] [i_0]), 7))) ? var_11 : (arr_4 [i_5])))) ? ((+(max((arr_5 [i_0] [i_3] [i_4]), (arr_16 [i_0] [i_1] [i_4] [i_4] [i_5]))))) : var_15));
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_4] [i_1] [i_1] = ((((((18446744073709551615 ? 1 : 2147483627))) - var_8)));
                                arr_21 [i_4] [i_4] [i_3] [i_1] [i_4] = ((((((-((var_19 ? var_10 : (arr_4 [i_0]))))) + 9223372036854775807)) >> (29688 == 6)));
                            }
                        }
                    }
                    arr_22 [i_3] [i_1] [i_0] = (max((((arr_16 [i_0] [i_0] [18] [i_1] [i_3]) ^ (arr_2 [i_0] [i_0]))), ((-((-381377946338360544 ? var_19 : 6))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_25 = (arr_0 [i_3]);
                                var_26 = ((((((arr_25 [i_0] [i_0] [i_1] [i_0] [i_3] [i_6] [i_6]) ? (arr_27 [i_0] [i_6] [i_3] [i_6] [i_7]) : (arr_27 [17] [i_6] [i_6] [i_6] [i_7])))) ? (arr_25 [i_0] [i_1] [i_3] [i_6] [i_6] [i_7] [i_6]) : (((arr_25 [16] [i_1] [i_7] [i_6] [i_7] [i_1] [i_6]) ? var_19 : (arr_25 [i_0] [i_1] [i_1] [i_3] [i_6] [i_7] [i_6])))));
                            }
                        }
                    }
                    var_27 = (arr_16 [i_1] [i_1] [12] [i_1] [i_1]);
                }
                arr_29 [i_0] [i_1] [i_1] = (((((-7764988843311810733 ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [12]) : (arr_2 [i_0] [i_0]))) << (var_15 - 3572954100))) << (((arr_0 [i_0]) - 887951517)));
                var_28 = (max((arr_16 [i_1] [i_1] [14] [i_1] [i_1]), ((((arr_28 [10] [i_1] [i_0]) >= (arr_24 [i_1]))))));
                arr_30 [i_0] [i_0] [i_1] = (((arr_2 [i_1] [i_0]) ? (max(((26771 ? 62439 : 32767)), 8)) : 0));
            }
        }
    }
    #pragma endscop
}
