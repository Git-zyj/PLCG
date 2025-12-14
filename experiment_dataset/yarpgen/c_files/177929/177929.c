/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= 75;
    var_19 &= ((-208 << (!var_4)));
    var_20 |= var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 |= ((62 ? 0 : var_3));
        var_22 = -75;
        var_23 *= (~80);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_24 *= (min(((223 ? 78 : 13)), (((!-95) ? -42022 : ((0 ? var_9 : var_12))))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_25 -= ((((((1 ? var_14 : var_4))) ? 78 : ((155 ? 42045 : 13724)))));
                            var_26 ^= (var_6 / 355486060);
                            var_27 += -1;
                            var_28 *= 14595;
                            var_29 *= ((min(-var_6, var_7)));
                        }
                    }
                }
            }
            arr_16 [i_2] = 80;
            arr_17 [i_2] = ((-((63 ? 7 : var_14))));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
        {
            arr_21 [i_1] [i_6] [12] = (min((min(-16, 18)), (((355486063 != (((min(7, var_15)))))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_30 = var_6;
                        arr_30 [i_7] |= (((1 ? var_12 : 44)));
                        arr_31 [i_8] [i_6] = 0;
                    }
                }
            }
            var_31 = ((min(-16, (min(67108863, var_15)))) * var_11);
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {
            var_32 = ((0 ? (arr_28 [i_9]) : ((((min(1, var_6)) > -1)))));
            var_33 += ((-(73 / 50970)));
            var_34 ^= (min(189, (((-67108863 ? -67108884 : -67108858)))));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    arr_38 [i_10] [i_10] [i_10] [i_10] = (((~1) != ((((-11 + 2147483647) << (((-1 + 19) - 18)))))));
                    var_35 = (min((((((12787483387448944978 ? var_14 : 12787483387448944981)) != (((0 ? 0 : 318888299)))))), ((((max(var_15, -67108885))) ? var_7 : (min((arr_33 [i_1]), 64))))));
                    arr_39 [i_1] [i_10] [i_10] = (max(((max(-16, -515539191))), -var_8));
                    var_36 = ((-(arr_27 [i_10] [i_1] [i_11] [i_10])));
                }
            }
        }
        arr_40 [i_1] = (8890108351673212675 || var_15);
    }
    #pragma endscop
}
