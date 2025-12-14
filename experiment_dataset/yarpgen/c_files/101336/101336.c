/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                        {
                            var_14 = (var_1 - 4294967295);
                            var_15 = (max(var_15, var_4));
                            var_16 = var_12;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, var_9));
                            var_18 = (min(var_18, var_13));
                            arr_15 [i_5] [i_0 - 1] [i_2] [i_3] [i_5] = ((32643 << (7804 < var_1)));
                        }
                        var_19 = (((var_9 / var_5) ? (0 >= 4) : var_1));
                        var_20 -= (min((((43259 | var_12) % (9 * var_9))), (((((246 ? -7 : var_6)) | 57)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_21 |= ((((var_3 + 9223372036854775807) >> (var_7 - 25326))) << (((~532676608) - 3762290687)));
                        var_22 = (!var_5);
                        var_23 = (max(var_23, ((((36028247263150080 > 12458) << var_8)))));
                        var_24 = (0 ? ((var_1 ? var_9 : var_10)) : (((var_6 ? 779575593 : -2835107933040986015))));
                    }
                    var_25 = ((218 - (((-66 * 1) ? (((var_11 << (var_3 + 1292737316450836074)))) : ((var_9 ? -120 : 140737488355327))))));
                    var_26 = ((~(min((max(779575593, -36028247263150091)), -375767925))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                var_27 = (max((max(((var_7 ? 1 : 83)), -28615)), (var_10 != 60)));
                var_28 = (min(var_28, (((4294967279 ? (((4 ? var_9 : var_2))) : ((max((-327651363695557755 ^ var_6), (var_7 != var_9)))))))));
                var_29 = (max((((-5705860032636420392 ^ 1690811154) ? var_6 : var_5)), ((max(var_6, var_10)))));
            }
        }
    }

    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_30 = (max(var_30, (((-5705860032636420375 - (max(962469797, var_9)))))));
        arr_25 [19] = (((((var_4 ? 4294967276 : var_11))) >= ((var_9 >> (var_0 - 4990)))));
        arr_26 [i_9] [i_9] = var_2;

        /* vectorizable */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_31 *= -var_12;
            arr_29 [i_9] = -32391;
        }
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    {
                        arr_37 [i_9] [i_9] [i_11] [i_9] = ((((max((~var_8), ((1512204671 ? var_3 : var_8))))) ? (((96 ? 88 : var_4))) : ((var_7 ? var_4 : 196))));
                        arr_38 [i_9] [i_13] [i_13] [i_13] |= (((((19 ? (1105808129113490953 == var_9) : (4294967278 < 1690811131)))) ? (var_8 > var_11) : (max(((var_7 ? var_3 : var_3)), (var_10 <= 1357286987)))));
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
    {
        var_32 = (((((((var_5 / 169170306) >= -1)))) >= (((711684705 || 2604156155) - ((1 ? 169170303 : 0))))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 19;i_17 += 1)
                {
                    {
                        var_33 = ((((min(274861129728, 192))) ? var_8 : (((!(1 && 65261))))));
                        var_34 ^= ((((((min(-274861129723, -6459)) ^ var_5))) ? ((((711684705 - var_4) ? var_13 : (0 / var_5)))) : ((var_9 ? var_6 : var_1))));
                    }
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
    {
        var_35 += ((min(var_5, -2)));

        for (int i_19 = 0; i_19 < 20;i_19 += 1)
        {
            arr_56 [i_19] = ((+((var_9 ? (39 + var_5) : var_8))));
            var_36 *= ((((((364800523 ? 26158 : var_13)))) ? (var_13 & var_8) : (~var_3)));
            var_37 = (max(var_37, (((var_2 - (var_1 % 4125796981))))));
            var_38 = (((((908816067 ? (var_6 + var_10) : (var_1 % var_5)))) ? var_2 : var_9));
        }
    }
    #pragma endscop
}
