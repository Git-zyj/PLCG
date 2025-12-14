/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_12 ? ((var_0 ? var_15 : 16256)) : (123 * 1023)))) * var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((arr_0 [i_0]) ? (((-32767 - 1) - 64513)) : ((0 ? -1 : (arr_0 [i_1]))))));
                var_21 = ((((!(~16777215))) ? 3 : ((-((max(0, 20)))))));
                var_22 = (((arr_3 [i_1]) ? var_0 : (max((max(-13, (arr_1 [i_0]))), (arr_2 [i_0])))));
                var_23 = (min(var_23, var_17));
                arr_5 [i_0] [i_0] = (max((((arr_2 [i_0]) ? var_13 : (3 - 0))), var_6));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] [i_3] = var_6;
                arr_12 [i_2] [i_2] = 10;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_24 = ((((max((arr_18 [i_4] [6] [i_6]), (arr_0 [i_4])))) ? (max(var_12, 16254)) : (((max((arr_14 [i_4] [i_6]), (arr_14 [i_4] [i_6])))))));
                    arr_22 [8] [i_5] [13] [i_5] = ((-(((arr_21 [i_6] [i_5] [i_4] [i_4]) ? var_6 : (arr_21 [i_4] [i_4] [i_5] [i_6])))));
                    var_25 *= ((125 - (arr_18 [i_4] [i_5] [i_6])));
                    arr_23 [i_5] = ((0 - (((-2147483647 - 1) ? 0 : 4294967295))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_26 = ((-1 ? var_9 : ((min((arr_25 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 + 1]), var_17)))));
                                var_27 *= ((max((max((arr_20 [i_8] [i_7] [i_4]), -16777215)), (arr_15 [i_6]))));
                                var_28 = 4294967295;
                                var_29 = var_13;
                                var_30 = ((96 ? (max((arr_4 [i_6]), var_1)) : (((((max(var_7, (arr_26 [12] [i_4] [i_5] [i_6] [i_7] [i_8 + 1]))) >= -16253))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
