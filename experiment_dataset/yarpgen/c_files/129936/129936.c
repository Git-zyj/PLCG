/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (min(255, (-9223372036854775807 - 1)));
    var_21 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_22 &= ((!(arr_1 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_23 -= (arr_0 [i_2]);
                    var_24 ^= ((42864 % ((((!(arr_1 [i_0] [i_0]))) ? var_5 : (min((arr_4 [i_2] [i_1 + 3] [i_0] [i_0]), var_4))))));
                    var_25 = (arr_2 [i_2] [i_2]);

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_26 = (arr_8 [i_0] [i_0] [i_2] [i_0]);

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            var_27 *= (((arr_6 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0]) ? (((max(1168724029, var_7)))) : (arr_10 [i_0] [i_0])));
                            var_28 ^= (max((((max(-1, 92)))), ((((min(1168724029, (arr_0 [i_3])))) ? (max((arr_3 [i_2] [i_2]), (arr_10 [i_0] [i_0]))) : (((22671 ? (arr_7 [i_1] [i_1] [i_3]) : var_6)))))));
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_2] = (max(((min(var_12, (arr_7 [i_4] [i_4 + 4] [i_4 + 3])))), (((arr_7 [i_4 + 4] [i_4 + 1] [i_4 - 2]) % (arr_7 [i_4] [i_4 + 3] [i_4 + 1])))));
                        }
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            var_29 = (min(var_29, ((((arr_2 [i_0] [i_5 + 4]) ? (arr_7 [i_0] [i_0] [i_3]) : ((min(((((arr_2 [i_2] [i_2]) && (arr_5 [i_1])))), (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                            var_30 *= ((arr_13 [i_0] [i_3 + 1] [i_1] [i_1] [i_0]) ? (((-4337 % (arr_6 [i_1] [i_0] [i_1 + 1] [i_1] [i_1] [i_1])))) : (arr_14 [i_0]));
                            arr_17 [i_0] [i_2] [i_0] [i_0] [i_0] = (min((((var_16 | (((arr_13 [i_2] [i_3] [i_2] [i_1] [i_2]) - var_9))))), (((arr_14 [i_2]) ? ((-1536972861 ? 1168724029 : 11506943175878277615)) : (((22671 ? var_9 : 67108863)))))));
                            var_31 ^= ((((!var_11) ? (min((arr_9 [i_0] [i_1] [i_0] [i_0] [i_5] [i_5 + 2]), var_1)) : (((min(65535, 0)))))) | (((((-(arr_15 [i_0] [i_0] [1] [i_2] [i_1] [i_0] [i_0])))))));
                        }
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            var_32 ^= var_3;
                            var_33 = max((((arr_10 [i_1 + 1] [i_2]) ? 3126243267 : (arr_10 [i_1 - 1] [i_2]))), var_10);
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_34 *= 1;
                            var_35 ^= (((((var_7 ? (arr_5 [i_7]) : (arr_3 [i_2] [i_1]))))) ? (arr_10 [i_0] [i_7]) : ((((max((arr_19 [i_0] [i_7] [i_0]), var_8))) ? (max((arr_4 [i_0] [i_2] [i_2] [i_3]), var_3)) : 1)));
                        }
                        var_36 = (min(var_36, var_16));
                        var_37 = ((((((arr_13 [i_2] [i_1 - 2] [i_1 + 3] [i_1 + 3] [i_3]) ? (arr_13 [i_2] [i_1 + 2] [i_1 + 3] [i_1] [i_3]) : (arr_15 [i_1] [i_1 + 2] [i_1 - 2] [i_2] [i_1] [i_2] [i_3 - 1])))) ? 592067337 : (arr_15 [i_0] [i_1 - 2] [i_1 + 3] [i_3 - 1] [i_3 - 1] [i_2] [i_3])));
                    }
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        var_38 = (arr_19 [i_0] [i_2] [i_0]);
                        var_39 = (((((((min((arr_1 [i_2] [i_1]), var_3))) ? 0 : ((var_3 ? var_4 : var_7))))) - (min(-1536972861, (min(var_19, var_14))))));
                        var_40 -= (max(var_11, -6985155264735972444));
                    }
                }
                arr_24 [i_0] [i_1 - 1] = (min((((min(var_3, var_4)))), ((((max(var_7, var_7))) ? (arr_19 [i_1] [i_0] [i_0]) : 334654304))));
                var_41 = (min(var_41, (((~(((((var_16 ? var_11 : var_8))) ? (max(32768, (arr_14 [i_0]))) : (((((arr_19 [i_1] [i_0] [i_1]) <= var_19)))))))))));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_42 = (max(var_42, var_2));
                            var_43 = var_15;
                        }
                    }
                }
            }
        }
    }
    var_44 = -1579607481;
    #pragma endscop
}
