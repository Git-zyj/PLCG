/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((-9223372036854775807 - 1) ? var_0 : (max(var_1, (219 - 71))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_2] [i_1] = min(222, ((((max(130, 189))) ? (((21 ? 239 : 26))) : 5111263042948605493)));
                    arr_11 [i_2] [i_1] [i_1] [i_1] = (min(((min(7, (var_9 - var_10)))), (((((90 ? var_5 : var_4))) ? (max(var_8, var_14)) : var_13))));
                    arr_12 [i_2] = 235;

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_18 = min(13, 22);
                        var_19 = (((20 && -var_14) % (((var_3 ? 68719472640 : var_1)))));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_19 [20] [i_1] [i_2] [i_4 - 1] &= ((((var_6 ? -var_11 : (82 && var_14))) % (min(var_8, -var_11))));
                        arr_20 [i_2] [i_2] [i_2] [i_4 + 1] = ((max(-4950603667706303451, 229)));
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        var_20 = ((-((237 ? (min(-3950048859344866394, 7748596072300818730)) : -107))));

                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            var_21 *= (min(-3323765889805341156, var_13));
                            var_22 = (min(var_22, (((((min(var_6, var_11))) + var_9)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            var_23 ^= ((~(52 - 4073025359345629268)));
                            var_24 = (min(var_24, -23));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            var_25 = (((var_16 && var_9) ? var_3 : var_6));
                            var_26 = var_9;
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            arr_36 [i_0] [i_2] [i_2] [i_2] [10] [i_2] = ((7686687860545372841 ? 255 : 5194008859697965106));
                            arr_37 [i_2] [i_2] [i_2] [6] [16] [14] [10] &= (242 + 119);
                            arr_38 [i_9] [i_1] [i_2] [i_2] [i_9] [i_0] [i_2] = (var_11 % var_12);
                        }
                        var_27 *= (max(((!(~194))), (!var_4)));
                    }
                    arr_39 [i_2] = (-1489461051491360867 - 146);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 8;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            {
                var_28 = max(((min(((var_13 ? 176 : var_6)), 224))), (((((var_7 ? var_8 : 0))) ? -199 : var_4)));

                /* vectorizable */
                for (int i_12 = 2; i_12 < 7;i_12 += 1)
                {
                    var_29 = ((64 - ((222 ? var_2 : var_9))));
                    var_30 = (min(var_30, (!var_6)));
                }
                /* vectorizable */
                for (int i_13 = 1; i_13 < 7;i_13 += 1)
                {

                    for (int i_14 = 1; i_14 < 6;i_14 += 1)
                    {

                        for (int i_15 = 1; i_15 < 9;i_15 += 1)
                        {
                            arr_56 [i_10 + 2] [i_10 + 2] [i_10] [i_10] [i_10] [i_14] = ((9 ? var_3 : var_2));
                            var_31 = (~92);
                            var_32 = -var_2;
                            var_33 = (min(var_33, var_11));
                        }
                        for (int i_16 = 2; i_16 < 9;i_16 += 1) /* same iter space */
                        {
                            var_34 = (!var_6);
                            var_35 = (var_8 ? var_15 : ((var_9 ? var_3 : var_0)));
                        }
                        for (int i_17 = 2; i_17 < 9;i_17 += 1) /* same iter space */
                        {
                            var_36 |= ((var_9 < (var_0 < var_14)));
                            arr_62 [i_10 - 2] [3] [1] [i_14] [1] = var_15;
                            var_37 = (!var_11);
                        }
                        for (int i_18 = 1; i_18 < 8;i_18 += 1)
                        {
                            arr_67 [i_10] [i_11] [i_11] [i_14] [i_14] = ((var_3 ? var_10 : var_0));
                            var_38 |= ((240 >> ((-4073025359345629270 ? 0 : var_6))));
                        }
                        var_39 = 42;
                    }

                    for (int i_19 = 2; i_19 < 7;i_19 += 1)
                    {
                        arr_71 [i_10] [i_10] [i_13] [2] = ((~(var_12 < var_16)));
                        var_40 &= var_11;
                        arr_72 [i_13 + 3] [i_11] [6] [i_19] [i_11] = (((((233 ? var_6 : var_10))) ? var_6 : var_15));
                        var_41 = (!114);
                    }
                    for (int i_20 = 4; i_20 < 9;i_20 += 1)
                    {

                        for (int i_21 = 0; i_21 < 10;i_21 += 1)
                        {
                            arr_77 [i_10] [i_10] [i_13] [i_20] [i_13] = ((87 ? ((233 ? var_2 : var_16)) : var_6));
                            arr_78 [i_10 + 1] [i_11] [i_13] [i_21] [i_21] [i_21] = (((var_14 - var_16) ? (!var_7) : (~var_12)));
                            var_42 = (min(var_42, (((16 ? var_3 : var_10)))));
                            var_43 = (min(var_43, ((((((var_5 ? var_12 : var_1))) ? var_13 : ((var_5 ? 253 : var_8)))))));
                            arr_79 [i_10] [i_20 - 3] [i_13 + 3] [i_11] [i_10] = (((!244) ? (((61 ? var_10 : var_6))) : (4073025359345629268 + var_16)));
                        }
                        for (int i_22 = 0; i_22 < 10;i_22 += 1)
                        {
                            var_44 *= -var_13;
                            arr_82 [i_10] = (var_4 % 171);
                            arr_83 [8] = 255;
                            var_45 *= var_15;
                        }
                        arr_84 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] = (!var_0);
                    }
                }
                /* vectorizable */
                for (int i_23 = 0; i_23 < 10;i_23 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_24 = 1; i_24 < 8;i_24 += 1)
                    {
                        for (int i_25 = 0; i_25 < 10;i_25 += 1)
                        {
                            {
                                arr_93 [i_10 + 2] [i_11] [i_23] [i_23] [i_25] = ((var_10 ? var_13 : var_16));
                                var_46 = 2668150864460684544;
                                arr_94 [6] [6] [6] [8] [i_10] [i_25] = (0 - var_1);
                                arr_95 [i_10 + 2] [1] [1] [9] [i_25] = (((((-2017539809344786713 ? var_0 : var_3))) ? ((var_0 ? 255 : var_12)) : (var_1 + var_1)));
                            }
                        }
                    }
                    arr_96 [i_23] [i_11] [1] = ((var_6 ? (!68) : 232));
                    var_47 |= (!122);
                    var_48 = (((var_9 ? var_10 : var_1)));
                    arr_97 [i_10 + 1] [0] [8] [0] &= (var_14 && var_11);
                }
                var_49 = (min((((~(~255)))), (min((2668150864460684528 + 157), (var_9 % 216)))));
            }
        }
    }
    var_50 += (((max(((var_13 ? var_15 : var_10)), var_15)) - var_11));
    #pragma endscop
}
