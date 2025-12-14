/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_16 = (~11);
            var_17 = (max(var_17, var_12));
            var_18 = var_3;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = 20;
            arr_10 [i_2] [i_2] [i_2] = (250 * 1448042016);
            arr_11 [1] [i_2] [0] = ((243 ? 1592415506 : 17));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_14 [i_3] [i_3] = ((((max(1592415506, var_15))) && (!151)));
            var_19 = (((((!(((var_1 ? var_0 : var_1)))))) == (((var_1 == ((max(var_15, var_13))))))));
            var_20 ^= ((((var_12 + 2147483647) << (var_6 - 16252820528604916836))));
            var_21 = ((245 <= ((((var_1 <= var_6) && var_12)))));
            var_22 = (var_15 - var_0);
        }
        var_23 += -var_11;
        var_24 = (var_8 != var_1);
        var_25 = ((1592415506 ? (min(var_5, (var_5 / var_6))) : ((max(var_8, 614828800133051089)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_26 = var_11;
        var_27 = (!var_0);
        var_28 = (var_6 ? var_0 : var_7);
        var_29 = var_10;
        var_30 = (!var_13);
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_31 *= ((-((((var_14 != var_11) <= var_15)))));
        arr_21 [i_5] = ((!var_6) << ((((~(!var_3))) + 24)));
        var_32 &= (max(var_7, (!-13932656)));
    }
    var_33 ^= var_13;
    var_34 = (min(var_7, -var_7));

    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_24 [i_6] = (var_11 ^ var_5);
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    {
                        var_35 = var_8;
                        var_36 = (var_8 + var_5);
                        var_37 += (((var_4 ? var_5 : var_0)));
                    }
                }
            }
        }
        var_38 = -1448042014;
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    var_39 ^= ((((var_11 ? var_2 : var_15))));
                    var_40 = (max(var_40, (((var_8 || (var_6 > var_6))))));
                }
            }
        }
        var_41 &= ((-((var_11 ? var_14 : var_2))));
        var_42 = ((!(~var_4)));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                {
                    var_43 = (min(var_5, (var_0 / var_7)));
                    var_44 = var_7;
                    var_45 = (max((var_4 * var_6), -1609336869));
                    arr_46 [i_10] [i_13] [i_13] [i_13] = ((((var_10 || (((var_15 ? var_11 : var_8))))) || ((((var_1 ? var_4 : var_4))))));
                    arr_47 [i_10] [i_10] [i_10] = (var_3 & (var_4 != var_4));
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
    {
        var_46 = (var_3 ? (((~var_12) ? var_9 : (!var_1))) : var_4);
        arr_52 [i_15] [i_15] = ((-(var_8 * var_15)));
        var_47 ^= (18446744073709551601 == 6);
        var_48 ^= -var_11;
    }
    #pragma endscop
}
