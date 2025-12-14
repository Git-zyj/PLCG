/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 ^= (min((((arr_4 [i_1] [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_2 [i_0] [i_1]))), (min((min(var_10, (arr_1 [i_0]))), ((min(var_8, var_4)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = (min((((((min(var_7, 32))) ? ((min(170, 8))) : ((min((arr_9 [i_0] [i_1] [i_0]), 12)))))), (((7384049415395186938 ? var_0 : var_3)))));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_15 += (max((min((arr_0 [1]), (arr_0 [i_4]))), (arr_0 [i_0])));
                                var_16 = 229;
                                var_17 -= (arr_4 [i_0] [i_3]);
                                arr_15 [i_0] [i_0] [i_0] = ((!((min((arr_14 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0]), (arr_1 [i_0]))))));
                            }
                            for (int i_5 = 1; i_5 < 18;i_5 += 1)
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_3] [1] = ((+((((min((arr_17 [i_0] [i_1] [i_0] [i_3] [i_5] [i_0]), var_6))) ? ((min((arr_18 [i_0] [i_1] [i_2] [i_3] [i_0]), -32))) : (arr_16 [i_0])))));
                                arr_20 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] = min((((!((min((arr_8 [i_5]), var_8)))))), (min((arr_2 [i_5 - 1] [i_5 - 1]), (arr_17 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1]))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                var_18 = (min(var_18, ((((arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_6]) ? -19588 : (arr_0 [i_0]))))));
                                var_19 *= (((arr_23 [i_0] [i_1] [i_2]) ? (arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [i_6]) : 82));
                                arr_25 [i_3] |= ((-(arr_7 [i_1])));
                                arr_26 [i_0] [5] [i_1] [i_3] [i_6] = -186;
                            }
                            var_20 *= (min(((~(arr_11 [i_0] [i_3] [i_0] [i_0] [i_0]))), (min(((98 ? 82 : -90)), (-212804114337457181 == 12775)))));
                        }
                    }
                }
                var_21 = (max(var_21, ((((((min(var_7, 3541)) ? (((min((arr_11 [i_0] [i_1] [i_0] [i_0] [i_1]), -83)))) : ((var_8 ? 86 : 2974979200263139587)))))))));
                arr_27 [i_0] [i_0] = ((-((((min(11548, 98))) ? (min((arr_4 [i_0] [i_1]), 17578646367910932592)) : (((-8 ? var_2 : (arr_14 [i_0] [1] [i_0] [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                var_22 |= ((((!(arr_31 [1] [i_7] [i_8]))) ? (((((arr_1 [i_7]) || (arr_1 [i_7]))))) : (min((arr_1 [i_7]), (arr_1 [i_7])))));
                var_23 = (min((arr_21 [i_7] [i_7] [i_7] [i_8] [i_7]), (arr_21 [i_8] [i_8] [i_7] [i_7] [i_7])));
            }
        }
    }
    #pragma endscop
}
