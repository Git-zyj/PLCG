/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -10173;
    var_11 = (max((((!(((0 ? 255 : var_5)))))), (var_2 % var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_12 = (arr_0 [i_0] [i_2 + 3]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] = ((((((((var_6 ? var_3 : 248))) ? var_9 : (!32767)))) ? ((((max(var_1, var_5))) ? ((max(11, (arr_13 [5] [i_1] [5] [5] [i_1] [i_2] [i_3])))) : ((max(var_3, 1))))) : var_5));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_4] = (((((((51741 ? 25 : 9)) * ((738521092 ? var_9 : var_9))))) ? -10173 : (96 & -10173)));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = (min(var_8, ((~(arr_2 [i_0] [i_3 + 1] [i_1 + 1])))));
                                var_13 = (arr_2 [i_0] [i_1] [i_2 + 2]);
                            }
                        }
                    }
                    arr_17 [i_0] [2] [i_2] = (var_3 - var_7);
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_27 [i_6 - 1] [i_0] [15] [i_0] = (max((min((((var_6 ? -20 : 63))), (max((arr_6 [i_7] [i_6 - 1] [i_5] [i_0]), -10159)))), ((max(var_2, (((arr_11 [i_1]) ? (arr_22 [i_0] [i_1] [i_5] [i_6 - 1] [i_7]) : var_8)))))));
                                arr_28 [i_0] [i_0] [i_5] [i_6] [i_0] = ((!((((((-18 ? var_4 : var_6))) ? ((min(var_3, var_4))) : ((var_2 ? var_7 : var_1)))))));
                                var_14 *= ((-((((((arr_13 [i_0] [i_0] [2] [i_5] [13] [i_0] [i_0]) ? var_6 : var_6))) ? var_4 : ((var_9 ? var_2 : var_1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            {
                var_15 = ((1 != (~var_3)));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {

                            for (int i_12 = 0; i_12 < 14;i_12 += 1)
                            {
                                var_16 = ((((!(arr_36 [i_8] [i_10 - 2] [i_9])))));
                                arr_45 [i_8] &= max((((arr_1 [i_10 + 1]) ? var_6 : (arr_1 [i_10 + 1]))), 9096253958064130464);
                            }
                            for (int i_13 = 0; i_13 < 1;i_13 += 1)
                            {
                                var_17 = (min((((arr_35 [i_8] [i_10 - 2] [i_10] [i_10 - 2]) ? 9096253958064130464 : -16746)), ((max((((arr_26 [i_13] [i_11] [i_11] [7] [i_9] [i_9] [i_8]) ? 92 : 10159)), ((var_2 ? (arr_21 [i_9] [i_13]) : var_8)))))));
                                arr_48 [1] [i_9] [0] [i_11] = arr_34 [i_13] [i_13] [i_13];
                                arr_49 [i_8] [i_8] [i_11] [i_8] [i_11] [i_8] = (max(var_4, ((~(max(5053434933967752225, 12615))))));
                                arr_50 [i_11] [i_11] [i_11] [i_11] [i_11] [i_13] [i_13] = ((((max(-7529259236753407440, (max((arr_3 [i_11] [i_11]), var_2))))) ? (((~((0 ? var_5 : 28187))))) : (max(var_6, (!52304)))));
                            }

                            for (int i_14 = 1; i_14 < 11;i_14 += 1)
                            {
                                var_18 = 0;
                                var_19 ^= (((max(var_6, ((min(1, var_4)))))) ? (max(((max(var_1, 1))), (min(var_5, (arr_8 [i_11] [i_14]))))) : ((((min(var_2, var_5))))));
                                var_20 = max(((var_5 ? ((max((arr_35 [i_14] [1] [1] [1]), 2108517684))) : (((arr_19 [i_8] [i_8]) ? -1093012991885112453 : -1048272718829354270)))), ((min(-4176454836555537416, (arr_6 [i_8] [i_9] [i_11] [i_8])))));
                                arr_54 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] &= var_4;
                                var_21 -= (((((-((65512 ? 9223372036854775780 : var_3))))) ? (arr_7 [i_10 - 2] [i_9]) : (arr_42 [i_14])));
                            }
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    var_22 = var_2;
                    arr_59 [i_8] [i_9] [i_15] [i_15] = 26;
                }
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    var_23 = ((~((var_7 ? var_1 : (arr_26 [i_8] [i_8] [i_9] [i_8] [i_9] [i_16] [i_16])))));
                    var_24 = (((min((!var_5), (max((arr_41 [i_8]), var_0)))) % (((((((var_1 >> (arr_2 [i_8] [i_9] [i_8])))) && (arr_3 [i_8] [i_9])))))));
                    var_25 += (~((var_0 ? var_8 : (arr_8 [i_8] [i_8]))));
                }
            }
        }
    }
    #pragma endscop
}
