/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_17 = (max(var_17, ((max((arr_2 [i_3]), ((-(arr_2 [i_0]))))))));
                        var_18 = ((((min((arr_3 [i_0] [i_3]), (arr_3 [i_0] [i_3])))) ? (((60107 ? 1 : 119))) : (((arr_1 [i_0] [i_1]) ? (arr_3 [i_0] [i_2]) : (arr_5 [i_3] [i_2] [i_1] [i_0])))));
                        var_19 |= (arr_0 [i_0]);
                        var_20 = 60107;
                    }
                    arr_8 [i_0] [i_0] [i_2] [i_0] = (((((((-(arr_5 [i_0] [i_1] [i_2] [i_2]))) >> ((((23 ? 198 : 60134)) - 145))))) ? 5393 : 11429919158389938351));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_13 [i_1] |= ((-((-14 ? -126 : 1320083985))));
                                var_21 = arr_12 [8] [2] [i_1] [i_0];
                                var_22 = (min(var_22, (((18446744073709551603 ? 5429 : -1120961680064417957)))));
                                var_23 = (((!var_16) ? ((var_11 ? (arr_5 [i_1] [i_1] [i_2] [i_4]) : var_5)) : (((arr_5 [i_0] [i_1] [i_4] [i_5]) ? (arr_5 [i_0] [i_1] [i_2] [i_0]) : (arr_5 [i_0] [i_1] [i_2] [16])))));
                                arr_14 [i_2] [i_2] [i_2] [i_4] [i_5] [i_0] [i_2] = ((((((((var_0 ? var_6 : 9))) * 2183611287))) ? (((arr_7 [i_0] [10] [i_2] [i_4] [i_5]) << (arr_7 [i_0] [i_1] [i_2] [i_2] [i_2]))) : ((var_3 ? (min(-1, var_14)) : -23506))));
                            }
                        }
                    }
                    arr_15 [i_2] [5] [5] [i_2] = min(((var_3 ? (arr_1 [i_2] [i_1]) : (arr_10 [i_0] [i_2]))), ((((arr_10 [i_2] [i_2]) != var_5))));
                }
            }
        }
    }
    var_24 = ((27419 ? var_8 : 2111356025));
    var_25 = var_5;
    var_26 = (~1320083985);
    #pragma endscop
}
