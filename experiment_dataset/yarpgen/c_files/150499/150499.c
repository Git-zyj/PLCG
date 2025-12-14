/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_11 = var_3;
                        var_12 ^= ((~(arr_1 [i_3] [i_0 - 2])));

                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            var_13 += ((13 ? 5673756801461298676 : -3531092926145444358));
                            var_14 = var_8;
                        }
                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            var_15 = ((92 ? (arr_15 [i_0] [i_0]) : 107));
                            var_16 = (((((var_3 ? var_7 : 108))) & (arr_0 [i_0] [i_5 + 1])));
                            var_17 = (((1 / 55492) ? (arr_0 [i_0] [i_5 + 2]) : var_2));
                            var_18 = ((var_4 ? (arr_12 [i_0 - 2] [i_0] [i_1] [i_0 - 2] [i_0 - 2] [i_3] [i_3]) : (arr_12 [i_5 - 1] [i_0] [i_3] [i_2] [i_1] [i_0] [i_0 - 1])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_19 = 10043;
                        var_20 = ((var_0 ? 55492 : (arr_9 [i_0] [i_0 - 1] [i_0 - 2] [i_6])));
                    }
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        var_21 ^= var_2;
                        var_22 = ((10044 ? var_1 : 0));
                        var_23 = (((((108 ? 9133912282717549694 : 34727))) ? (arr_6 [i_0] [i_0]) : (arr_6 [i_0] [i_0])));
                        var_24 = ((-103 ? -703468941360781646 : -9133912282717549695));
                        var_25 = ((10044 ? (9133912282717549694 % -108) : (((-98 ? 255 : 1)))));
                    }
                    var_26 = 72;
                }
            }
        }
        var_27 = ((13771090951274915349 >> (98 - 89)));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_28 = ((!var_1) ? ((-1600571977 ? 22962 : (arr_5 [i_0] [i_8 + 1] [i_9]))) : -1072980211);
                    var_29 = ((761264498 <= ((var_2 ? (arr_5 [i_0] [i_8] [i_0]) : 12751))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_30 = (224 - -19129);
                                var_31 = ((var_1 ? 56 : 64184));
                                var_32 = var_4;
                                var_33 = var_5;
                            }
                        }
                    }
                }
            }
        }
        var_34 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
        var_35 = -104;
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
    {
        var_36 = (max(var_36, (arr_33 [i_12])));
        var_37 |= (((max((((arr_34 [i_12] [i_12]) ? var_5 : var_3)), (arr_34 [i_12] [i_12]))) + (arr_34 [i_12] [i_12])));
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
        {
            var_38 = (max(var_38, 22963));
            var_39 = ((1 ? 74 : 88));
        }
        for (int i_15 = 0; i_15 < 23;i_15 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                var_40 = (var_9 | 22962);
                var_41 = ((-22962 / (arr_33 [i_13])));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 20;i_18 += 1)
                    {
                        {
                            var_42 = (max(var_42, -27533));
                            var_43 += -1490618402955389758;
                            var_44 = var_2;
                        }
                    }
                }
                var_45 = ((2496249927270862870 ? var_2 : (((4720135345566417363 != (arr_38 [18]))))));
            }
            for (int i_19 = 4; i_19 < 22;i_19 += 1) /* same iter space */
            {
                var_46 &= ((!((max((1023 && var_1), -22963)))));
                var_47 = (max(-66, (((arr_33 [i_19 + 1]) ? 1723137639 : 40368817187683278))));
                var_48 = -101;
            }
            /* vectorizable */
            for (int i_20 = 4; i_20 < 22;i_20 += 1) /* same iter space */
            {
                var_49 = (1841246894390909644 / -104);
                var_50 |= ((1 ? 36523 : 98));
                var_51 = 108;
            }
            var_52 = (!((((((var_7 ? var_2 : var_6))) ? (((arr_42 [10] [15] [10]) ? 1696816132 : 3901157380)) : 1696816132))));
            var_53 = (arr_35 [i_15]);
            var_54 = (max(var_54, ((((((7921 ? (((arr_44 [i_15] [i_13] [i_13]) & (arr_45 [i_13] [i_13] [i_13] [i_15]))) : (~var_1)))) ? (((26740 ? var_9 : (arr_37 [20])))) : ((((var_8 % (arr_50 [20]))) + (((-32368 ? 6114 : 81))))))))));
        }
        var_55 |= (max((max(3306, var_7)), (arr_42 [i_13] [i_13] [i_13])));
        var_56 |= 56634;
        var_57 = (((((71 ? (((arr_34 [i_13] [i_13]) ? 88 : 13281886547527524660)) : var_9))) ? 0 : (max(var_4, ((max(1, 1)))))));
    }
    for (int i_21 = 0; i_21 < 23;i_21 += 1) /* same iter space */
    {
        var_58 = var_1;
        var_59 = ((((((arr_45 [i_21] [i_21] [i_21] [i_21]) ? var_5 : (min(var_0, (arr_42 [i_21] [i_21] [i_21])))))) ? ((max((min(var_1, (arr_43 [i_21]))), ((var_6 ? 32750 : (arr_43 [i_21])))))) : (max(((var_7 ? (arr_55 [i_21] [i_21]) : var_6)), (((var_9 ? var_9 : 91)))))));
        var_60 = -92;
        var_61 |= var_6;
    }
    var_62 = ((((min(87, (-5088779407144160780 / var_9)))) ? 978922801 : ((max(-111, 520093696)))));
    #pragma endscop
}
