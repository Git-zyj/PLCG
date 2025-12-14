/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 ^= (arr_0 [i_0]);
                    var_12 = ((var_4 ? -29 : 105));
                    arr_8 [0] [0] [i_2] &= (((((((((arr_3 [i_1]) & 255)) == 28)))) > ((((((arr_3 [i_0]) ? -41 : (arr_7 [i_0] [i_0] [i_1] [i_0])))) ? (((var_9 ? -35 : (arr_3 [i_0])))) : (arr_4 [i_1 - 3] [i_2])))));
                }
            }
        }
        arr_9 [i_0] = (min(18446744073709551612, -5527));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_13 = (((-35 - -7387) | ((((98 ? 105 : 122)) | ((-1380157708 ? -920175218 : 0))))));
                    var_14 = (1784699322 ? -116 : (65535 | 65535));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_5] [i_5] [i_0] [i_6] [i_7] [i_8] = (((arr_26 [i_5] [i_5]) ? ((((((arr_15 [i_7] [i_6] [i_0] [i_0]) ? (arr_19 [i_6] [i_7]) : var_9))) ? (((((arr_22 [i_0] [i_5]) < var_10)))) : var_0)) : ((((arr_1 [i_0]) ? (~var_7) : 1848096211)))));
                                var_15 = (((((~(arr_23 [i_0] [i_0 - 1] [i_6] [i_7] [i_0 - 1] [i_0 - 1])))) ? (((var_5 ? 0 : (arr_23 [i_0] [i_0 - 1] [i_7] [i_7] [i_8] [i_0])))) : (~var_0)));
                                var_16 = (max(16777152, 16023747442948371103));
                            }
                        }
                    }
                    var_17 |= (((arr_24 [i_0] [i_0] [i_0] [i_5] [i_5] [i_6] [i_6]) ? 65535 : var_0));
                    arr_29 [i_5] [i_5] = max((max((((arr_1 [i_5]) / var_0)), var_2)), (arr_25 [i_0] [i_5] [i_6]));
                    var_18 ^= ((((((arr_2 [i_0 - 1] [i_5] [i_6]) ? ((var_3 ? -24138 : var_3)) : var_9))) ? ((((var_9 ? (arr_19 [i_0] [i_5]) : (arr_16 [i_0] [i_5] [i_5] [i_6]))))) : (((var_8 && (arr_3 [i_0 - 1]))))));
                }
            }
        }
        arr_30 [i_0] = (arr_17 [6]);
    }
    var_19 = var_6;
    var_20 = (max(var_20, -18446744073709551615));
    var_21 -= var_10;
    #pragma endscop
}
