/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_13 = (!((max((arr_1 [1]), 1586245958))));
        var_14 = (max(var_14, var_9));
        var_15 = (max(var_15, 92));
        arr_3 [19] |= (arr_0 [i_0]);
        arr_4 [i_0] = 2041468829;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, (((arr_2 [i_1] [i_1]) >= 0))));
        var_17 += 281474842492928;
        var_18 = 2590165174;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {

                        for (int i_6 = 4; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_4] [3] [i_4] [i_2] [i_6] [i_2] = (~(min(-779801006, -3154)));
                            var_19 = (((!(arr_18 [i_5] [i_6 + 2] [i_6 - 4] [i_6 + 1] [9]))) ? ((3014437148145902241 ? (arr_1 [i_6 + 1]) : (((((arr_6 [i_2] [15]) > (arr_14 [i_2] [i_3] [15]))))))) : (arr_22 [1] [i_3] [i_2]));
                            var_20 = (arr_5 [i_2]);
                            arr_24 [i_2] [i_2] [i_2] [i_2] = (((~238) <= (((arr_0 [i_2]) ? 45 : (arr_12 [i_2] [i_2] [i_2])))));
                        }
                        for (int i_7 = 4; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_2] [11] [i_2] [i_2] = var_7;
                            arr_29 [17] [17] [i_4] [i_2] [i_7 + 1] [i_4] [i_2] = max((min(5903305488016781029, (arr_18 [i_7 + 2] [i_7 + 2] [i_7 - 3] [i_7 - 1] [i_5]))), var_6);
                            var_21 = ((~(~-2041468828)));
                        }
                        for (int i_8 = 4; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_22 = (((arr_32 [i_2] [i_8 + 2] [i_2] [i_8 + 2] [i_8]) > (((arr_32 [i_8 - 4] [i_8 + 2] [i_2] [15] [i_8 + 2]) / -5903305488016781029))));
                            var_23 = ((((max((((var_4 ? (arr_25 [i_2] [i_3] [i_4] [i_5] [8] [i_5]) : var_5))), (arr_9 [i_2])))) ? ((((var_8 == (arr_11 [i_8] [i_8 + 1]))))) : (arr_20 [3] [i_8 + 2] [i_8] [i_2])));
                        }
                        var_24 = ((!((max((arr_22 [i_2] [i_2] [i_2]), (min(13, 5903305488016781029)))))));
                    }
                }
            }
        }
        var_25 = (max(var_25, (max((((((-(arr_30 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? -1626585243967698369 : (((~(arr_33 [i_2] [i_2] [20] [i_2] [i_2] [i_2])))))), (((arr_17 [i_2] [i_2] [i_2]) ? (arr_26 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_17 [i_2] [1] [i_2])))))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_26 = ((~(((((var_11 & (arr_10 [13] [i_9] [i_9])))) ? (~-27737732) : ((~(arr_25 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
        var_27 = ((!(((~(227 + var_4))))));
    }
    #pragma endscop
}
