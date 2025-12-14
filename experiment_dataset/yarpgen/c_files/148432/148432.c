/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_0] [9] = (arr_1 [i_0] [1]);
                    var_14 = var_4;
                    var_15 = (15728640 >= 2626197397);
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((-(((arr_11 [i_0] [18] [i_1 - 4] [i_1 - 2]) ? (arr_11 [i_1] [i_1] [i_1 - 2] [i_1 + 1]) : (arr_11 [i_0] [i_0] [i_1 - 4] [i_1 + 1])))));

                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        arr_16 [4] [i_1] [i_1] [i_1] [i_1] [i_1] = ((-127 - 1) ? 1588661110 : (~2973829839784245675));
                        var_16 = (min(var_16, (((~((183 | ((65 ^ (-127 - 1))))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_17 = ((var_11 / (arr_15 [i_3])));
                        arr_19 [i_5] [i_5] [2] [i_5] [i_3] [i_5 + 1] = ((var_6 || (((249 ? -108 : 163)))));
                    }
                    for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_18 = (min(36, var_4));
                        arr_22 [i_0] [6] [i_0] [i_0] = ((-(-96 == var_2)));
                        arr_23 [i_1] [i_1 - 4] [i_3] [i_6] = -4657894203266652406;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_7] [i_7] [i_0] = ((((((arr_28 [i_0] [i_8] [i_3] [i_3] [i_1 - 1] [i_8]) ? ((1154270798 ? 65 : var_7)) : ((((arr_21 [i_3]) >= 6378035845162554443)))))) ? (((var_9 & ((max(var_7, (arr_4 [i_3] [i_7]))))))) : ((69 ? 0 : 1666833690))));
                                arr_30 [1] [i_7] [i_7] [i_7] [i_0] [i_0] = ((var_4 ? (arr_0 [i_0]) : ((-((var_8 ? 127 : 54))))));
                                var_19 = (max((arr_0 [i_1 + 1]), (var_6 + -1)));
                                var_20 = (((arr_3 [i_0] [i_7] [i_8]) || (arr_0 [i_3])));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                arr_40 [i_0] [i_0] [i_0] [22] [16] [i_0] [22] = var_3;
                                arr_41 [1] [i_10] [11] [i_1] [i_1] [11] = min(var_5, (min((!var_6), 185)));
                            }
                        }
                    }
                    arr_42 [i_0] [i_0] [i_9] = (~(arr_20 [i_0] [i_0] [19] [i_0] [i_0] [19]));
                    var_21 = 36;
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    arr_46 [i_12] = ((((!(((5542 ? 1 : 2741773026604725726)))))));
                    var_22 = var_1;
                }
                arr_47 [i_0] [i_0] [22] = (((((((arr_36 [i_0] [i_0] [i_1] [22]) | var_2)) != var_3)) ? ((183 ? -10482 : (arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (max((var_7 >> var_1), ((var_7 >> (var_3 + 393588045279265171)))))));
                arr_48 [i_1] = (((((var_9 ^ (max((arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [20]), var_3))))) ? (var_0 | -38) : -1297122693));
            }
        }
    }
    var_23 = ((~(var_12 != 284738701)));
    #pragma endscop
}
