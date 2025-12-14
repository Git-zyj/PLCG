/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = ((var_3 ? ((var_8 ? (min(var_2, 6344104398944780852)) : var_8)) : -0));
        arr_3 [i_0] = (max((min(((min(521414529, var_11))), (max(var_7, var_1)))), ((max((max(var_8, 521414553)), ((5 ? var_9 : var_7)))))));
        var_12 += var_9;
        arr_4 [i_0] = max(var_7, ((((min(var_5, 469388631))) ? var_4 : (min(var_9, 521414553)))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_13 += var_2;
        var_14 = (var_3 ? (max(((max(var_11, var_8))), ((var_1 ? -9223372036854775789 : var_8)))) : ((~(~-6506303202414245823))));
    }

    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        var_15 -= var_2;
        arr_9 [i_2] = var_7;
        arr_10 [i_2] = (min(1, var_10));
        var_16 &= (min(((max(var_10, -5356407297414749103))), (((!(~var_1))))));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            var_17 += (min(0, ((65523 ? ((var_7 ? 2407 : 0)) : var_4))));
            arr_18 [i_3] = (((((~(min(521414549, 521414553))))) ? ((-(!var_2))) : (max(var_3, (!var_4)))));
            var_18 = 1;

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {

                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_19 ^= (!var_3);
                        var_20 |= ((var_8 ? ((4046583253 ? var_9 : var_6)) : ((0 ? var_11 : var_2))));
                        var_21 = (~-6235140265446538777);
                        arr_25 [i_7] [i_6] [i_6] [i_3] [i_3] = 22899;
                        var_22 = var_4;
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_23 = var_0;
                        var_24 = var_11;
                        var_25 = (~(max((~-469388610), var_8)));
                        arr_30 [i_8] [i_6] = var_1;
                    }
                    var_26 += (~22899);
                    var_27 = var_11;
                }
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {

                    /* vectorizable */
                    for (int i_10 = 4; i_10 < 9;i_10 += 1)
                    {
                        var_28 = -212801692;
                        var_29 -= var_7;
                    }
                    var_30 = (min(var_30, (((!((max(var_8, ((521414554 ? var_4 : var_4))))))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_31 *= ((var_8 ? var_4 : -729217997684691182));

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        var_32 |= (~37951);
                        arr_43 [i_12] [i_11] [i_3] [i_4] [i_3] = var_5;
                    }
                }
                arr_44 [i_3] [i_5] [i_5] [i_3] = (!var_6);
                var_33 = (max(var_33, ((max((min(var_10, (~-469388631))), (((!(!var_7)))))))));
            }
        }
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {

            for (int i_14 = 3; i_14 < 8;i_14 += 1)
            {
                var_34 = 1;
                arr_50 [i_14] = (((!0) ? (max(var_2, (min(var_2, var_7)))) : (min((min(var_0, var_3)), (max(16109, var_0))))));
                var_35 ^= (min(((((max(var_11, var_1))) ? (~var_6) : var_11)), -var_2));
                var_36 ^= 521414570;
                var_37 = var_5;
            }

            for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
            {
                arr_53 [i_3] [i_13] [i_3] = min((((7 ? (~56694) : 42619))), (max((((var_7 ? var_7 : var_6))), ((var_0 ? var_11 : var_1)))));
                var_38 = (max(var_38, var_1));
                arr_54 [i_3] [i_13] [i_15] &= var_4;
            }
            for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
            {
                arr_59 [i_13] [i_13] &= (min(var_6, (min((min(var_0, -5356407297414749103)), 43394))));

                for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
                {
                    var_39 += ((!((max((((var_3 ? var_10 : 16115))), ((var_8 ? var_3 : var_1)))))));

                    /* vectorizable */
                    for (int i_18 = 3; i_18 < 9;i_18 += 1)
                    {
                        arr_64 [i_3] = var_3;
                        var_40 ^= 22899;
                        var_41 = var_6;
                    }
                    for (int i_19 = 0; i_19 < 11;i_19 += 1)
                    {
                        var_42 = (min(var_42, ((max(((-var_5 ? (min(3678114586, 521414550)) : (((var_9 ? var_3 : 65535))))), (((!(((-5778156650722067219 ? 12347 : var_10)))))))))));
                        var_43 = (min(var_43, (((((max(1096, (~var_8)))) ? var_2 : (min((max(var_6, 4294967272)), (~1))))))));
                        var_44 += var_4;
                        var_45 = max((max((-2147483647 - 1), var_7)), ((max((~2), (~var_8)))));
                    }
                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        var_46 ^= ((!(((((max(var_2, var_10))) ? var_4 : 49422)))));
                        arr_71 [i_20] [i_3] [i_17] [i_20] [i_13] [i_3] [i_3] = ((~((~(min(var_8, var_10))))));
                        arr_72 [i_20] [i_13] [i_13] [i_17] [i_17] = ((+(max((!var_0), (max(var_2, 3319350147))))));
                        arr_73 [i_20] [i_16] [i_20] = ((((max(((var_2 ? var_5 : var_2)), (!var_1)))) ? (max(1, ((var_7 ? var_7 : var_8)))) : (max(((max(var_9, var_11))), (min(var_2, var_7))))));
                    }
                    var_47 = min(49854, 50075);
                    var_48 = var_5;
                }
                for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
                {

                    for (int i_22 = 1; i_22 < 10;i_22 += 1) /* same iter space */
                    {
                        arr_79 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (max(var_5, (((((var_9 ? var_6 : var_10))) ? ((1039 ? 1 : var_4)) : (!var_10)))));
                        var_49 = ((var_6 ? ((-3082102957047967399 ? (((max(var_8, 49426)))) : (~var_0))) : ((((max(var_9, 43394)))))));
                    }
                    for (int i_23 = 1; i_23 < 10;i_23 += 1) /* same iter space */
                    {
                        var_50 = ((-((var_11 ? ((min(var_4, var_8))) : 10170))));
                        arr_83 [i_23] [i_23] = var_1;
                        arr_84 [i_23] [i_23] [i_23] [i_23] [i_23] [i_3] = var_5;
                    }
                    for (int i_24 = 1; i_24 < 10;i_24 += 1) /* same iter space */
                    {
                        var_51 += (min(var_0, (max((!22), (min(4111388565, 53193))))));
                        var_52 ^= 49422;
                        arr_87 [i_3] [i_3] [i_3] [i_16] [i_16] [i_3] [i_24] = var_0;
                    }
                    /* vectorizable */
                    for (int i_25 = 1; i_25 < 10;i_25 += 1) /* same iter space */
                    {
                        var_53 = (((((16109 ? -1 : 1870183405))) ? -7773808481564814102 : 19792));
                        arr_91 [i_3] [i_3] [i_16] [i_21] = var_1;
                        var_54 = (max(var_54, ((var_4 ? var_4 : (!var_7)))));
                        arr_92 [i_3] [i_3] [i_3] [i_3] [i_3] &= var_2;
                    }
                    var_55 = (((max((max(var_3, 29617)), var_3))) ? (min(((var_11 ? var_1 : var_11)), (min(var_1, 16115)))) : (max((max(8188654222386130162, 21)), (((var_5 ? -2147483629 : 53213))))));
                    var_56 -= (max(((~(max(var_10, -6279871147754207893)))), 277936746));
                }
                arr_93 [i_3] [i_13] [i_3] = max((max((max(-496958656, var_1)), (max(var_1, 31799)))), (max(8188654222386130151, 21795)));
            }

            /* vectorizable */
            for (int i_26 = 2; i_26 < 9;i_26 += 1)
            {
                arr_96 [i_26] [i_13] [i_26] = var_4;
                arr_97 [i_26] [i_26] [i_26] [i_3] = (((((12347 ? var_6 : var_5))) ? (~16115) : (~var_0)));
                var_57 += ((!(((1 ? var_6 : var_3)))));
                /* LoopNest 2 */
                for (int i_27 = 1; i_27 < 10;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 11;i_28 += 1)
                    {
                        {
                            arr_102 [i_28] [i_27] [i_26] [i_26] [i_13] [i_3] = 54886;
                            arr_103 [i_3] [i_26] [i_13] [i_13] [i_26] [i_3] = ((var_2 ? (((var_5 ? var_6 : var_4))) : var_7));
                        }
                    }
                }
                var_58 = var_9;
            }
            /* vectorizable */
            for (int i_29 = 0; i_29 < 11;i_29 += 1)
            {
                var_59 = 48219;
                arr_106 [i_3] [i_3] [i_29] [i_13] = ((var_1 ? var_5 : var_3));
                arr_107 [i_29] [i_13] [i_13] [i_3] = ((-var_4 ? var_0 : (~701869980)));
            }
            for (int i_30 = 4; i_30 < 9;i_30 += 1)
            {
                /* LoopNest 2 */
                for (int i_31 = 1; i_31 < 9;i_31 += 1)
                {
                    for (int i_32 = 0; i_32 < 11;i_32 += 1)
                    {
                        {
                            var_60 += (min(((((min(836516804, 3593097316))) ? -8655878398104928907 : ((min(var_10, var_3))))), var_2));
                            var_61 ^= ((var_4 ? ((-(~var_11))) : (max((min(var_10, var_8)), ((var_8 ? var_2 : var_4))))));
                            var_62 = (max(var_0, (min(var_7, ((var_3 ? 1 : -7992669000257281900))))));
                            arr_117 [i_32] [i_32] [i_31] [i_31] [i_30] [i_13] [i_3] = var_8;
                            arr_118 [i_32] [i_30 - 4] [i_30 - 4] [i_30 - 4] [i_32] |= -3045530618461446767;
                        }
                    }
                }
                arr_119 [i_3] [i_3] [i_13] [i_30 - 4] |= 20679;
            }
        }
        for (int i_33 = 0; i_33 < 11;i_33 += 1)
        {
            /* LoopNest 2 */
            for (int i_34 = 0; i_34 < 11;i_34 += 1)
            {
                for (int i_35 = 2; i_35 < 10;i_35 += 1)
                {
                    {
                        var_63 += var_5;
                        var_64 = var_10;
                    }
                }
            }
            arr_130 [i_33] = (max((~20682), 3593097331));
        }
        var_65 = (max(var_65, ((min(var_0, ((min(var_8, ((var_0 ? var_8 : var_2))))))))));
        var_66 = ((-((((min(var_7, 49427))) ? ((var_2 ? var_1 : 2848302574)) : (min(20672, 72057594037927935))))));
        var_67 = (((~(max(var_0, var_8)))));
    }
    var_68 = (min(var_6, ((var_1 ? (min(16109, var_3)) : (~var_6)))));
    var_69 = -8188654222386130163;
    var_70 = 7992669000257281909;
    #pragma endscop
}
