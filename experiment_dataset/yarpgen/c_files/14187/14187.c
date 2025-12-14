/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_1 - 1] [i_1 - 1] [i_1] = (min((((var_1 ? (arr_1 [i_1]) : (arr_1 [i_0 + 2])))), (max((arr_2 [i_1 - 1] [i_0]), (arr_3 [i_0 - 1])))));
                arr_5 [i_1] [i_0] = (((((((-29314 - (-32767 - 1)))))) / 3));
                var_15 -= ((var_2 - (arr_2 [i_1] [3])));
                arr_6 [i_0] [i_0] [3] = var_12;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 = var_12;
                                var_17 = ((157 ? (arr_11 [1] [9] [i_2] [i_1] [i_0]) : (max(((((var_12 + 2147483647) >> (var_12 + 1612500468)))), ((~(arr_11 [i_2] [i_2] [i_2] [i_2] [i_2])))))));
                                var_18 = (((((-(arr_3 [i_0 + 2])))) ? (((((18446744073709551605 ? var_4 : (arr_11 [i_0] [i_1] [i_0] [i_3] [i_4])))) ? (var_2 >= var_3) : (max(var_14, var_3)))) : (min((arr_12 [i_0] [8] [i_0]), (arr_11 [i_0] [i_1] [i_1] [i_0] [i_1 + 2])))));
                                arr_13 [i_0] [i_0] [i_0] [8] [i_2] = ((((var_9 ? ((-(arr_9 [8]))) : (((var_1 ? (arr_1 [1]) : 32766)))))) ? ((((2069057145954615231 ? (arr_3 [i_2]) : (arr_1 [i_4]))) + 18446744073709551605)) : ((((arr_12 [0] [i_1 - 1] [4]) * var_11))));
                            }
                        }
                    }
                    var_19 = (max(var_2, var_12));
                    var_20 = (((max((~9222246136947933184), (arr_9 [i_0]))) | (~32759)));
                }
            }
        }
    }
    var_21 = (min(var_21, ((((((var_0 >= ((var_4 ? var_7 : var_12))))) <= var_6)))));
    #pragma endscop
}
