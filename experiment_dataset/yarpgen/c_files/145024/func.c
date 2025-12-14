/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145024
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
    var_18 |= var_12;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */_Bool) (unsigned char)173);
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_10 [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_0] [i_2]);
                var_19 ^= (!(arr_9 [i_0] [i_1] [i_2]));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))) - (((/* implicit */int) ((unsigned char) var_3)))));
                arr_14 [i_1] [i_3] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_8 [(unsigned char)6] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_3]))))) : (((((/* implicit */_Bool) (unsigned char)186)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_17))))));
                var_20 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) ((_Bool) var_16))) : (((/* implicit */int) var_4))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_17 [i_1] = ((/* implicit */_Bool) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)12)))));
                arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)253))))) ? (((((/* implicit */int) (unsigned char)245)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_6))));
                arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_7))));
                var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (_Bool)1)))));
            }
            arr_20 [i_1] = (_Bool)1;
        }
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
        {
            var_22 *= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_1 [i_0] [i_5]))));
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                arr_25 [i_5] [i_5] [i_6] [i_5] = (_Bool)0;
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))) * (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) arr_22 [i_6])))))))));
                arr_26 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_5])) ? (((/* implicit */int) arr_2 [i_0] [i_5])) : (((/* implicit */int) arr_2 [i_0] [i_5]))));
                var_25 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_16 [i_5] [i_5] [(_Bool)1] [i_5])))) != (((/* implicit */int) var_17))));
            }
            for (unsigned char i_8 = 1; i_8 < 10; i_8 += 1) 
            {
                var_26 = ((/* implicit */_Bool) (unsigned char)5);
                arr_33 [i_0] [i_0] [i_8] [i_8 - 1] = ((/* implicit */_Bool) ((((_Bool) arr_30 [(_Bool)0] [i_5])) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_8 - 1] [i_8 - 1]))));
            }
        }
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
        {
            arr_36 [i_0] = ((/* implicit */unsigned char) (~(((var_2) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_11 [i_9] [i_9] [i_0] [i_9]))))));
            arr_37 [i_0] [i_9] [i_9] = ((/* implicit */_Bool) arr_30 [i_0] [i_0]);
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_27 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_15 [i_10] [i_9] [i_0])) : (((/* implicit */int) var_16))));
                arr_40 [i_0] [i_0] [i_10] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_7)))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_46 [i_0] [i_9] [i_9] [i_12] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [(_Bool)1] [(_Bool)1] [i_11] [i_11])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_41 [i_9] [i_11] [i_9] [i_0]))));
                    var_28 ^= ((/* implicit */_Bool) ((((_Bool) (unsigned char)199)) ? (((var_7) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_42 [i_12] [i_0]))));
                    arr_47 [i_0] [i_12] = ((/* implicit */unsigned char) (_Bool)0);
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((((/* implicit */int) var_7)) % (((/* implicit */int) var_5)))) & (((/* implicit */int) var_0)))))));
                }
                /* LoopSeq 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    arr_51 [i_0] = ((/* implicit */unsigned char) ((var_1) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_28 [i_11] [i_11] [i_11])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_16 [(_Bool)0] [(_Bool)0] [i_11] [i_9]))));
                    var_30 += ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) * (((/* implicit */int) (_Bool)0))));
                    var_31 = ((/* implicit */unsigned char) var_3);
                    arr_52 [i_0] [i_9] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))));
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    arr_57 [i_0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_11] [i_14 - 1] [i_9] [i_14])) >> (((((/* implicit */int) arr_44 [i_11] [i_14 - 1] [i_9] [i_14 - 1])) - (25)))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) arr_5 [i_11])) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_0))));
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 1; i_15 < 9; i_15 += 3) 
                    {
                        arr_61 [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
                        var_33 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_43 [i_0] [(unsigned char)5] [(unsigned char)5]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))));
                        arr_62 [i_0] [(unsigned char)9] [i_11] [i_14 - 1] [i_15] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_5 [i_0])))) << (((((arr_54 [i_0] [i_9] [i_0] [(_Bool)1] [i_15]) ? (((/* implicit */int) arr_24 [i_0] [i_9] [i_14] [i_11])) : (((/* implicit */int) var_17)))) - (141)))));
                    }
                    arr_63 [i_0] [i_0] [i_11] [i_11] [i_11] [i_14] |= ((/* implicit */unsigned char) (_Bool)1);
                }
                arr_64 [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)14)) << (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 4 */
                for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    arr_68 [i_0] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                    arr_69 [i_0] [i_0] [i_11] [i_16] = arr_43 [i_0] [i_0] [i_0];
                    arr_70 [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)57)) & (((/* implicit */int) (_Bool)0)))) << ((((~(((/* implicit */int) (_Bool)0)))) + (31)))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_74 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_0] [i_17]))))) ? (((/* implicit */int) arr_11 [i_17] [i_9] [i_11] [i_17])) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0]))));
                    arr_75 [i_9] [i_17] [i_17] [i_0] = ((/* implicit */unsigned char) ((((_Bool) (unsigned char)78)) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned char)166))));
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_80 [i_0] [i_0] [i_11] [(unsigned char)6] [(_Bool)1] [i_17] = ((/* implicit */_Bool) arr_67 [i_0] [i_9] [i_11] [(unsigned char)1] [i_18]);
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)198))))) : (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) var_0))))));
                        var_35 += ((/* implicit */_Bool) arr_29 [i_0] [i_9] [i_0] [(_Bool)1]);
                    }
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        arr_83 [(unsigned char)10] [i_17] = ((_Bool) arr_55 [i_19] [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19]);
                        arr_84 [i_0] [i_9] [i_11] [i_17] [i_17] [i_9] [(unsigned char)0] = ((/* implicit */_Bool) var_10);
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_20 = 2; i_20 < 10; i_20 += 2) 
                    {
                        arr_88 [i_20 - 2] [i_17] [(_Bool)1] [i_17] [i_0] = ((unsigned char) arr_15 [i_9] [i_9] [i_20]);
                        arr_89 [i_0] [i_20] [i_17] [i_20 - 2] [(_Bool)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) (_Bool)1)))))));
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)148)) << (((/* implicit */int) (_Bool)1)))))));
                        var_37 = ((/* implicit */_Bool) arr_39 [i_20 - 1] [i_20 - 2] [i_20 - 1] [i_20 - 2]);
                        var_38 ^= (unsigned char)202;
                    }
                    for (unsigned char i_21 = 2; i_21 < 7; i_21 += 1) 
                    {
                        arr_93 [i_17] [i_9] [i_11] [(unsigned char)5] [i_21 - 1] = ((/* implicit */_Bool) (-(((((/* implicit */int) var_0)) & (((/* implicit */int) arr_71 [i_0] [i_9] [i_11] [i_17]))))));
                        var_39 += var_14;
                    }
                    for (unsigned char i_22 = 0; i_22 < 11; i_22 += 4) 
                    {
                        arr_98 [i_17] [i_22] = (unsigned char)49;
                        arr_99 [i_0] [i_0] [i_0] [i_0] [i_0] [i_17] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)53)) >> (((/* implicit */int) (unsigned char)0))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        arr_104 [i_0] [i_9] [i_0] [(_Bool)1] [(unsigned char)8] |= (_Bool)1;
                        arr_105 [i_23] [i_23] [i_9] [i_9] [i_9] [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)70))) : (((/* implicit */int) arr_94 [i_0] [i_9] [i_11] [i_17] [(_Bool)1]))));
                        arr_106 [i_17] [(unsigned char)1] [i_11] [i_17] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)75)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (((_Bool)1) && (arr_101 [(unsigned char)6] [i_11] [i_11] [i_17] [i_23])))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_23 [i_23] [i_17] [i_9] [i_0])))))));
                        arr_107 [(unsigned char)8] [(_Bool)1] [i_17] [i_17] [(unsigned char)4] [i_23] = ((/* implicit */_Bool) ((((/* implicit */int) arr_77 [(_Bool)1] [i_9] [i_17] [i_17] [i_17])) - (((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_40 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_28 [i_24] [i_9] [i_11]))))) ? (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) arr_86 [i_0] [(_Bool)1] [i_9] [i_24])) : (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) (_Bool)1))))));
                        arr_111 [i_0] [i_17] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_17])) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) arr_38 [i_17]))));
                    }
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_41 = ((/* implicit */unsigned char) min((var_41), (((unsigned char) (-(((/* implicit */int) (_Bool)0)))))));
                    var_42 = ((_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned char)246))));
                    /* LoopSeq 1 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_118 [i_25] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)233)) * (((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) ((_Bool) (unsigned char)216)))));
                        var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) var_4))));
                    }
                    var_44 = arr_94 [i_0] [i_9] [i_11] [i_11] [i_25];
                }
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    arr_121 [i_9] [i_9] [i_9] [i_9] [i_0] = ((/* implicit */unsigned char) (((_Bool)0) ? (((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_103 [(_Bool)1] [i_0] [i_9] [i_11] [i_27])))) : (((/* implicit */int) arr_81 [i_9] [(_Bool)1] [(_Bool)1] [i_11] [i_27]))));
                    arr_122 [(_Bool)0] = ((unsigned char) (_Bool)0);
                }
                var_45 = ((/* implicit */_Bool) min((var_45), ((_Bool)1)));
            }
        }
    }
    for (unsigned char i_28 = 0; i_28 < 20; i_28 += 3) 
    {
        var_46 += ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_123 [i_28])) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_9)) << (((/* implicit */int) (_Bool)1)))))));
        var_47 += ((/* implicit */_Bool) arr_124 [i_28]);
    }
    var_48 = var_13;
    var_49 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)63))) ? (((var_1) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)52)))) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_2)) * (((/* implicit */int) var_8)))) : (((/* implicit */int) var_16))))));
}
