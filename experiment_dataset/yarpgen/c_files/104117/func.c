/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104117
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] = (_Bool)1;
            var_13 = ((/* implicit */unsigned char) (_Bool)1);
        }
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
            var_14 = ((/* implicit */_Bool) (unsigned char)192);
            var_15 = (_Bool)1;
            arr_10 [i_0] [i_2] [i_0] = (_Bool)1;
        }
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        var_16 = (_Bool)1;
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_17 = (_Bool)1;
                            arr_22 [i_0] [i_0] [i_6] [i_6] [i_6] [i_6] [i_3] = (_Bool)1;
                            var_18 ^= ((/* implicit */unsigned char) (_Bool)1);
                        }
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (unsigned char)195))));
                        var_20 = ((/* implicit */_Bool) min((var_20), ((_Bool)1)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_21 = (unsigned char)197;
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_31 [i_9] [i_9] = ((/* implicit */unsigned char) (_Bool)1);
                            var_22 = (_Bool)0;
                        }
                    }
                } 
            } 
            arr_32 [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (_Bool)1);
        }
        arr_33 [(_Bool)1] = ((/* implicit */_Bool) (unsigned char)212);
        /* LoopSeq 1 */
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            var_23 |= ((/* implicit */_Bool) (unsigned char)80);
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (unsigned char i_12 = 2; i_12 < 11; i_12 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 2; i_13 < 11; i_13 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) (_Bool)1);
                            var_25 *= ((/* implicit */unsigned char) (_Bool)1);
                            var_26 = ((/* implicit */_Bool) max((var_26), ((_Bool)1)));
                        }
                        for (unsigned char i_14 = 2; i_14 < 11; i_14 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) (unsigned char)223);
                            var_28 = (_Bool)1;
                            arr_47 [(unsigned char)8] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (unsigned char)172);
                        }
                        arr_48 [i_11] [i_11] [(unsigned char)6] [i_11] = (_Bool)1;
                        var_29 = (unsigned char)165;
                        arr_49 [i_11] [i_11] [i_11] [i_12] = ((/* implicit */_Bool) (unsigned char)79);
                        var_30 ^= (_Bool)1;
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_56 [i_0] [i_10] [i_10] [i_15] [(_Bool)1] = (unsigned char)182;
                        var_31 *= (unsigned char)114;
                    }
                } 
            } 
        }
    }
    for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
    {
        var_32 ^= (unsigned char)32;
        var_33 = ((/* implicit */_Bool) (unsigned char)16);
        var_34 -= ((/* implicit */unsigned char) (_Bool)1);
    }
    var_35 = ((/* implicit */unsigned char) max((var_35), ((unsigned char)185)));
    var_36 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 3) 
    {
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_20 = 1; i_20 < 21; i_20 += 1) /* same iter space */
                {
                    var_37 *= ((/* implicit */_Bool) (unsigned char)10);
                    arr_65 [(_Bool)1] |= ((/* implicit */_Bool) (unsigned char)224);
                    /* LoopSeq 4 */
                    for (unsigned char i_21 = 0; i_21 < 22; i_21 += 3) /* same iter space */
                    {
                        var_38 = ((/* implicit */_Bool) (unsigned char)127);
                        arr_70 [(_Bool)1] [i_18] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    /* vectorizable */
                    for (unsigned char i_22 = 0; i_22 < 22; i_22 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) (unsigned char)208))));
                        arr_73 [i_18] [i_19] [i_20 - 1] [i_22] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_74 [i_19] [i_18] = (unsigned char)165;
                    }
                    for (unsigned char i_23 = 0; i_23 < 22; i_23 += 3) /* same iter space */
                    {
                        arr_78 [i_19 - 1] [i_18] [i_18] [i_23] = (unsigned char)13;
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (unsigned char)219))));
                    }
                    for (unsigned char i_24 = 0; i_24 < 22; i_24 += 3) /* same iter space */
                    {
                        arr_81 [i_18] [i_18] [i_18] = (unsigned char)53;
                        var_41 |= ((/* implicit */_Bool) (unsigned char)9);
                        var_42 = ((/* implicit */unsigned char) (_Bool)0);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                    {
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            {
                                var_43 = (_Bool)1;
                                var_44 = (unsigned char)131;
                                var_45 = ((/* implicit */unsigned char) max((var_45), ((unsigned char)37)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                        {
                            {
                                var_46 *= (unsigned char)111;
                                var_47 ^= (unsigned char)141;
                            }
                        } 
                    } 
                }
                for (unsigned char i_29 = 1; i_29 < 21; i_29 += 1) /* same iter space */
                {
                    arr_95 [i_18] [i_18] = (_Bool)1;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_30 = 3; i_30 < 21; i_30 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                        {
                            var_48 = ((/* implicit */unsigned char) min((var_48), ((unsigned char)58)));
                            arr_101 [(unsigned char)17] [i_30] [i_18] [i_19 - 1] [(unsigned char)19] = ((/* implicit */unsigned char) (_Bool)1);
                            var_49 = (_Bool)0;
                        }
                        for (unsigned char i_32 = 0; i_32 < 22; i_32 += 4) 
                        {
                            arr_105 [i_30] [i_19] [i_29] [i_30] [i_18] [i_18] = ((/* implicit */_Bool) (unsigned char)37);
                            var_50 = ((/* implicit */_Bool) (unsigned char)219);
                            arr_106 [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
                        {
                            arr_110 [i_18] = ((/* implicit */_Bool) (unsigned char)22);
                            var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (_Bool)1))));
                            var_52 = (_Bool)1;
                            var_53 = ((/* implicit */_Bool) (unsigned char)29);
                        }
                        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
                        {
                            var_54 ^= ((/* implicit */unsigned char) (_Bool)1);
                            arr_113 [(unsigned char)13] [(unsigned char)13] [i_18] [i_30] [i_30] = ((/* implicit */_Bool) (unsigned char)53);
                            arr_114 [i_18] [i_18] [(_Bool)1] [i_29 - 1] [i_30] [(unsigned char)18] [i_18] = (unsigned char)32;
                        }
                        var_55 = ((/* implicit */_Bool) (unsigned char)3);
                    }
                    for (unsigned char i_35 = 0; i_35 < 22; i_35 += 3) 
                    {
                        var_56 -= ((/* implicit */_Bool) (unsigned char)51);
                        var_57 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    var_58 ^= (_Bool)1;
                }
                for (unsigned char i_36 = 1; i_36 < 21; i_36 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_37 = 0; i_37 < 22; i_37 += 1) 
                    {
                        for (unsigned char i_38 = 0; i_38 < 22; i_38 += 4) 
                        {
                            {
                                var_59 -= ((/* implicit */unsigned char) (_Bool)1);
                                var_60 = ((/* implicit */unsigned char) max((var_60), (((/* implicit */unsigned char) (_Bool)1))));
                                arr_129 [i_18] [i_19] [i_18] = ((/* implicit */unsigned char) (_Bool)1);
                                var_61 = ((/* implicit */_Bool) max((var_61), (((/* implicit */_Bool) (unsigned char)141))));
                                var_62 = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                    var_63 = (_Bool)1;
                }
                for (unsigned char i_39 = 1; i_39 < 21; i_39 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
                    {
                        arr_136 [i_18] [i_19 - 1] [(_Bool)0] [(_Bool)0] [i_18] [(_Bool)1] |= ((/* implicit */_Bool) (unsigned char)154);
                        var_64 = (_Bool)1;
                    }
                    for (unsigned char i_41 = 3; i_41 < 20; i_41 += 1) 
                    {
                        var_65 = (_Bool)1;
                        var_66 ^= (unsigned char)51;
                        arr_139 [i_18] = (_Bool)1;
                    }
                    for (unsigned char i_42 = 1; i_42 < 21; i_42 += 4) 
                    {
                        var_67 = (_Bool)1;
                        var_68 = ((/* implicit */unsigned char) max((var_68), ((unsigned char)156)));
                    }
                    for (_Bool i_43 = 0; i_43 < 1; i_43 += 1) 
                    {
                        arr_147 [i_43] [i_19] [i_18] [i_18] = (_Bool)1;
                        var_69 = ((/* implicit */_Bool) (unsigned char)242);
                        /* LoopSeq 1 */
                        for (_Bool i_44 = 0; i_44 < 1; i_44 += 1) 
                        {
                            var_70 = (_Bool)1;
                            var_71 = ((/* implicit */_Bool) max((var_71), (((/* implicit */_Bool) (unsigned char)15))));
                            var_72 = ((/* implicit */_Bool) max((var_72), (((/* implicit */_Bool) (unsigned char)41))));
                            var_73 |= (unsigned char)208;
                            var_74 = ((/* implicit */_Bool) (unsigned char)241);
                        }
                    }
                    var_75 = ((/* implicit */unsigned char) max((var_75), ((unsigned char)232)));
                }
                var_76 |= (unsigned char)23;
                var_77 = ((/* implicit */unsigned char) (_Bool)0);
            }
        } 
    } 
}
