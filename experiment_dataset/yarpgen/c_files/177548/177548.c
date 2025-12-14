/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_14 -= ((!(~var_12)));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = (((4101 < var_0) ? var_5 : 14700877866220009637));

                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            var_16 = ((var_5 ? var_5 : (-834579013 && var_2)));
                            var_17 = ((1 ? (((var_6 ? var_3 : var_7))) : var_6));
                            var_18 = 24073;
                            var_19 = ((var_10 ? var_12 : 2293804031));
                            var_20 = (~2147221504);
                        }

                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            var_21 = 2554909947;
                            var_22 = (var_13 || var_2);
                            var_23 = var_8;
                            var_24 = ((((-229719591 ? 229719590 : 1514151657)) >> ((((9 ? var_5 : -1163763359)) - 122))));
                            var_25 = 6038466881614680202;
                        }
                        var_26 = (~var_0);
                    }
                }
            }
        }
        var_27 = -576126278;
    }
    for (int i_6 = 4; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_28 = 1043414289;
        var_29 = ((!(((-(min(-16, 380586567774668712)))))));
        var_30 = (432345564227567616 * 834579013);
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        var_31 = ((~((~(~var_1)))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 23;i_10 += 1)
                {
                    {
                        var_32 = -60;
                        var_33 = (!var_12);
                    }
                }
            }
        }
        var_34 -= (~var_9);
        var_35 = ((~((var_4 ? (var_8 & var_8) : (((var_1 ? var_5 : var_5)))))));
    }
    var_36 |= var_0;

    for (int i_11 = 4; i_11 < 15;i_11 += 1)
    {
        var_37 = ((((0 ? (((0 << (var_13 - 154960598)))) : 2018156530)) ^ (var_3 | var_3)));
        var_38 += (min(((((((var_10 ? var_2 : 12235))) ? 1 : (67108352 * 0)))), (((1 ? var_2 : 66977792)))));
        var_39 = ((!(var_12 / 281466386776064)));
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {

        /* vectorizable */
        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
        {
            var_40 = var_0;
            var_41 = 307092235;
            var_42 = (max(var_42, 86));
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
        {
            var_43 = (max(var_43, ((((((max(2588238624, 108)) | (((var_5 ? var_13 : var_10)))))) ? ((-1869 ? ((var_9 ? var_1 : var_7)) : var_7)) : var_11))));

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_44 = (max(var_13, 2902683819));
                var_45 = max((max(var_13, var_8)), ((var_11 ? var_6 : 0)));
                var_46 ^= var_11;
            }
            var_47 = ((!(((var_10 ? var_1 : var_3)))));
        }
        for (int i_16 = 2; i_16 < 23;i_16 += 1)
        {
            var_48 |= (21 / 7);
            var_49 = (max(var_49, var_8));
        }
        var_50 = (49873 ? 307092255 : 536870912);
        var_51 = (min(var_51, (((((((4255525273177245744 ? var_8 : var_8))) ? (var_12 != var_10) : (var_9 == 492581209243648)))))));
        var_52 |= ((((2800719880 << (var_13 - 154960587))) + ((((!(var_0 | var_13)))))));
    }
    var_53 = var_7;
    #pragma endscop
}
