/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_3] [i_3] [7] [i_3] [i_3] [i_1 + 2] = ((((var_3 ^ (min(var_11, (arr_8 [i_0 - 1] [i_1] [i_1] [i_2] [i_3]))))) & (((((var_3 == 18446744073709551600) || ((((arr_8 [i_3] [i_0] [i_2] [i_1] [i_0]) ? (arr_1 [i_2]) : var_10)))))))));
                        arr_11 [i_0] [18] [i_0 + 1] [i_0 + 1] [13] [i_3] = (((((((!(arr_6 [1] [i_1]))) ? (arr_8 [i_0] [i_0] [10] [i_0 - 1] [i_0]) : ((min(-8, var_0)))))) ? ((max((arr_5 [i_0 + 1]), (arr_5 [i_0 - 1])))) : ((4109794738 ? ((((arr_5 [i_0]) ? 0 : (arr_6 [i_1 + 2] [i_3])))) : 1))));
                        var_16 = (min(var_16, ((((((max(17065642073888615789, 65515)) - (((255 ? 2086 : var_0))))) == (((((((arr_3 [i_0]) ? (arr_9 [5] [i_1]) : var_4)) < (0 || var_2))))))))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_17 = (~((~(arr_12 [12] [i_1 + 1] [i_1 + 1] [i_1]))));
                        var_18 = (min(var_18, -112));
                        arr_15 [i_0] [i_0] = 2199023124480;
                        arr_16 [i_0 + 1] [3] [i_0 + 1] [i_0 + 1] [i_0] = ((((min((arr_0 [i_0 + 1] [i_0 - 1]), (arr_1 [i_2])))) ? (max(var_1, ((51179 ? 1132895895 : 14138206763757842745)))) : (((((min(247, var_7))) ? -var_0 : 249)))));
                    }
                    var_19 = (min(var_19, (((((((arr_13 [i_0] [i_0 + 1]) ? (~var_4) : ((64 ? 111 : (arr_5 [i_2])))))) ? var_7 : 2147483647)))));
                    var_20 = 1;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_2] [i_5] [i_5] [i_2] = (((var_6 + 2147483647) << (((((max((min(var_5, 0)), (((arr_19 [14] [i_5] [14] [i_1] [i_1] [i_0]) | var_5)))) + 1371574290)) - 1))));
                                arr_24 [4] [4] [i_6] [i_5] [i_2] [i_2] [i_2] = (((var_11 ? var_14 : 983040)));
                            }
                        }
                    }
                    var_21 *= -4983204328738751452;
                }
            }
        }
    }
    var_22 -= 20;
    #pragma endscop
}
