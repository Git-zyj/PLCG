/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(var_10, (min(((var_7 ? 142 : 142)), var_13)));
    var_15 = (((var_2 ^ 21) + 62));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (min(118, 65535));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = (34919 ? 30637 : (arr_7 [i_1]));
                    var_17 = (arr_5 [i_0] [i_1]);
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 3; i_4 < 20;i_4 += 1)
                    {
                        var_18 = (min(-var_4, ((min(147, (min(30615, (arr_9 [i_1] [i_1]))))))));
                        arr_14 [i_1] [i_1] [i_1] = (arr_12 [i_0] [i_1] [i_4 - 2] [i_4] [i_1]);
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [10] = arr_12 [i_0] [i_0] [i_0] [i_0] [6];
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_1] [10] &= 62;
                        var_19 -= -15273;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_20 = (!862136079);

                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            var_21 &= ((33554424 ? (arr_22 [8] [i_1] [i_1] [i_1] [i_1]) : ((var_2 ? 653818063 : var_4))));
                            var_22 = (max(var_22, ((((((28 ? 1471355104 : 30624))) ? -10352 : (var_12 & var_1))))));
                            var_23 = ((var_8 ? (arr_12 [i_0] [i_1] [i_3] [5] [1]) : 106));
                        }
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            var_24 = (max(var_24, ((((arr_0 [i_1]) >= (arr_0 [i_3]))))));
                            var_25 &= (((113 ? var_5 : (arr_12 [i_0] [i_0] [i_3] [i_0] [i_6]))));
                        }
                    }
                    var_26 = (65531 * (((!var_3) ? (arr_19 [i_0] [i_0] [i_0]) : 232)));
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_27 = -15256;
                                arr_35 [i_11] [i_11] [i_11] [i_1] [i_11] [i_11] = (max((((1 ? 947433161364175555 : (arr_19 [i_11] [7] [i_0])))), (((!(arr_30 [i_10 + 1] [i_1] [i_10 + 2] [i_10 + 4] [i_10 + 3]))))));
                                var_28 = (((((arr_32 [i_10 + 1] [i_10 + 4] [i_10 + 2] [i_10] [i_10 + 3]) > (arr_10 [i_10 + 2] [i_10 + 4] [4] [i_10 + 4]))) ? (((min(30630, 34911)))) : (arr_10 [i_10 + 3] [i_10 + 3] [16] [i_10 + 4])));
                            }
                        }
                    }
                    arr_36 [i_1] = var_2;
                }
            }
        }
    }

    for (int i_12 = 2; i_12 < 21;i_12 += 1)
    {
        arr_41 [i_12] = ((-((~(arr_40 [i_12] [i_12 - 1])))));
        var_29 = (((arr_40 [i_12] [i_12]) ? ((((24 ? 184 : (arr_40 [i_12] [i_12]))))) : ((((min(30596, var_0))) ? ((((arr_37 [i_12]) ? 2727932157 : (arr_39 [i_12])))) : (max(var_7, (arr_38 [i_12])))))));
        arr_42 [i_12] = (arr_39 [i_12 - 2]);
    }
    #pragma endscop
}
