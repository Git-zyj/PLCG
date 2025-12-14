/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_7 ? var_2 : 1)));
    var_14 = ((65535 && (max(var_12, (!139)))));
    var_15 *= var_4;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = min((max(var_4, (((-2147483647 - 1) ? -23 : var_3)))), ((~(-2147483647 - 1))));
                    var_17 = (arr_7 [i_0]);
                    arr_9 [i_1] = ((((min((arr_8 [i_0 - 2]), (arr_8 [i_0 - 2])))) ? var_6 : ((-(!var_4)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (((-(((!(arr_4 [i_1 + 2] [i_0 - 1] [i_3])))))))));
                                var_19 = (((arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1] [1] [i_1 + 2]) < -var_7));
                                arr_14 [i_0] [10] [i_2] [10] [10] = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_20 = (min((-2117382104942236001 & 23), -12466));
                    arr_24 [3] [i_6] [1] = ((min(3333610565, 24790)));
                    var_21 = ((((((var_10 / var_3) <= (arr_22 [i_5] [i_6] [i_5])))) > var_1));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_22 = (min((min(((12340854838363663918 * (arr_23 [i_5] [i_5] [i_5] [i_8 + 1]))), ((((arr_29 [i_8]) <= (arr_13 [8] [9] [i_7] [3] [i_7])))))), (((!((min(6477714275827339669, (arr_3 [15] [i_5] [i_5])))))))));
                                var_23 = (((((-((-(arr_19 [i_8 - 1])))))) ? (((!(arr_15 [6] [i_5])))) : ((max((arr_28 [i_8] [i_8 - 1] [i_9 - 1] [14] [i_8 - 1]), (arr_28 [i_8] [i_8 - 2] [i_9 - 1] [9] [12]))))));
                                var_24 = ((~(((((2447429045 ? var_1 : 1933))) ? (((-127 - 1) | (arr_7 [i_7]))) : ((~(arr_15 [10] [i_6])))))));
                            }
                        }
                    }
                    var_25 = (arr_5 [i_5] [i_7]);
                }
            }
        }
    }
    #pragma endscop
}
