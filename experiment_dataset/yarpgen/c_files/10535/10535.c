/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (((((max(var_0, var_6)))) ? ((max((max(770694081, -813363002)), var_4))) : (max(-18446744073709551593, (((var_11 ? var_7 : 76)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = (min(var_16, 6550164727789778741));
                arr_5 [i_0] [i_1] [22] = ((((((-33 + 2147483647) << (1 - 1)))) ? ((~(min((arr_0 [i_0] [i_1]), (arr_1 [4]))))) : (((max((arr_2 [21]), -86))))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_10 [i_2] [i_1] [i_2] = ((-(73 <= 32552)));
                    var_17 = (((max(10594336759663818162, (-127 - 1))) * (((((arr_4 [i_0 - 3]) != (arr_4 [i_0 - 4])))))));
                    var_18 -= ((((((arr_2 [i_0 + 2]) || 7168))) < ((((arr_2 [i_0 + 2]) != (arr_2 [i_0 + 1]))))));
                    var_19 += (18446744073709551615 | ((((arr_2 [i_0 - 3]) ? (arr_2 [1]) : (arr_2 [6])))));
                    arr_11 [22] = ((-(arr_6 [i_0] [i_1] [i_0])));
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    var_20 = ((4 << (((arr_14 [i_0 + 1] [15]) - 8852687911995248533))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_3] [i_0] [19] [i_5 - 1] [i_0] = (((arr_0 [i_0 + 2] [i_5 - 1]) / 4294960119));
                                arr_22 [i_0] [i_5 + 1] [i_4] [14] [i_1] [i_0] [i_0] = 163;
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_21 *= ((arr_13 [i_0 - 2] [i_0]) ? (arr_7 [i_6]) : ((var_10 ? 4294967294 : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_22 = (~15454243559865293947);
                    }
                }
            }
        }
    }
    var_23 ^= (var_6 < var_14);
    var_24 = (((!-9) ? (((max(var_7, var_3)))) : ((2142079387399767889 ? var_14 : var_10))));
    #pragma endscop
}
