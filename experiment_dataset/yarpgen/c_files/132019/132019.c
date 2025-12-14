/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) < (arr_0 [13] [i_0])));
        arr_3 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = (-18446744073709551615 && 1);
        arr_8 [i_1] &= ((((((arr_4 [i_1]) & (arr_4 [i_1])))) ? 80 : (((arr_4 [i_1]) ^ (arr_6 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_16 [i_1] [i_1] [i_1] &= ((1020 > ((((max(var_6, (arr_1 [4])))) ? (9223372036854775807 - var_0) : ((max((arr_13 [i_1] [2] [i_2] [i_3]), (arr_4 [i_1]))))))));
                    arr_17 [i_1] [9] [i_3] [1] = ((((((((arr_15 [i_1] [i_2] [i_2] [1]) ? var_1 : 1))) ? ((((arr_15 [i_1] [i_2] [i_2] [i_3]) ? 46902 : var_5))) : -3611028915247962999)) >= 13516));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_22 [1] [i_3] [6] [i_5] = (min((1 * 13394519911615406943), (((arr_13 [i_1] [i_2] [i_3] [i_4]) | 13321460131259352108))));
                                arr_23 [i_1] [i_5] [i_4] = -1032;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_30 [i_1] [i_2] [i_3] [i_2] [i_3] [i_3] = (((max(((8741 ? -629729689507840311 : 13516)), ((((arr_0 [4] [i_2]) != -1))))) != var_0));
                                arr_31 [i_1] [i_1] [i_1] [10] [4] [i_1] = 13;
                                arr_32 [i_3] [i_3] [i_3] [i_3] [9] = ((!((max(var_2, (((18446744073709551597 ? var_11 : (arr_19 [8] [i_1] [i_3] [2])))))))));
                                arr_33 [i_1] [10] [i_7] [i_6] [i_7] [i_1] &= 152;
                            }
                        }
                    }
                    arr_34 [i_3] [i_2] [i_1] = (min((((((-(arr_20 [i_1] [i_2] [i_1] [i_2] [i_3])))) ? ((var_12 ? 29 : 25)) : (((4611686018427387904 != (arr_19 [i_1] [i_2] [i_2] [i_3])))))), (((arr_27 [i_3] [i_2] [i_2] [2] [i_1] [i_1]) ? var_13 : (arr_24 [i_2] [i_1] [i_3] [i_1] [i_2])))));
                }
            }
        }
    }
    var_16 = ((var_9 ? (((((var_2 ? var_3 : var_9)) << ((((4611686018427387883 ? var_3 : var_8)) - 297))))) : var_6));
    var_17 = var_10;
    #pragma endscop
}
