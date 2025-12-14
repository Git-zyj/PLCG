/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_13;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_21 ^= (min(((((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0])))), var_8));
        arr_2 [i_0] = (((arr_1 [i_0 + 2] [i_0 - 1]) * ((~(arr_1 [i_0 - 1] [i_0 + 2])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 &= (((max(((min(var_14, 0))), (((arr_0 [i_2] [i_1]) ^ var_9)))) % -1309709606));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_23 = var_3;
                        arr_10 [i_0] [i_0] [1] [i_2] [i_3] |= (((((~(125 <= 32135)))) ? (max((((var_13 ? var_5 : var_5))), (min((arr_6 [i_0] [i_0]), (arr_1 [i_2] [i_2]))))) : (min((min((arr_5 [i_0]), (arr_6 [i_1] [10]))), ((max(30, 46863)))))));
                        var_24 = 1309709606;
                        var_25 = (!((((arr_3 [i_0 + 1]) ? 65535 : (((arr_8 [6] [i_1] [i_2] [i_3]) << (var_6 - 25742)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_26 = (max(var_26, ((((arr_12 [i_1 + 1] [i_2 - 1] [i_1 + 1]) ? (arr_12 [i_0] [i_1 - 1] [i_0]) : (arr_12 [i_2 - 1] [i_2 - 1] [i_0 + 2]))))));
                        var_27 += ((-((var_5 ? 255 : var_13))));
                        arr_14 [i_1 + 1] [i_1] = ((18 ? -31627 : -991240090));
                        var_28 = (((arr_3 [i_4 + 2]) >> (((arr_3 [i_4 - 1]) - 63309))));
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_29 &= (max((min(1160, 0)), (arr_16 [i_0] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 + 2])));
                        arr_17 [3] [i_1 - 1] [i_2] [i_1 - 1] = (((arr_11 [i_2] [i_1] [i_2] [i_5 + 2]) * (((4294967276 < (arr_11 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 2]))))));
                    }
                    arr_18 [i_0] [7] [10] [i_2] = (((max((arr_13 [i_1]), (max(var_7, 9223372036854775807)))) < (arr_7 [i_0] [6] [6] [7])));
                    var_30 = (~-576460752303423488);
                }
            }
        }
        arr_19 [4] = ((((max(var_6, ((((arr_0 [i_0] [i_0]) <= 11049)))))) ? 0 : ((var_3 * (arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1])))));
    }
    var_31 = (max(var_31, var_4));
    var_32 = var_3;
    #pragma endscop
}
