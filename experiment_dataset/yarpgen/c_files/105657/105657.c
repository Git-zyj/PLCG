/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = ((!((((var_6 <= var_4) ? ((222 ? 224 : var_1)) : 1)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [24] [i_0] = ((+((var_5 ? (arr_1 [i_0] [i_0]) : (arr_1 [1] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_1] [i_1] [i_0] = (arr_7 [i_0]);

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_0] = ((~((((arr_10 [i_4 + 2]) != var_8)))));
                            arr_16 [i_0] [i_2] [i_2] [i_3] [i_1] = 74;
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_1] = ((((((var_0 <= 3157707805) ^ (var_3 & var_4)))) ? (((arr_12 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4]) ? (arr_12 [i_4 + 2] [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4]) : (arr_12 [i_4 - 1] [i_4 - 2] [i_4 + 2] [i_4 + 2] [0]))) : (((max(var_6, (arr_5 [i_0])))))));
                            arr_18 [i_1] [i_4] = (arr_0 [i_4 + 2]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_2] [i_5] = (max((((!((min(74, 250)))))), (((((var_4 ? (arr_6 [i_3]) : (arr_20 [15] [15] [15] [i_3] [i_5])))) ? var_3 : (arr_20 [i_0] [i_0] [i_0] [i_3] [i_5])))));
                            arr_22 [i_1] [i_3] [i_1] = (max(231, ((30 ? (((~(arr_5 [i_0])))) : 3758096384))));
                            arr_23 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = (((var_4 + 2147483647) << (184 - 184)));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_5] = var_4;
                        }

                        for (int i_6 = 4; i_6 < 24;i_6 += 1)
                        {
                            arr_27 [i_0] [i_2] [1] [i_0] = (arr_2 [i_3]);
                            arr_28 [i_0] [i_2] [i_1] = arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0] [i_6];
                            arr_29 [i_1] [i_1] [i_2] = var_4;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_33 [i_3] [i_2] = var_2;
                            arr_34 [i_0] [13] [i_1] [13] [13] [i_3] [i_1] = (!4294967295);
                            arr_35 [i_7] [i_1] [i_3] [i_2] [i_2] [i_1] [i_0] = (!6751);
                            arr_36 [i_0] = ((var_8 ? (!42) : (((arr_9 [i_3]) ? var_6 : var_9))));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 24;i_8 += 1)
                        {
                            arr_40 [i_8] [i_3] [i_1] [6] [i_0] = ((-(arr_10 [i_8 + 1])));
                            arr_41 [i_1] = 35;
                            arr_42 [i_0] [1] [i_1] [4] [3] = var_9;
                            arr_43 [i_8] [3] [20] [i_1] [i_1] [i_0] [11] = 31;
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_46 [i_0] [i_1] [i_3] [i_3] [i_9] = ((((((-8 + 2147483647) >> (((arr_10 [i_0]) - 719162302344649450))))) ? ((-(arr_5 [i_9]))) : (arr_32 [i_0] [i_1] [1] [i_3] [i_1])));
                            arr_47 [i_0] [i_1] [i_2] [i_1] [15] = (((((~(min((arr_12 [23] [i_3] [5] [6] [5]), (arr_1 [3] [i_1])))))) ? -var_1 : -224));
                        }
                    }
                }
            }
        }
    }
    var_13 = (((((min(1959828446, var_10)) ? var_9 : ((var_0 ? var_5 : 17))))));
    #pragma endscop
}
