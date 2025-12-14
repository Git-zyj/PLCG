/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        var_21 = (((arr_7 [i_0 - 1] [i_1 - 1]) ? (((max(((!(arr_12 [8] [1]))), (arr_5 [i_0 - 1] [i_0]))))) : ((65535 ? 52528 : (-2147483647 - 1)))));
                        arr_14 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] = 9223372036854775800;
                        var_22 &= ((var_3 ? (((((max((arr_12 [i_0] [i_0]), -1106783762))) ? (max(var_2, 3201610264)) : var_10))) : ((var_17 ? (arr_3 [i_0 - 1] [i_0]) : (!var_4)))));
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_4 + 2] = ((-((((max(var_11, (arr_7 [i_0 - 1] [i_1])))) ? (arr_3 [i_0 - 1] [i_0]) : (((var_8 ? (arr_13 [i_4] [i_1] [i_1] [15]) : 6246563575785349523)))))));
                        var_23 = ((-122 ? ((((!var_14) ? var_7 : (((arr_0 [0]) ? var_12 : var_8))))) : ((((((-2147483647 - 1) ? 121 : (arr_17 [18] [i_1] [i_2] [i_4 - 1])))) * (var_12 / var_13)))));
                        var_24 = (arr_1 [i_0 - 1]);
                        var_25 = ((0 ? 1 : (49 || 562056469)));
                    }
                    var_26 = (((arr_17 [i_1] [i_1 - 1] [i_1 - 1] [i_1]) && ((((2147483647 ? (arr_12 [i_2] [i_0]) : 18446744073709551615)) <= (!6246563575785349523)))));
                    arr_19 [i_0] [i_0] [1] [i_2] = (((((arr_4 [i_0 - 1] [i_1 - 1]) ? var_11 : 3201610264)) <= ((((!(arr_12 [i_0 - 1] [i_1 - 1])))))));
                    var_27 = (max(var_27, (~var_17)));
                }
            }
        }
    }
    #pragma endscop
}
