/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ? 127 : ((((min(-115, var_5))) ? (~127) : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [7] = ((~(max(2065330134811758369, 0))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = (min((((((max(9797986847103173676, var_2))) ? (((-127 - 1) ? var_9 : 127)) : 52410))), (max((arr_9 [i_4]), (max(-120, 11445098164546666833))))));
                                arr_12 [i_0] [i_1] [i_2] [12] [1] [i_0] = (((-127 - 1) ? 1073741823 : (((min((arr_0 [i_3]), ((min(107, (-127 - 1))))))))));
                                arr_13 [1] [i_0] [i_2] [i_3] [i_4] &= (arr_2 [i_2]);
                            }
                        }
                    }
                }
                var_13 |= 18446744073709551615;

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_14 = ((!((((((var_2 ? var_3 : (arr_7 [i_1] [i_1] [i_5] [i_0])))) ? (((arr_6 [i_5] [i_1]) + (arr_2 [i_5]))) : var_7)))));
                    arr_17 [i_0] [i_0] [3] = var_6;
                    arr_18 [i_0] = 711639884;
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        arr_25 [i_0] [9] [2] [i_6 - 3] [i_7] = -3747812663049429766;
                        var_15 = (max(var_15, (arr_2 [i_0])));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_30 [i_8] [i_6] [i_6] = -12347;
                        arr_31 [1] [i_1] [11] [i_8] = (((~var_8) ? (arr_24 [i_1] [i_1] [4] [2] [12]) : var_9));
                    }
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        arr_35 [i_0] [11] [i_9] [i_9] [i_0] [i_1] = ((((14803839034701927600 ? 363131638 : 99))) ? (((var_3 ? (-127 - 1) : 1477013047))) : (arr_24 [i_1] [i_1] [i_1] [0] [8]));
                        arr_36 [3] [i_1] [i_1] = ((-((((arr_1 [i_9 + 2]) >= (arr_14 [i_0] [8] [i_6 - 1]))))));
                    }
                    arr_37 [i_6] [i_6] [i_6] = ((-127 ? 51 : ((var_8 ? var_0 : (arr_32 [9])))));
                    var_16 = (-127 / 2147483628);
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_17 = -1;
                    var_18 = ((((((1 ? var_7 : 9226550567658750683)) ? 92 : (arr_14 [i_1] [i_1] [i_10])))));
                }
            }
        }
    }
    #pragma endscop
}
