/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [9] [14] [3] = ((+(((arr_8 [i_0 - 1] [i_3 + 4]) ? (((arr_0 [1] [6]) ? (arr_10 [12] [12]) : 785305212)) : (arr_4 [0])))));
                            var_11 = (min(var_11, (arr_9 [1] [6] [1] [9])));
                            arr_12 [14] [7] [1] [9] = ((!((((arr_4 [i_3 + 1]) + (arr_8 [i_1 - 2] [i_2]))))));
                        }
                    }
                }
                arr_13 [3] [1] = ((+(((arr_8 [i_0 - 1] [i_1 + 1]) ? (arr_1 [5] [14]) : 182))));
                arr_14 [10] = ((((!(~72)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_12 = ((((!(((72 ? (arr_17 [5]) : (arr_19 [18] [7])))))) ? ((~((~(arr_21 [8] [1] [6]))))) : ((((((arr_19 [1] [7]) ? (arr_23 [12] [i_6] [i_6] [17]) : (arr_26 [2] [2] [1] [10])))) ? 72 : (arr_22 [1] [4] [i_6] [17] [1])))));
                                var_13 = (min(var_13, ((((((((arr_18 [6] [13]) ? (arr_19 [3] [6]) : (arr_27 [1] [7] [14] [11] [14]))) * 0))) ? (((!(((var_7 ? (arr_19 [1] [12]) : var_3)))))) : (~38107)))));
                                var_14 = (max(2636059405, ((2476463630 / (-127 - 1)))));
                                arr_29 [1] [i_6] [10] [0] [8] = (((((-(((arr_16 [15] [10]) ? (arr_24 [1] [2] [8]) : 1))))) ? (((((72 ? -691072777 : 47208)) - var_2))) : (min((((60 ? 1 : 1))), -var_9))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_15 = ((-((((min(9997, 1))) ? ((((-127 - 1) ? 0 : 4294967295))) : 18446744073709551614))));
                            var_16 = (18446744073709551606 ? 8954706346539072764 : 45);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
