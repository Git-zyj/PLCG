/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-32256 ? (max((32256 & var_0), ((min(var_9, var_8))))) : (max(var_6, (67855701 * var_2)))));
    var_16 = var_8;
    var_17 = 10993;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        var_18 = (max(var_18, ((((((arr_6 [i_0] [16] [0]) ? 23932 : ((23913 | (arr_7 [13] [i_1] [13]))))) == 23913)))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [16] = (min((((arr_2 [0] [i_0]) ? (min(var_4, (arr_7 [i_0] [i_1] [i_2]))) : ((max(32256, (arr_7 [8] [15] [i_3])))))), (min(105, 28))));
                    }
                    arr_12 [i_1] [i_1] [i_2] [13] = (((((1 | 0) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_8 [i_1 - 1] [i_1 + 3]))) > (((arr_4 [23] [i_1 - 4] [i_1 + 2]) ? -23913 : -32256))));
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_21 [i_4] |= var_4;
                                arr_22 [i_0] [i_0] = (min(((65472 ? ((20897 ? (arr_1 [i_5]) : 44639)) : (((1 ? 32265 : 1383221226))))), ((((((arr_16 [16] [16] [13] [16]) ^ var_10))) ? ((~(arr_19 [i_0] [0] [i_0] [i_0] [i_0]))) : (arr_4 [i_0] [i_1] [i_6])))));
                                var_19 = (max((((127 ? (arr_18 [i_0] [i_0] [i_0]) : 0))), (((!(arr_5 [i_1 + 4] [i_5 - 3] [i_6 + 1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_20 = (2966 / -8099905863496825296);
                                arr_28 [i_0] [i_1] [i_1] [i_7 + 1] [i_8] [i_8] [i_1] = (max((((!-75) - (((32265 != (arr_6 [i_1] [i_1] [i_8])))))), (max((min(1383221229, 667975240)), (((arr_0 [i_0]) ? (arr_4 [i_4] [i_7] [16]) : (arr_6 [i_0] [i_0] [i_0])))))));
                                var_21 = ((var_11 | ((-23927 ? (arr_18 [i_0] [i_4] [i_7 + 1]) : -1957217422))));
                            }
                        }
                    }
                    arr_29 [i_0] [i_0] [5] = (((((arr_23 [i_1 + 1] [i_4] [13] [i_4] [i_1 + 1] [i_1 - 3]) ? (arr_20 [i_1 - 2] [i_1] [i_1 - 3] [i_1 - 3]) : (arr_23 [18] [9] [i_1] [15] [i_1 + 2] [i_1 + 1]))) == (max((arr_20 [i_1 + 4] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (arr_20 [i_1 - 2] [i_1] [1] [i_1 + 2])))));
                }
                arr_30 [i_0] [i_0] [i_1] = ((2514812148 > (min((arr_6 [i_0] [i_0] [i_1 + 4]), 10671911150766501808))));
                var_22 = (max((((arr_2 [i_1 + 2] [i_1]) ? var_6 : (arr_7 [i_1 + 2] [5] [i_1 - 2]))), (((!((min(-17, -17))))))));
                var_23 = (max((56876 > 44640), (((arr_20 [i_0] [i_0] [i_0] [i_0]) ? ((0 ? (arr_6 [i_1] [i_0] [i_0]) : -98)) : (((!(arr_10 [2] [2] [i_1] [i_0] [2] [12]))))))));
                var_24 = ((-(min((max(var_0, 127)), ((((arr_4 [5] [5] [5]) || (arr_4 [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
