/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = (~var_8);
                                var_13 -= ((((9769 | (arr_9 [i_0] [i_0] [i_2 - 1] [i_3] [i_4] [i_2] [i_4])))) ? ((29849 ? ((var_4 ? var_5 : 61566)) : (arr_5 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_3]))) : ((0 + ((min(1, -32))))));
                                arr_10 [i_0] [i_1] [i_3] [i_2] [i_3] [i_4] = ((122 || ((!(arr_5 [i_2 + 4] [i_2] [i_2 - 1] [0])))));
                                var_14 = ((((arr_6 [i_1] [i_2 + 1] [i_2 + 4] [i_3]) ^ 3970)) ^ var_2);
                                var_15 = (((((((max(var_0, var_6))) & var_3))) ? -122 : ((~(arr_6 [i_1] [i_2 + 1] [i_2] [i_2 + 1])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_5] [i_5 - 1] [i_6] = (var_7 ? (61566 / -1) : (((((arr_4 [i_0] [i_0] [i_5] [i_6]) ? -17058 : var_9)) % -25918)));
                            arr_16 [i_5] [i_5] [i_5] [i_6] = ((((((arr_14 [i_0] [i_0] [i_0] [i_6 + 2]) ? (arr_4 [i_6] [i_6] [i_6] [i_6 - 2]) : (arr_4 [i_6 - 2] [i_6] [i_6 - 2] [i_6 + 2])))) % ((~((-32 ? 3970 : 65532))))));
                            arr_17 [i_5] [i_5 + 1] [i_0] [i_5] = ((arr_9 [i_6] [i_5 - 2] [12] [i_5] [i_5] [i_5 - 2] [i_5 - 2]) / 1);
                            arr_18 [14] [4] [i_1] [i_5] [i_5] = (((arr_2 [i_1] [i_6]) ? (--3972) : (-7956 / -88861478)));
                            var_16 -= ((((-2954086677640816431 != (((-(arr_14 [i_5] [i_5] [i_5 - 1] [i_5 - 1])))))) ? var_3 : ((-4 ? ((-1750840833 ? 3585 : 1958188076)) : 12))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        {
                            arr_28 [i_9] [i_8 + 1] [i_9] [i_10] = (((min(((-15649 ? var_3 : (arr_12 [i_7]))), ((var_11 ? -25813 : 255)))) | (25813 % 65531)));
                            var_17 *= (25824 == 22);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_18 *= ((~(-25824 < 3954)));
                                var_19 *= ((!(((((min(112, -122))) % ((min((arr_34 [i_13] [i_13] [i_13] [i_13] [1]), var_1))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_20 = (max(var_20, ((-1 ? ((6081 ? (~-8) : 1)) : 25918))));
                            var_21 = (min(var_21, ((((((~(arr_27 [i_7] [i_8 + 1] [i_7] [i_15])))) ? (((!(arr_27 [i_7] [i_8 - 1] [i_15] [i_15])))) : 25804)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
