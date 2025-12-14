/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [0] [i_2] = ((((min(((var_11 ? 32767 : var_10)), ((var_1 ? -29111 : var_3))))) ? (((min((arr_4 [i_0] [i_0] [i_2]), -10178)))) : (((arr_6 [8] [i_1] [i_1]) ? 10178 : var_11))));
                    var_13 = (min(((var_0 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_2] [i_0] [i_0]))), ((max(var_6, 26115)))));
                    arr_8 [i_2] [i_1] [i_0] = (((((((-32767 ? 32742 : 177))) ? var_6 : ((min(7375, 1)))))) ? ((6136829548015369124 ? var_8 : var_9)) : (max(1, 420708442)));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = (min(var_14, (((((max((arr_2 [i_3]), -7355))) ? (max((arr_2 [i_3]), (arr_2 [i_0]))) : ((min(var_5, (arr_11 [i_0] [i_0] [i_2])))))))));
                        arr_13 [i_3] [21] [i_2] [i_1] [2] [21] = ((((min(177, var_9))) ? ((((arr_4 [i_3] [i_2] [i_1]) ? (arr_4 [i_0] [i_0] [i_0]) : 4294967295))) : ((262143 ? var_3 : (arr_4 [i_0] [i_1] [i_1])))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_1] [i_0] = (((((((((arr_1 [i_0]) ? var_0 : -1))) ? ((min(1, (arr_10 [i_0] [i_1] [i_0] [i_2] [i_4])))) : ((var_11 ? (arr_2 [i_2]) : 3462151481))))) ? (((4294967295 ? 1 : 72))) : ((9850839688085752584 ? (arr_2 [i_0]) : (arr_3 [i_4] [i_0] [i_0])))));
                        var_15 *= (((((1043984903 ? var_6 : (arr_2 [i_1])))) ? ((var_11 ? (arr_2 [i_2]) : var_0)) : ((1 ? (arr_2 [i_1]) : 130))));
                    }
                    var_16 |= (max((((((var_4 ? var_10 : var_2))) ? var_2 : (max((arr_2 [i_1]), 7375)))), ((min(1, 1)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            {
                var_17 = ((((((min((arr_19 [i_5]), (arr_1 [i_5])))) ? (((arr_9 [i_5] [i_5]) ? 17802711073920111777 : (arr_15 [i_6] [i_6] [i_6 + 1] [i_6] [23] [23]))) : ((max((arr_12 [22] [i_6] [10] [22] [i_5] [i_5]), var_0)))))) ? ((((min(1, 65535))) ? 0 : 116)) : (min(((var_4 ? var_9 : var_8)), ((min(var_0, var_0))))));
                arr_22 [i_5] [1] |= ((((min(248, 255))) ? 32410 : (min(-2097876102, ((2097876101 ? 7940525091564938969 : 4833997415866260612))))));
                arr_23 [6] [i_6] &= (max(((1954665499 ? 9223372036854775807 : 65535)), -23548));
            }
        }
    }
    #pragma endscop
}
