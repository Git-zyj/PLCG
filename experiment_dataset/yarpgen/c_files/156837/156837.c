/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] = (arr_1 [i_1 - 1]);
                arr_5 [i_0] = (max(-32766, (min(-var_6, 6019258405067247142))));
                arr_6 [i_0] = var_9;
            }
        }
    }
    var_10 = ((!(((0 ? 0 : 18446744073709551597)))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_11 += (((!(((6019258405067247119 ? 15 : -98))))));
                arr_12 [i_2] [i_3] [i_3] = ((((((((657787517888521210 << (-121 + 122)))) ? -6019258405067247102 : (((23258 ? 114 : 81)))))) || ((((((arr_10 [i_2] [i_2] [i_3]) ? var_7 : (arr_10 [i_2] [i_2] [i_2]))) / ((((arr_11 [i_2]) ^ 199))))))));

                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_3] [i_3] [6] [i_4] [i_5] [i_6] [i_6] = var_7;
                                var_12 += (max(((((((657787517888521210 ? -108 : 1)) + 2147483647)) << (arr_14 [i_2 + 1] [i_2] [i_2 + 1]))), (((((max(-32760, var_0))) || ((min(var_4, 1))))))));
                            }
                        }
                    }
                    arr_21 [i_3] [i_3] [i_3] [i_4 + 3] = (max((!9588022481839973869), ((((4 ? var_8 : var_5)) & -39))));
                    arr_22 [i_3] [i_4] [i_3] [i_3] = 657787517888521217;
                    var_13 = (((!var_7) ? -11444617064621692646 : -7907365698807922002));
                    arr_23 [i_2] [i_3] [i_4 + 2] [i_3] = 1;
                }
                var_14 = (((((1 ? var_2 : ((1 ? 0 : 207901613))))) ? ((((!(((2147483644 << (((-65 + 93) - 28))))))))) : ((((max(var_4, 1))) ? var_5 : var_6))));

                for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    var_15 = ((((!((!(arr_15 [i_3]))))) ? (max((((-36 ? 1 : 10008))), (((arr_15 [i_2]) + var_6)))) : 1));
                    arr_26 [i_2 + 1] [i_3] [i_7] [i_3] = ((~((~((4 & (arr_18 [i_2] [0] [0] [i_2] [i_2])))))));
                }
                for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_3] [1] [i_8] = (max(-var_5, (max((((4 ? (arr_11 [2]) : 1))), ((252 ? (arr_10 [i_8] [i_8] [i_8 - 1]) : (arr_16 [i_8] [i_2])))))));
                    var_16 = (13 <= 63119);
                }
                for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_17 = (min((max((5053 & 0), -1026742950)), 8));
                    arr_32 [1] [i_3] [i_9] [i_9] = (max(((-var_0 + ((1 ? var_5 : (arr_15 [i_2]))))), (~var_9)));
                }
            }
        }
    }
    var_18 = (((var_4 * var_2) ? ((((min(-5808315749706896849, var_5))) ? ((var_3 << (30874 - 30864))) : ((1 ? 1 : 1)))) : 1));
    #pragma endscop
}
