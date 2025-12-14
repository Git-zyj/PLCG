/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 = (max(((min(var_11, var_0))), (min(3255161754, 1))));
        var_14 = (max(3255161750, (-10815 || 248)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] [1] = var_9;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_15 = 16204;
                arr_7 [i_0] [i_1] [i_1] [i_2] = 4194303;
                var_16 = -1;
            }
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    arr_14 [i_1] [i_1] [i_1] [i_1] = (var_8 * -111);
                    var_17 = (!var_5);
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_18 = ((3612350363 ? 1 : 682616933));
                    var_19 = (((~-83) ? (-32767 - 1) : ((var_5 ? var_9 : 152))));
                    arr_18 [i_0] [i_1] [i_3 + 1] [i_5] = (-24922 <= (-8825773554705658091 && 48040));
                }
                var_20 |= (81 * 0);
            }
            for (int i_6 = 3; i_6 < 6;i_6 += 1)
            {
                var_21 = (!var_9);
                var_22 = (min(var_22, var_9));
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_29 [i_1] [i_1] [4] [i_8] [i_9] = ((-((var_0 ? 1 : var_10))));
                            var_23 |= ((var_9 ? (!1806433138) : var_8));
                            var_24 = -1;
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
        {
            var_25 = (max(((max(var_3, 66))), 57839));
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {
                        var_26 += (((((((1 ? 1 : 78)) + var_11))) ? ((max(var_1, var_8))) : (((((126 ? 30 : 29122)) > 0)))));

                        for (int i_13 = 1; i_13 < 7;i_13 += 1)
                        {
                            arr_42 [i_0] [i_10] [i_11] [1] [i_10] [1] [1] = (max((((3584 ? 393216 : -393220))), (!1)));
                            arr_43 [i_13] [i_10] [i_11] [i_11] [i_10] [3] = (!(((var_12 ? var_5 : -11898012))));
                            var_27 = (((var_12 ^ var_9) ^ 2973537474));
                        }
                        var_28 = 125;
                    }
                }
            }
            var_29 = var_9;
            var_30 = ((var_2 >> (var_6 + 4858153000719478971)));
        }
        arr_44 [i_0] = (max((var_6 || 2573933681), (((!65535) << ((min(14, var_9)))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
    {
        var_31 = 177;
        arr_47 [i_14] = var_11;

        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
        {
            var_32 = -var_12;
            arr_51 [i_15] [i_15] [i_14] = var_10;
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    {
                        arr_57 [i_15] [i_15] [i_16] [i_16] [i_16] [i_16] |= (((((var_8 ? 65535 : 21))) ? (~-11898012) : -393220));
                        var_33 = 3375860227;
                        arr_58 [i_17] [i_15] [i_15] [i_15] = var_0;
                        arr_59 [i_14] [i_15] [i_16] [i_14] [i_17] = var_7;
                    }
                }
            }
            arr_60 [i_14] [i_14] [i_15] &= var_3;
        }
        for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
        {
            var_34 = var_5;
            var_35 = var_3;
        }
        var_36 = (((var_6 + 9223372036854775807) >> (var_3 - 59558)));
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 10;i_19 += 1) /* same iter space */
    {
        var_37 = (3805583205 * 1);
        arr_66 [i_19] = var_10;
        var_38 = var_0;
        var_39 = (min(var_39, ((((1721033615 % 4284898069562916505) ^ var_2)))));
        var_40 -= 206;
    }
    var_41 = (max((((((var_6 ? var_11 : var_12)) >= (2103351260 && var_3)))), 1265241998));
    var_42 = ((var_0 ? var_1 : (min(var_10, (var_2 / 1)))));
    #pragma endscop
}
