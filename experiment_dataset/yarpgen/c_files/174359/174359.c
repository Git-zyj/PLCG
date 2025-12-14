/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((min((max(1693792336, 0)), (66846720 % -101))) >> (((1125899906842112 - var_9) - 969888310))));
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3] [1] [i_0 + 1] [1] = (((((0 ? var_3 : var_2)) ^ var_7)));
                                arr_15 [i_4] [10] [i_0] [i_1 + 1] [i_0] = (((653380950 ^ 1) ? var_2 : (min(1050321538, (arr_13 [i_0] [i_1 + 1] [i_0] [i_3])))));
                            }
                        }
                    }
                    arr_16 [i_0] = (min(9007199254740988, 9223372036854775807));

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_15 = (((((max(1, 3261996356)))) ^ (arr_8 [i_2] [1] [9])));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_16 = (min(var_16, ((min((((((((arr_6 [i_2] [i_2] [1] [0]) ? var_3 : (arr_3 [i_0] [i_0] [i_0])))) ? (var_7 || var_2) : (max(var_6, (-2147483647 - 1)))))), (max(var_0, 12880813971635180459)))))));
                            arr_21 [i_2] [i_0] [i_2] [i_0] [i_0] [i_1] [i_0] = var_1;
                        }
                        var_17 = (max(var_17, ((min((arr_9 [i_1 - 1]), -6054631214097062197)))));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_0] [i_7] = (min((((var_6 ? var_1 : (arr_1 [i_0] [i_1 - 1])))), ((((arr_9 [i_0 - 1]) < (arr_9 [i_0 - 1]))))));
                        var_18 += ((max((((arr_1 [6] [6]) << (98 - 97))), var_11)));
                        var_19 = 1972211339;
                    }
                    arr_26 [i_0] [i_1] [i_1] [i_1] = ((((max(1, 13237))) % ((min(var_3, (arr_23 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_2 - 1]))))));
                    arr_27 [i_0] = ((var_1 ? ((((min((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_0])))) >> (((((-9223372036854775807 - 1) - -9223372036854775781)) + 41)))) : (var_7 << var_5)));
                }
            }
        }
    }
    var_20 = ((var_1 / (((-127 - 1) ^ 57))));
    #pragma endscop
}
