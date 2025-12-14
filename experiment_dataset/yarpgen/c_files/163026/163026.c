/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_15 += (((((~((min(14, (arr_2 [i_2]))))))) ? (min(13766504272412358756, (arr_6 [i_2 + 2] [i_2 - 2]))) : (((max((arr_0 [i_0]), (arr_7 [i_0] [i_0] [7] [i_0])))))));
                    var_16 = (max(var_16, (((~((~((min(32768, var_11))))))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (min((arr_0 [i_0]), (min((arr_7 [i_1] [i_1] [i_2 + 3] [i_2 - 1]), (arr_9 [i_0] [i_1] [i_2 + 1] [i_2 - 1] [i_3] [i_3])))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_0] [2] [i_2 + 3] [i_3] [i_4] = (((((var_11 ? ((var_13 ? -2086122071 : 11)) : (((var_11 ? var_0 : (arr_0 [i_3]))))))) ? ((min(((137438953471 ? var_7 : (arr_10 [i_0] [i_0] [9] [i_0]))), var_1))) : (arr_6 [i_1] [i_1])));
                            var_18 = (max(var_18, -65535));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [3] = (min((((~(min((arr_2 [i_0]), (arr_4 [i_0] [i_3] [i_5])))))), var_14));
                            var_19 += ((var_13 / 28434) << (13766504272412358743 - 13766504272412358742));
                            arr_18 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_5] [i_1] |= ((~(4294967290 != 65535)));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_0] [1] [9] [9] = (arr_8 [i_2 + 2] [i_2] [i_2] [i_2 + 2]);
                        var_20 -= ((-(arr_19 [i_6 - 1] [i_6] [4] [i_6] [i_6 - 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 6;i_8 += 1)
                        {
                            {
                                arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] = (((!(arr_4 [i_8 + 1] [i_8 - 2] [i_8 + 4]))));
                                arr_29 [6] [i_1] [6] [i_7] [i_1] = (max((max((((arr_19 [i_0] [i_8] [i_2 + 2] [i_7] [i_7]) ? var_10 : 18446744073709551597)), 21)), -923046839));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 &= ((~((min(var_0, 65527)))));
    #pragma endscop
}
