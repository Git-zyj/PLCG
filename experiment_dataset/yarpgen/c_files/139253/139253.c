/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((((max(70, 0)))) ? ((var_9 ? (~178) : (var_2 & var_5))) : (var_1 % var_2)));
    var_11 = max(-47, -var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_3] [i_2] [i_2] |= 20221;
                            arr_9 [i_0] [i_0] [i_0] [i_0] = var_1;
                            arr_10 [i_0] [i_2] [0] [i_1] [i_0] = var_1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_12 = (min(var_12, 1603081356));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max(((-30383 ? 3226625461374636708 : var_7)), (arr_3 [i_0] [i_0]));
                                var_13 = ((((max((307892000 == var_5), 14))) ? (-2231392235977653187 == var_1) : (max((max(1798620118, var_2)), (var_0 && var_8)))));
                                var_14 = (((var_3 ? ((max(var_7, var_7)) : ((max(var_0, var_7)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_15 ^= var_8;
                            arr_24 [i_0] [i_7] [i_1] [i_0] = (((((max(var_8, 3987075290)) == ((var_2 ? 51817 : (arr_17 [i_0] [11] [i_0]))))) ? ((max(1798620118, -2111295555))) : ((147 ? (arr_3 [i_8 - 1] [i_8 - 1]) : var_1))));
                            var_16 = (max(var_16, ((((((-1 ? -753485340 : 47908))) ? var_4 : (max(var_6, (arr_15 [14] [i_8] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8]))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    arr_34 [i_9] = (max(((((!21) && ((((arr_31 [i_9] [i_10] [5] [5]) ? 293074159538764120 : var_4)))))), (max(var_5, (arr_26 [i_9] [0])))));
                    arr_35 [i_9] = max((var_7 * var_6), ((var_8 ? 35 : (arr_17 [i_9] [i_10] [i_9]))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_43 [i_11] [i_9] [i_11] [i_9] [i_9] = 21104;
                                arr_44 [i_9] [i_13] = (max((((var_3 + (arr_0 [i_10 - 1] [i_10 - 1])))), (max((arr_0 [i_10 - 1] [i_11]), var_2))));
                                var_17 = ((((((((arr_6 [17] [i_9] [i_9]) ? 1 : var_8))) ? (((max((arr_20 [2] [i_11] [i_11]), var_0)))) : (max(var_2, var_7))))) ? 6247525519520063858 : ((var_5 ? var_2 : var_8)));
                                arr_45 [i_12] [i_9] [1] [8] [i_9] &= ((!((max(6063174322588125245, var_6)))));
                            }
                        }
                    }
                    var_18 = (((var_6 + -var_7) + ((4294967295 ? -2668979637 : var_6))));
                }
            }
        }
    }
    #pragma endscop
}
