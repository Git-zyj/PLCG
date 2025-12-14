/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [18] [i_0] [i_0] = 8;
                var_19 *= (((~(max(5269552326807687011, (arr_0 [22]))))));
                arr_7 [i_0] [i_1] [i_0] = var_9;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] = var_5;
                            var_20 ^= ((((((arr_12 [i_1 - 1] [i_3 - 1]) | (arr_12 [i_1 - 1] [i_3 - 3])))) ? ((((((arr_0 [i_3]) ? var_7 : 4294967287))) ? (((min((arr_0 [i_2]), (arr_2 [i_0] [i_0]))))) : var_14)) : (((min((arr_11 [i_0] [i_0] [i_0] [i_0]), var_3))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {

                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        var_21 = (((((var_4 ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) | var_17)) : var_9))) ? (~var_0) : ((((min(var_11, var_5))) ? 8204379541901478874 : ((((arr_17 [i_4] [i_1] [i_0]) ? (arr_12 [i_1] [i_1]) : (arr_2 [i_0] [i_5]))))))));
                        var_22 = ((~((var_14 ? 4294967256 : 2180490577))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] = -4294967288;
                        var_23 ^= (max((((arr_20 [i_6] [i_4] [i_1 - 1] [i_1 - 1] [i_4] [i_1]) ? var_15 : (arr_12 [i_0] [i_0]))), (((arr_20 [i_1 - 1] [i_4] [i_1 - 1] [i_1] [i_4] [i_0]) ? (arr_12 [i_1 + 1] [i_1]) : var_14))));
                        var_24 = (max(var_24, ((~(((((-7430401770887823234 ? (arr_21 [i_0] [i_1 - 1] [i_4] [i_6]) : (arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_6])))) ? var_6 : (((arr_18 [i_6] [i_4] [i_6]) ? 4294967288 : 255))))))));
                        arr_23 [i_0] [i_4] [i_0] [i_6] = var_4;

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_25 = (arr_3 [i_0]);
                            var_26 = (((arr_10 [i_0] [i_1 + 1] [i_0] [i_1]) <= (((arr_10 [i_0] [i_1 - 1] [i_0] [i_6]) ? (arr_10 [i_7] [i_1 - 1] [i_0] [i_0]) : (arr_10 [i_4] [i_1 + 1] [i_0] [i_6])))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_4] [i_8] [i_8] [i_8] = (min(1, 2702909559));
                        var_27 = ((~((~(~-4136613959893894275)))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_28 = (arr_25 [i_0] [i_0] [i_4] [i_1 + 1] [i_1 + 1]);
                        var_29 = ((var_4 % (~14936)));
                        var_30 = (max(((((arr_30 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_27 [i_0] [i_0] [i_0]) : ((-(arr_14 [i_0] [i_0] [i_4] [i_9])))))), ((((min((arr_3 [i_0]), var_16))) ? var_15 : (65535 | var_16)))));
                    }
                    var_31 = ((~(max(((((arr_14 [i_0] [i_0] [i_0] [i_0]) ^ (arr_2 [i_1] [i_1])))), (~var_0)))));
                    arr_32 [i_0] [i_0] = ((((((!(arr_1 [i_1 - 1] [i_1]))))) > (arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1])));
                    var_32 = -var_15;
                    arr_33 [i_0] [i_0] [i_4] = var_0;
                }
            }
        }
    }
    #pragma endscop
}
