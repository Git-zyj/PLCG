/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 = (((arr_4 [i_0]) + 0));
            var_21 -= ((var_15 ? (arr_3 [i_0] [i_1]) : (arr_1 [i_0])));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_22 &= (((arr_4 [i_2]) ? -7276535363800080083 : (arr_4 [i_2])));
            var_23 = var_18;
            var_24 = 18446744073709551615;
            var_25 = ((!(!0)));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_26 ^= var_2;
                            var_27 = -var_18;
                            var_28 = 65532;
                        }
                    }
                }
                arr_19 [i_0] [i_3] [i_4] &= ((arr_2 [i_0]) ? 172 : var_8);
                var_29 = (max(var_29, (arr_9 [i_0])));
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
            {
                arr_22 [i_7] [6] [i_7] [i_7] = ((var_0 ? (arr_4 [i_7]) : var_5));
                var_30 = 150;
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
            {
                arr_26 [i_0] [0] [i_8] [i_0] = (((arr_0 [i_8]) ? (arr_8 [i_8] [i_3]) : var_4));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_31 = (((arr_29 [i_0] [i_3] [i_8] [i_9] [i_10]) * (arr_4 [i_0])));
                            var_32 = (196 & 90);
                            var_33 = (min(var_33, 245));
                        }
                    }
                }
                var_34 -= 8653388089212140826;
            }
            for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 3; i_12 < 11;i_12 += 1)
                {
                    arr_39 [i_0] [i_3] [i_12] [i_11] [0] = (((((-794162687000910206 + 9223372036854775807) >> (((arr_1 [i_0]) + 5073544995960078885)))) << (25769803776 - 25769803755)));
                    arr_40 [i_0] [i_12] [i_0] [2] = (arr_1 [i_0]);
                    var_35 -= ((43 ? 23358 : 37568));
                    arr_41 [i_12] [10] [i_12] = ((140 ? (arr_20 [i_12 - 1] [i_12 - 2]) : (arr_3 [i_12 - 2] [i_12 + 1])));
                    var_36 = (max(var_36, ((((arr_16 [i_0] [i_0] [i_3] [i_11] [5] [i_12]) ? var_6 : (arr_13 [8]))))));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_45 [i_0] [i_13] [i_13] [1] = (((arr_25 [i_0] [i_3] [i_11] [1]) ? (arr_25 [i_0] [9] [6] [i_13]) : (-127 - 1)));
                    var_37 = (((arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 432 : var_14));
                    var_38 ^= var_8;
                    arr_46 [i_0] [i_3] [i_11] [i_13] = (((arr_8 [i_0] [i_3]) ? 0 : 596840434));
                }
                arr_47 [9] [i_0] [i_3] [1] |= (0 ? (arr_33 [i_0] [i_3] [i_3] [i_11]) : (105 || var_14));
                var_39 *= (--4437595314492621531);
                var_40 ^= ((0 ? (arr_35 [5] [i_3] [3] [i_0]) : (arr_11 [i_0] [i_3] [i_11])));
            }
            var_41 = ((2602680132 | (arr_35 [i_0] [i_0] [i_3] [i_3])));
        }
        var_42 = (((((arr_0 [i_0]) ? (arr_11 [i_0] [0] [i_0]) : (arr_10 [i_0] [i_0] [0]))) + ((var_10 ? -64 : (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_43 = (!var_8);
        var_44 = (max(var_44, ((((arr_33 [i_0] [1] [i_0] [i_0]) >> (var_12 - 49))))));
    }
    var_45 = ((((max(((var_8 ? 1 : var_4)), var_6))) - ((((max(var_7, var_12))) ? 2462861597 : var_8))));
    var_46 = (var_19 << (max(((var_16 ? var_1 : 1832105718)), var_1)));
    var_47 = var_10;
    #pragma endscop
}
