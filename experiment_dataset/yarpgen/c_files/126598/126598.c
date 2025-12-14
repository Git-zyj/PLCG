/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= -5797;
    var_12 = ((((max(var_4, var_4))) ? ((((var_7 >= (min(741172054, 1007057313)))))) : (((((var_10 ? var_6 : var_1))) ? var_4 : (~var_9)))));
    var_13 |= ((~((((max(var_4, var_7))) ? ((var_0 ? var_7 : var_0)) : (1202156475 && var_1)))));
    var_14 = (~var_0);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                var_15 = (((arr_1 [i_0]) ? -var_5 : (((((max(2148, var_1))) ? var_5 : var_2)))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        {
                            var_16 = (max(254, -5770));
                            var_17 = ((max(var_9, var_0)) & (-9223372036854775807 - 1));
                            var_18 |= 133;
                            var_19 = (min(var_19, ((min(((((max(var_9, var_9)) >> (((arr_1 [1]) - 5875821783738762285))))), ((min(2047, var_4))))))));
                        }
                    }
                }
                var_20 = (max(var_5, (arr_3 [i_2 + 2] [i_2 + 2])));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_21 = arr_17 [i_0] [i_5] [i_6] [i_5];
                        var_22 = ((+((var_7 ? (arr_14 [i_5] [i_5]) : 18014398508957696))));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_23 = (((var_2 ? ((var_1 ? var_3 : 668471022)) : 21968)));
                        var_24 = max((max(((min(var_1, var_2))), ((var_6 ? var_5 : var_9)))), ((1713595743 ? -32756 : -2025)));
                        var_25 = (min((((((max((arr_7 [i_6] [i_1]), var_5))) || (((var_3 ? var_4 : 121)))))), (max(var_9, ((var_9 ? var_8 : var_4))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_26 *= 255;
                        var_27 |= ((50093 == ((var_5 ? var_3 : var_8))));
                        var_28 = var_10;
                        var_29 = ((!(((255 ? var_10 : 5797)))));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_30 = (((min(var_4, var_10))));
                        var_31 = ((((max(var_7, var_10))) ? (((((var_4 ? 31 : var_9))) ? ((-6140271769663429033 ? var_0 : var_0)) : (((var_3 ? var_4 : var_3))))) : var_3));
                        var_32 = (min(var_32, ((((((var_5 ? (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_4))) || ((max(((max(var_1, var_2))), (max(193219258, var_5))))))))));
                    }
                    var_33 = (((var_6 ? ((min(var_3, var_1))) : var_2)));
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    var_34 = (!44955);
                    var_35 = ((-var_1 ? (((((var_6 ? var_3 : var_9))) ? var_7 : (max(var_10, var_0)))) : (arr_25 [i_1] [i_1] [i_11] [i_11] [i_1] [i_1])));

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_36 = (max(var_2, var_7));
                        var_37 = ((((max((max((arr_4 [i_1] [i_5]), var_6)), var_9))) ? (((max(var_2, (!var_7))))) : ((((max(2, var_0))) ? (((max((arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 250)))) : ((var_5 ? var_6 : var_10))))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_38 = var_10;
                        var_39 = (!var_1);
                        var_40 = (arr_21 [3] [i_1] [i_5] [0] [i_13] [i_5] [i_13]);
                        var_41 = var_2;
                        var_42 = var_4;
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 8;i_14 += 1)
                    {
                        var_43 = (min(var_43, var_0));
                        var_44 |= -18014398508957688;
                        var_45 = (((arr_26 [i_14 + 1] [i_14] [i_14] [i_14] [i_14]) ? (((arr_21 [8] [8] [i_1] [i_5] [5] [i_14] [i_14]) ? var_6 : 0)) : ((((arr_29 [i_5] [i_1] [i_5] [i_11] [i_14 - 1]) ? var_3 : var_3)))));
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        var_46 = ((var_8 ? (arr_26 [i_1] [i_1] [i_5] [i_11] [i_15]) : var_9));
                        var_47 = ((216 ? ((max(var_3, ((var_4 ? 0 : var_3))))) : ((var_8 ^ (max(181, 0))))));
                        var_48 -= (min(((min(((var_1 ? 4095 : var_1)), (!var_6)))), ((-6140271769663429016 ? 18446744073709551615 : 32512))));
                    }
                }
                var_49 |= (min((arr_28 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5] [9]), (~var_0)));
                var_50 = ((var_8 ? (min(((var_5 ? var_7 : var_3)), ((max(var_3, var_8))))) : ((~((var_10 ? var_10 : var_7))))));
            }
            var_51 = (((((min(var_8, var_2)) ? var_8 : var_0))));
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            var_52 |= ((~((((8475964141833285722 & var_8) > (((var_3 ? var_3 : -5804))))))));
            var_53 = ((~((var_7 ? ((var_3 ? var_8 : var_5)) : ((max(var_10, var_3)))))));
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            var_54 = (min(var_54, ((max(var_8, var_2)))));
            var_55 = (min(((((min(20045, var_7))) ? (((var_3 ? var_4 : var_5))) : ((var_8 ? var_5 : (arr_27 [i_0] [i_17] [i_17] [i_0]))))), ((max(var_9, var_3)))));
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 10;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    {

                        for (int i_21 = 0; i_21 < 10;i_21 += 1)
                        {
                            var_56 = var_5;
                            var_57 = ((var_8 ? 2617772835231578097 : 12288));
                            var_58 = (min(var_58, (((var_0 ? -var_1 : ((215 ? -20077 : -5757)))))));
                        }
                        for (int i_22 = 1; i_22 < 7;i_22 += 1)
                        {
                            var_59 = var_8;
                            var_60 &= (((arr_25 [i_20] [i_22] [i_22 + 3] [i_22] [i_22 - 1] [i_22 - 1]) ? (arr_17 [i_18] [i_18] [i_18] [i_18]) : (arr_45 [i_22 + 3] [i_22] [i_22 + 3])));
                            var_61 |= (((((var_3 ? var_2 : var_4))) ? (arr_30 [i_0] [i_18] [i_0] [i_22 - 1]) : var_3));
                            var_62 = (~var_7);
                        }
                        for (int i_23 = 0; i_23 < 10;i_23 += 1)
                        {
                            var_63 = (~478585972);
                            var_64 = (((((var_1 ? 0 : var_8))) ? var_9 : (arr_54 [i_0] [i_18] [9] [i_20] [i_23])));
                        }
                        for (int i_24 = 0; i_24 < 1;i_24 += 1)
                        {
                            var_65 *= var_0;
                            var_66 = (min(var_66, ((var_0 ? var_9 : (~var_8)))));
                        }
                        var_67 = var_1;
                    }
                }
            }
            var_68 = (((var_7 <= var_0) ? (((var_6 ? 0 : var_7))) : ((var_6 ? var_4 : var_3))));
            var_69 &= ((var_6 ? ((var_2 ^ (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : var_2));
        }
        var_70 = var_5;
        var_71 = var_5;
        var_72 *= ((max((min(var_10, var_3)), (arr_50 [i_0]))));
    }
    #pragma endscop
}
