/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 1] [i_1] [i_2 + 1] [i_3] [i_4] [i_4 - 1] = (max(-var_1, (((!(arr_4 [i_2 - 1] [i_4 + 1]))))));
                                arr_13 [i_0 - 1] [i_4] [i_2 + 1] [i_3] = ((var_9 & ((~(arr_11 [i_4] [i_3] [i_3] [i_2 + 3] [i_2] [i_1] [i_4])))));
                            }
                        }
                    }
                    var_12 = ((-(min(var_0, (arr_0 [i_0 + 1] [i_2])))));
                    arr_14 [i_1] = (arr_10 [i_1] [i_2] [i_2 + 3] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = (~(~var_6));
                                arr_19 [i_0 + 1] [i_1] [i_2 + 2] [i_5] = max(((max(((max(4200095935, 94871352))), 9223372036854775804))), (max(var_0, ((min(4200095940, 4200095935))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((((var_1 ? (1 == 8868081708005527480) : (var_7 & var_7)))) - var_3);
    var_15 = (((((min(var_9, var_1)))) < (min((9578662365704024128 & 94871352), ((min(var_9, var_4)))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            {
                var_16 *= (9578662365704024154 >= 94871356);

                for (int i_9 = 4; i_9 < 18;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_17 = ((~((var_0 ? (arr_25 [i_9 - 2] [i_8] [i_8 - 1]) : var_7))));
                        var_18 = (min(var_18, (((((max((arr_25 [i_9 - 3] [i_10] [i_8 - 1]), (arr_28 [i_9 + 1] [i_9] [i_8 - 1])))) & var_0)))));
                        var_19 = (min((4200095924 && 4200095935), (min(var_1, (arr_27 [i_10] [i_9] [i_8] [i_9 - 2] [i_8 - 1])))));
                    }
                    arr_30 [i_8] [i_9] = ((((var_3 ? (~9578662365704024128) : (~var_9))) & var_4));
                    arr_31 [i_9] [i_8] [i_7] = (arr_26 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]);
                    var_20 = max((((-var_1 == (((arr_25 [i_9] [i_8] [i_7]) & var_1))))), (((((-(arr_20 [i_7] [i_8 - 1])))) ? (min(var_7, 6521887757285147165)) : (arr_27 [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 - 1]))));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    var_21 += (arr_26 [i_7] [i_8 - 1] [i_11] [i_8 - 1] [i_8 - 1] [i_11]);
                    var_22 = (min(((~(arr_21 [i_11]))), (((var_0 && (arr_21 [i_8 - 1]))))));
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    arr_38 [i_8] [i_8] [i_8] [i_8] = (((max(var_7, var_7))) ? ((max(var_2, (arr_35 [i_7] [i_7] [i_8 - 1] [i_12])))) : (((arr_35 [i_12] [i_8 - 1] [i_8 - 1] [i_7]) & (arr_35 [i_7] [i_8] [i_8 - 1] [i_12]))));
                    var_23 = (min(var_23, (((!(!var_0))))));
                    var_24 ^= (min(var_0, (((!((max((arr_37 [i_7]), var_5))))))));
                    var_25 -= var_9;
                }
                var_26 = (((arr_33 [i_7] [i_8 - 1] [i_7]) < 8868081708005527504));
                var_27 -= ((((min((arr_25 [i_8 - 1] [i_7] [i_7]), (min(var_5, 94871352))))) ? var_6 : (~var_4)));
                var_28 = ((~(arr_34 [i_8 - 1] [i_8 - 1])));
            }
        }
    }
    #pragma endscop
}
