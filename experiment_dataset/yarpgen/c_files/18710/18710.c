/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((var_4 | (49388 | 47))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_13 -= (((var_11 ? 218 : 51)));
        arr_3 [i_0] = ((!(arr_0 [i_0] [i_0 - 2])));
        var_14 = (max(var_14, ((((arr_0 [0] [i_0 + 2]) ? (arr_0 [6] [i_0 + 2]) : (arr_0 [2] [i_0 + 2]))))));
        var_15 = ((28 ? 204 : (arr_2 [i_0])));
        var_16 = ((-(arr_1 [i_0 - 1])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_3] [i_1] |= (max((32 - 64), (max((max((arr_10 [i_4 + 3] [i_3] [i_2] [i_1]), 227)), var_11))));
                        var_17 *= (max(((min(218, 38))), (~220)));
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = var_2;
                        var_18 ^= (((((!(((54 ? var_1 : 204)))))) == ((((arr_19 [i_5 + 2] [i_3] [i_5] [i_5 - 1] [i_5 + 1]) >= (arr_20 [i_5 - 1] [i_5 + 1] [i_5 + 2] [i_5 - 1]))))));
                        var_19 = (min((arr_17 [i_1] [i_1] [i_2] [i_1] [i_5 - 1] [i_5 - 1]), ((((arr_17 [i_1] [i_3] [i_3] [i_1] [i_5 - 1] [i_5 + 1]) ? 41 : 198)))));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_1] [i_2] [i_1] [i_3] [i_5 + 1] [i_6] = (max((~23), (((40 & 236) & ((min(204, 214)))))));
                            var_20 *= (((224 / 218) * ((max(228, 215)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_21 = var_11;
                            var_22 = (arr_15 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_1]);
                            var_23 = (!217);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_24 = 35;
                            var_25 = ((~(max((arr_23 [i_8] [i_8] [i_8]), ((max(204, 34)))))));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_26 += ((arr_26 [i_9]) / (max((arr_30 [i_1] [i_1] [i_1] [i_1]), ((var_5 ? var_2 : 48)))));
                            var_27 += (((((arr_29 [i_9] [i_5] [i_1] [i_2] [i_1]) ? 27 : (arr_32 [i_2] [i_2] [i_2] [i_2])))));
                            var_28 = (28 * 239);
                        }
                    }
                    var_29 = (~54);
                    arr_33 [i_1] [i_1] [i_3] = (((((max(51, 217))) > var_3)));
                    var_30 = (~var_7);
                }
            }
        }
    }
    var_31 = var_4;
    var_32 = (((((var_8 ? var_0 : var_11))) < var_5));
    #pragma endscop
}
