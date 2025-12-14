/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (((arr_0 [i_0] [i_0]) >> ((((((4193280 ? -1788316932 : 1)))) + 5))));
                var_16 = ((~((((arr_3 [i_0 - 1]) != (arr_3 [i_0 + 1]))))));
                var_17 = ((((((((-1684392535 ? 63820 : -4193280))) ? 181 : 7))) ? (((arr_4 [i_0]) ? ((((arr_1 [18] [i_1]) >> (-1407578871 + 1407578900)))) : 4294967295)) : ((((((var_11 ? var_14 : (arr_1 [i_0] [i_1])))) ? ((((arr_5 [22] [i_1]) != 1684392535))) : (arr_0 [i_1 - 2] [i_1 - 3]))))));
                var_18 = ((arr_3 [i_0 + 2]) >> (arr_5 [i_0] [12]));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_19 = (((arr_3 [i_3]) ? ((((107 <= (!var_11))))) : (((arr_7 [i_0] [i_1 - 2]) * (arr_10 [i_0] [i_1 - 1] [i_0 + 2] [i_3])))));
                                var_20 = (arr_7 [i_0] [i_0]);
                                arr_14 [i_0] [4] [i_0 + 2] [i_0] [i_0] = (((((!-88) ? (((((arr_7 [i_1] [i_1]) <= -1)))) : ((~(arr_7 [i_3] [i_1]))))) & ((max((44 == -45), 1655410989)))));
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0] = (arr_11 [i_0] [i_0]);
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_21 = (arr_16 [i_0] [i_0]);
                                var_22 = (arr_2 [i_5] [1] [i_1]);
                            }

                            /* vectorizable */
                            for (int i_6 = 2; i_6 < 23;i_6 += 1)
                            {
                                arr_21 [i_0] [i_6] [i_0] [i_0] [1] [i_0 + 2] = var_1;
                                arr_22 [i_0] [i_1] [i_2] [i_6] [1] = var_14;
                                var_23 = (((arr_6 [i_2] [i_2]) ? 255 : (arr_12 [i_0] [i_2 + 1] [i_1 - 3] [i_0])));
                                var_24 = ((0 ? 1 : -44));
                            }
                            /* vectorizable */
                            for (int i_7 = 2; i_7 < 22;i_7 += 1)
                            {
                                arr_26 [i_0] [i_1 - 2] [i_2] [i_3 - 2] [i_3 - 2] [i_0] = (((arr_18 [i_7] [i_1] [i_2] [i_2] [i_7 + 2]) || (!var_5)));
                                var_25 = ((~(((arr_25 [13] [i_0 + 2] [17] [i_2] [i_2] [i_3] [16]) & (arr_8 [i_1 - 3] [1] [i_7])))));
                            }
                            var_26 = (min(var_26, var_5));
                            var_27 = 126;
                        }
                    }
                }
            }
        }
    }
    var_28 = (var_7 | var_5);
    var_29 = -var_8;
    var_30 = -1403430822;
    #pragma endscop
}
