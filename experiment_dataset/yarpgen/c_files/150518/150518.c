/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_7 [2] [11] = ((+(((!((((arr_5 [i_0] [0] [i_1 + 2]) ? (arr_2 [i_0]) : 40))))))));
            arr_8 [9] [i_1] [i_1] = ((max(-4288, (arr_2 [i_1 + 2]))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_12 *= ((-((var_11 ? (arr_0 [i_0] [i_0]) : (arr_9 [i_2 + 1] [i_2 - 1] [i_2])))));
                        var_13 ^= ((!(((max(8188, 1706937683))))));
                        var_14 ^= (((arr_0 [i_1] [i_2 - 1]) ? (max(-var_10, (arr_11 [i_0] [i_2] [i_2 - 1] [i_2 + 1]))) : ((max((arr_2 [i_1 + 3]), (arr_6 [i_0] [i_0]))))));
                    }
                }
            }
        }
        var_15 = (max(var_15, (((((14120 ? (arr_13 [i_0] [14] [i_0] [16] [i_0]) : var_10)) + (((arr_13 [16] [5] [i_0] [i_0] [16]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_9)))))));
    }
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        arr_17 [i_4 - 2] [i_4 - 2] = (((((max((arr_16 [i_4 + 1]), -52)))) ? (((var_2 ? var_9 : ((max(-28023, var_7)))))) : (max((((~(arr_15 [i_4] [i_4 + 1])))), (max(var_5, (arr_15 [i_4] [i_4])))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_28 [i_7] [i_5] [i_6] = ((((((arr_16 [i_4]) ? (arr_16 [i_4]) : 7017911709071869410))) ? (((!(arr_20 [i_4] [i_4 + 2] [i_6])))) : (arr_20 [6] [i_4 + 2] [i_6])));

                        for (int i_8 = 3; i_8 < 21;i_8 += 1)
                        {
                            arr_32 [i_8] = var_8;
                            arr_33 [i_8] [i_5] [i_6] [i_7] [i_7] [i_8 + 2] = var_6;
                            var_16 ^= ((var_3 ? (max((max(18446744073709551614, var_3)), (arr_26 [i_8 - 3] [i_5] [i_6] [i_4 - 2] [i_8] [11]))) : ((max((arr_24 [i_8 + 1] [i_8 + 3] [i_6]), (arr_18 [i_4 + 1] [21]))))));
                        }
                    }
                }
            }
        }
        var_17 ^= (((max((arr_22 [17]), ((((arr_22 [i_4 - 2]) > var_1))))) - (var_8 != var_1)));
        var_18 = (((((max(2, (arr_23 [i_4] [i_4] [i_4] [i_4]))) ? (((arr_26 [i_4] [i_4] [i_4] [i_4 + 1] [22] [16]) ? var_6 : (arr_29 [i_4] [i_4 - 2] [i_4] [i_4 + 1] [i_4]))) : (~254)))));
    }
    var_19 = var_5;
    #pragma endscop
}
