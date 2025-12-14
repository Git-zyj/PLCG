/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] = (((((-((2792 ? var_9 : (arr_1 [i_1])))))) ? ((2792 ? ((2113929216 ? (arr_2 [i_2] [i_1] [i_0 - 1]) : var_14)) : (!66))) : ((((max(3023465128, -2113929216)))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_3] [3] [i_3] [i_1] [i_3] = (min((!var_12), (((~6974) ? (min(var_4, (arr_8 [1] [i_1 + 2] [1] [i_2] [i_3]))) : (arr_0 [4])))));
                        var_17 = ((-(+-657749780)));
                        var_18 = ((~((((!(arr_4 [i_3] [i_2] [i_1 - 1] [i_0 - 1]))) ? ((28 ? var_9 : 0)) : -var_16))));
                        arr_11 [i_3] = ((~((((arr_9 [i_3] [i_2] [1] [i_1 + 1] [i_0 - 1]) ? 66 : var_1)))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0 - 1] = (max(((2792 << (((arr_12 [9] [9] [i_0 - 1] [i_1]) - 43)))), ((var_5 ? (arr_12 [9] [i_1] [i_0 - 1] [i_4]) : var_10))));
                        var_19 = (max((((2798 <= ((min((arr_13 [i_4] [10] [i_2 - 1] [i_1] [i_0]), (arr_12 [i_4] [10] [i_1] [0]))))))), ((var_3 ? (min(var_2, var_16)) : ((var_12 ? (arr_5 [i_0 - 1] [1] [i_2 - 2] [i_4]) : (arr_1 [i_2 - 3])))))));
                        var_20 = ((5172 || (((-(((arr_9 [i_0 - 1] [i_0 - 1] [i_1] [i_2 - 2] [i_1]) * var_10)))))));
                        var_21 = ((~(max(7590536650903760611, (372755290 - var_11)))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [5] [2] [8] [i_6] [i_5] [9] = (min(var_1, (max(-2113929216, (arr_4 [i_5 - 1] [i_2 - 3] [i_1 + 2] [i_0])))));
                                arr_24 [i_1 + 1] [i_1 + 2] = -11817;
                                arr_25 [i_0] [i_2 - 2] [i_2 - 3] = max(((((((arr_0 [i_5]) - var_11)) != (!255)))), (max((arr_8 [i_0 - 1] [i_1 - 2] [i_2] [i_5 - 1] [i_6]), ((var_15 ? var_7 : (arr_6 [9] [i_1] [8]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = -208;
    #pragma endscop
}
