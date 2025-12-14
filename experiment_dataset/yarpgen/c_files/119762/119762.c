/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((((max((arr_11 [i_0] [i_1] [i_2] [i_0]), (arr_0 [i_0]))) + (max((arr_11 [i_0] [i_0] [i_0] [i_0]), var_11)))))));

                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] = ((((min((arr_2 [i_0] [i_1]), (arr_2 [i_1] [i_2])))) & var_12));
                                var_19 = (31 ? 31 : 1);
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_1] = var_4;
                                var_20 = ((((((arr_1 [i_5]) ? (arr_1 [i_0]) : (arr_1 [i_3])))) ? (((((arr_10 [i_3] [i_1] [i_2] [i_3] [i_5]) ? var_3 : (arr_10 [i_5] [i_1] [i_2] [i_1] [i_0]))) / ((var_5 ? var_1 : var_7)))) : ((max((min((arr_3 [i_2] [i_1]), var_3)), (max(var_5, (arr_2 [i_2] [i_5]))))))));
                                var_21 = (max(var_21, ((min(((67108863 ? (arr_10 [i_0] [i_2] [i_2] [i_3] [i_5]) : 57344)), ((min(1, 45775))))))));
                                var_22 *= (((((arr_5 [i_5] [i_5] [i_5] [i_0]) ? (arr_5 [i_5] [i_2] [i_2] [i_1]) : (arr_6 [i_5]))) <= (((arr_6 [i_2]) ? (arr_5 [i_0] [i_1] [i_5] [i_3]) : (arr_6 [i_0])))));
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                            {
                                var_23 *= ((((((arr_9 [i_3] [i_2] [i_1] [i_0]) ? (((min(-28, (arr_13 [i_0] [i_1] [i_6] [i_2] [i_2]))))) : -9223372036854775807))) ? var_15 : (((arr_7 [i_6] [i_3] [i_2] [i_1]) ? (arr_18 [i_0] [i_1] [i_2] [i_0] [i_6] [i_2] [i_2]) : (arr_5 [i_0] [i_6] [i_6] [i_6])))));
                                arr_22 [i_0] [i_6] [i_6] [i_3] [i_1] = var_3;
                                arr_23 [i_6] [i_6] [i_1] [i_6] [i_6] [i_6] = ((((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 11894112205501569385 : 49))) ? var_17 : (((!(((-(arr_7 [i_0] [i_1] [i_3] [i_6])))))))));
                                arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((((arr_12 [i_2] [i_1]) >= -41))) == (arr_20 [i_0] [i_0])));
                            }
                        }
                    }
                }
                arr_25 [i_0] [i_1] [i_1] = (((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) ? (arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) : (arr_18 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1] [i_1]))) - (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) ? (arr_18 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0] [i_1]) : 213))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            {
                arr_32 [i_8] [i_7] [i_7] = (arr_21 [i_7] [i_8] [i_7] [i_8] [i_7]);
                var_24 = (~31);
                arr_33 [i_7] [i_7] = (min(52, ((var_2 ? (((arr_13 [i_7] [i_7] [i_7] [i_8] [i_8 + 2]) ? (arr_1 [i_7]) : 1)) : ((((arr_12 [i_7] [i_7]) ? (arr_0 [i_7]) : (arr_30 [i_7] [i_8]))))))));
            }
        }
    }
    var_25 = (min((max((var_15 - 19), ((var_2 ? 13373967754772301778 : var_17)))), var_17));
    #pragma endscop
}
