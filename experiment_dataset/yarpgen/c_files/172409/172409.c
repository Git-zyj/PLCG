/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] = arr_3 [i_0];
                var_11 *= (arr_6 [i_0] [4] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 &= ((!(arr_8 [i_0] [i_1] [i_2] [i_0])));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_13 = (arr_4 [i_3] [i_0] [i_0]);
                                var_14 = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                            var_15 = (((((min(167, 1))) ? (((min(var_3, 1)))) : (arr_13 [i_3] [i_2] [i_1] [i_1] [i_0]))));

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                arr_19 [i_0] [i_1] [i_2] [i_3] [3] = (((arr_10 [1] [i_2] [i_1]) ? (arr_10 [i_1] [i_2] [i_1]) : (arr_2 [i_1])));
                                var_16 = (min(var_16, (((arr_11 [i_0] [i_2] [3] [i_5]) ? (arr_10 [i_0] [i_1] [i_2]) : 738976003))));
                                var_17 = -3715789163157780707;
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [7] [i_1] [i_2] [i_2] [i_0] [i_6] = (((((~(arr_0 [i_0])))) / 3715789163157780716));
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_2] [i_6] &= (-1125899369971712 | var_7);
                            }
                            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                            {
                                arr_26 [i_0] [i_1] [i_2] [i_2] [i_3] [1] = 245;
                                arr_27 [i_7] [i_3] [i_1] [i_0] = ((min(1, ((!(arr_15 [i_0] [i_1] [i_2] [i_3] [i_7]))))));
                                var_18 = (min((!4866999978944960474), (max(((-1125899369971739 ? 738976001 : 236)), ((max((arr_9 [i_1] [i_1] [i_3] [i_3]), (arr_3 [i_0]))))))));
                                var_19 = (min(var_19, var_10));
                                var_20 = (arr_20 [i_0] [0] [0] [i_3] [i_7]);
                            }
                            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                            {
                                arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((max(0, 738976001))), 1));
                                var_21 = ((((((((var_1 ? (arr_28 [i_0] [4] [i_2] [i_3] [i_8]) : (arr_15 [i_0] [i_0] [i_2] [i_0] [2])))) ? -var_5 : (arr_1 [i_8])))) ? (((min(1, 1)))) : (((arr_0 [6]) + (((arr_15 [i_2] [i_1] [i_2] [i_3] [i_8]) | (arr_10 [i_0] [i_3] [i_3])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_5;
    var_23 = (min(var_23, var_4));
    #pragma endscop
}
