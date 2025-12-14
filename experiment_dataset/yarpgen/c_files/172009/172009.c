/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_3, -var_6)) - ((((var_5 > (min(2107956267031460634, 16338787806678090981))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = (~207);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = (((min((1 & -2402), ((7010 ? -1 : 2)))) << (((arr_6 [i_0] [i_1] [i_0]) - 2931))));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_16 = (((77 != 2047) & (((!((min(1, 95))))))));
                                arr_14 [i_1] [i_1] [i_2 - 1] [i_1] [4] = ((((((((~(arr_13 [i_1] [i_3] [i_1])))) ? 218 : ((1 ? var_3 : var_3))))) ? var_10 : (var_9 < var_6)));
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [20] &= ((!(((var_5 ? (var_10 + var_6) : ((((arr_7 [i_2] [i_2]) || var_7))))))));
                            }
                            for (int i_5 = 4; i_5 < 19;i_5 += 1)
                            {
                                var_17 = (min(var_17, (((min((2107956267031460654 & var_7), var_1))))));
                                arr_18 [i_1] = ((!(((var_5 ? (arr_16 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 + 2]) : (arr_16 [2] [i_3 - 2] [i_3 - 2] [15] [i_3 - 2]))))));
                                var_18 *= ((~(arr_0 [i_2 + 1])));
                            }
                            arr_19 [i_1] = (arr_13 [17] [i_2 + 1] [i_1]);

                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                arr_22 [i_1] [5] [i_1] [i_1] = (arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [i_6]);
                                var_19 -= (min(37432, var_9));
                                var_20 = min(-1421626684421144480, (min(3044831075803200963, -38)));
                                var_21 += (arr_9 [i_3 + 2] [i_6]);
                            }
                            for (int i_7 = 3; i_7 < 18;i_7 += 1)
                            {
                                var_22 = (min(var_22, (((((var_3 ? (arr_23 [i_0] [i_0] [20] [i_3 + 1]) : 23921)) >> (((arr_16 [i_0] [i_0] [i_3 - 2] [i_3] [i_7 + 2]) - 27477)))))));
                                var_23 = (((((var_10 * ((var_6 ? 976601582 : (arr_20 [i_7 - 3] [i_1] [i_2] [i_1] [11])))))) ? ((min((((arr_21 [i_0] [i_1] [i_2] [i_3] [i_7]) ? (arr_10 [i_1]) : var_5)), var_5))) : (min((min(18446744073709551615, var_2)), (arr_20 [8] [i_1] [i_3 + 1] [13] [i_3 + 1])))));
                                arr_25 [i_0] [i_0] [i_0] [i_1] [i_0] = 992943255;
                                var_24 = (min(var_24, ((~(((min(var_7, (arr_10 [i_0]))) - (arr_10 [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (~var_0);
    #pragma endscop
}
