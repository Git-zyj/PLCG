/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((-125 != ((min((arr_2 [i_1] [i_1]), (arr_4 [i_0] [i_0]))))));
                var_11 = (((((1 ^ ((183 ? 151 : 164))))) % (min(((1 ? (arr_3 [i_0]) : 2147483645)), var_7))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_12 = (min(((9223372036854775786 ? (arr_1 [i_2]) : var_9)), 28));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (((var_10 != 39258) && ((max(29330, (~223))))));
                    var_13 = ((~(((arr_4 [i_0] [i_1]) * (arr_0 [i_0] [i_2])))));
                    arr_9 [i_0] [i_1] [i_2] = ((((min((arr_7 [i_0] [i_1] [i_2] [i_2]), 32767))) ? (((-var_0 ? ((var_8 >> (var_6 + 64))) : var_10))) : ((max(var_6, -9223372036854775786)))));
                }

                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_14 = (~-2316827653);
                    var_15 = min((min(((((arr_6 [i_0]) << (65534 - 65507)))), (max((arr_6 [i_3]), (arr_10 [i_0] [i_0] [i_0]))))), ((((-21897 / (arr_10 [i_3] [i_1] [i_0]))) >> 1)));
                    var_16 = 0;
                    var_17 = -21662;
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_18 = min((min(var_10, ((max(160, 173))))), ((183261609 ? (max(var_4, (arr_11 [i_0] [i_4]))) : 4071737260)));
                    arr_14 [i_0] [i_4] = (~((-(((arr_3 [i_1]) ? 96 : var_10)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_19 = 5;
                                arr_22 [i_0] [i_1] [i_1] [i_7] [i_6] = (~(~var_3));
                                var_20 = (arr_3 [i_7 - 3]);
                                arr_23 [i_5] [i_5] = var_0;
                            }
                        }
                    }
                    var_21 = (arr_13 [i_1] [i_1] [2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_22 = ((-(arr_7 [i_0] [i_1] [i_5] [i_8])));
                                var_23 = ((1978139643 ? var_8 : (arr_25 [10] [i_1] [i_5] [i_5] [i_9] [i_9])));
                            }
                        }
                    }
                }
                var_24 = (max((((-var_7 * ((var_8 / (arr_27 [i_0] [12])))))), (12518 / -9223372036854775793)));
            }
        }
    }
    var_25 = ((~(min(var_2, ((var_5 ? var_7 : 796845452090656508))))));
    #pragma endscop
}
