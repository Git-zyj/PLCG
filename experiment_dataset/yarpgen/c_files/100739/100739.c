/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((((min((arr_5 [i_3] [i_1]), (arr_3 [i_2 - 1] [i_0 + 1])))) ? (min((var_6 + 567), ((var_12 ? (arr_6 [i_3] [i_3] [i_3] [1]) : 64428)))) : ((((!(arr_8 [i_0] [i_3] [i_0 - 3] [i_2]))))))))));
                            var_16 = 64;

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_17 = (((arr_3 [i_0] [i_0]) ? (arr_0 [i_2 + 1]) : (arr_0 [i_0 - 3])));
                                var_18 = (!1108);
                                arr_11 [i_1] [7] [i_1] [i_3] = var_1;
                                var_19 = ((232 ? 232 : 49152));
                                arr_12 [i_0] [i_0] [i_0] [i_1] [10] = ((((!(arr_3 [i_0 + 1] [i_1]))) ? (var_1 ^ var_10) : (arr_7 [14] [i_1] [i_2 + 1] [0] [i_4] [i_1])));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_7 [i_0] [6] [i_0] [i_0] [i_0] [i_1]);
                                var_20 = (-57 ? 3893408625 : (arr_8 [i_0 + 1] [i_1] [i_2] [i_3]));
                                var_21 = ((64 ? ((var_4 ? (arr_2 [i_0] [i_1]) : var_0)) : (((arr_1 [i_5]) ? (arr_0 [i_3]) : var_7))));
                                var_22 += (arr_10 [i_2 + 1] [i_5] [i_2] [i_5] [i_1]);
                            }
                            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                            {
                                arr_19 [i_3] [i_1] |= ((((max((arr_17 [i_2 + 1] [i_2] [0] [i_2 + 1] [i_2] [12] [i_2 + 2]), (arr_17 [i_2 - 1] [i_2] [8] [i_2 + 3] [i_2] [12] [i_2 + 3])))) ? var_7 : ((max((arr_13 [i_0] [i_1] [2] [i_3] [i_0] [i_2] [i_3]), 0)))));
                                arr_20 [i_1] [i_1] [i_2] [i_3] [i_6] = (1 && -31174);
                            }
                        }
                    }
                }
                arr_21 [i_1] [i_1] = (~var_8);
                var_23 = (min(var_23, (((((!(arr_15 [i_1] [i_1] [1] [i_0] [i_0 + 2] [8] [i_0 - 2]))) ? (max((19 + 5995), (arr_2 [i_1] [i_1]))) : (((((-31161 ? 49920 : (arr_2 [i_0] [1]))) / 65529))))))));
                var_24 = (min(var_24, (arr_6 [i_1] [i_0] [i_0] [i_0])));
            }
        }
    }
    var_25 &= var_0;
    var_26 *= (~var_2);
    #pragma endscop
}
