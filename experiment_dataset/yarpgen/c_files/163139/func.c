/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163139
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
    var_13 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-26180)), (1183313810U)));
    var_14 ^= ((/* implicit */unsigned short) var_4);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_0 [i_0]))));
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
        }
        for (short i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0 - 1] [i_2 - 2]);
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                arr_11 [i_3] [i_3] = ((/* implicit */_Bool) (+(733573431)));
                arr_12 [i_0] [i_0 + 3] [i_0] [i_0] = ((/* implicit */_Bool) var_4);
            }
        }
        var_16 ^= ((/* implicit */signed char) arr_1 [i_0 - 1]);
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
        {
            for (unsigned char i_5 = 1; i_5 < 13; i_5 += 2) 
            {
                {
                    var_17 &= ((/* implicit */signed char) var_6);
                    arr_18 [i_0 + 1] [i_5] [(short)12] = ((/* implicit */unsigned int) (!(var_7)));
                    arr_19 [i_5] [i_5] = ((/* implicit */_Bool) arr_9 [i_4] [i_4 - 1] [i_4 + 1]);
                    var_18 = ((/* implicit */signed char) var_7);
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */short) arr_3 [i_0] [i_4] [i_5]);
                        /* LoopSeq 2 */
                        for (short i_7 = 2; i_7 < 14; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)16))));
                            var_21 = ((/* implicit */unsigned short) arr_10 [i_4 - 2] [i_7]);
                        }
                        for (short i_8 = 1; i_8 < 14; i_8 += 2) 
                        {
                            arr_31 [i_8] [i_0] [i_5] [i_5] [i_4 - 2] [i_0] = ((/* implicit */signed char) arr_0 [i_4 - 1]);
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (_Bool)1)))))));
                            var_23 = ((/* implicit */short) (~(8192)));
                        }
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0]))));
    }
    for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            var_25 = var_6;
            arr_37 [i_9] [(unsigned char)23] = ((/* implicit */unsigned int) (!(var_7)));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                var_26 = ((/* implicit */signed char) ((var_3) ? ((-(((/* implicit */int) max((((/* implicit */signed char) var_9)), (var_4)))))) : (((/* implicit */int) arr_35 [i_11]))));
                arr_40 [i_9] [i_9] [i_9] = ((/* implicit */signed char) max(((unsigned char)233), (((/* implicit */unsigned char) (signed char)63))));
                var_27 = ((/* implicit */unsigned char) var_6);
                var_28 = ((/* implicit */_Bool) arr_34 [i_11]);
            }
            var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)26077))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    var_30 = ((/* implicit */_Bool) var_1);
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        var_31 &= ((/* implicit */_Bool) var_1);
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (arr_47 [i_9] [i_10] [i_13] [i_14])));
                    }
                }
                for (unsigned int i_15 = 2; i_15 < 23; i_15 += 2) 
                {
                    var_33 = ((/* implicit */unsigned char) arr_41 [i_9] [i_9] [i_9] [i_9]);
                    var_34 = ((/* implicit */signed char) arr_45 [i_15 + 1] [i_15 + 1] [(unsigned char)12] [i_15 - 2]);
                }
                /* LoopSeq 1 */
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    var_35 = ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)65535)));
                    var_36 = ((/* implicit */unsigned char) ((var_6) != (((/* implicit */int) var_0))));
                    arr_55 [i_9] [i_10] [i_16] = ((/* implicit */int) var_2);
                }
            }
            for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                var_37 = ((/* implicit */int) var_9);
                var_38 = (short)26058;
                /* LoopSeq 2 */
                for (signed char i_18 = 2; i_18 < 22; i_18 += 1) 
                {
                    var_39 = ((/* implicit */short) max((((/* implicit */int) (short)-26077)), (max((var_10), (((/* implicit */int) (unsigned char)13))))));
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 3) 
                    {
                        arr_64 [i_9] [i_10] [i_18 + 2] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-26347)) != (((/* implicit */int) (short)-26077))))) : (((/* implicit */int) var_0))));
                        var_40 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_3))))));
                        var_41 = var_2;
                    }
                    var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (~(((/* implicit */int) (short)26077)))))));
                }
                for (unsigned int i_20 = 1; i_20 < 20; i_20 += 4) 
                {
                    var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) max((((/* implicit */short) (signed char)-18)), ((short)26347))))));
                    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_8))))));
                    var_45 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-26077))));
                    var_46 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) - (((/* implicit */int) (short)26348))))) ? (((/* implicit */int) max(((short)21370), (((/* implicit */short) arr_44 [i_17] [i_20 + 3]))))) : (((/* implicit */int) max(((short)-8192), (((/* implicit */short) arr_41 [i_9] [i_10] [6] [i_20])))))))));
                    arr_67 [i_9] [i_20] [i_17] [i_20 + 2] = ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)-26080))))), (max(((short)26092), ((short)-8744)))))) : (((/* implicit */int) var_3))));
                }
                arr_68 [i_10] [i_10] = ((/* implicit */short) var_6);
            }
            /* vectorizable */
            for (short i_21 = 0; i_21 < 24; i_21 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_22 = 0; i_22 < 24; i_22 += 4) 
                {
                    var_47 = ((/* implicit */signed char) (+(var_10)));
                    var_48 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_48 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
                    var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)5))));
                }
                for (unsigned char i_23 = 3; i_23 < 23; i_23 += 1) 
                {
                    arr_76 [i_21] [i_10] [i_9] &= ((/* implicit */_Bool) arr_49 [i_23 - 1] [i_23 + 1]);
                    var_50 = ((/* implicit */unsigned char) var_1);
                    arr_77 [i_9] = ((/* implicit */int) ((arr_46 [i_23] [i_23 - 2] [i_23] [i_23 - 1] [i_23 - 3] [i_10]) - (arr_46 [i_23] [i_23] [i_23 - 3] [i_23] [i_23 - 3] [i_10])));
                    var_51 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_12))));
                }
                arr_78 [i_9] [i_10] [i_21] = ((/* implicit */_Bool) var_0);
            }
        }
        arr_79 [i_9] = ((/* implicit */signed char) -91310162);
        var_52 = ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) arr_49 [(signed char)8] [i_9])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_4)))), (var_6)))));
        /* LoopNest 2 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (unsigned short i_25 = 0; i_25 < 24; i_25 += 1) 
            {
                {
                    var_53 = ((/* implicit */signed char) arr_35 [i_9]);
                    var_54 = ((/* implicit */int) (unsigned char)19);
                }
            } 
        } 
    }
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        var_55 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_4))));
        var_56 = arr_39 [i_26] [(short)9] [i_26] [(short)9];
    }
    for (int i_27 = 3; i_27 < 15; i_27 += 2) 
    {
        var_57 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-26074)) != (((((/* implicit */int) var_8)) - (((/* implicit */int) (short)8744))))));
        arr_90 [i_27] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_49 [i_27 - 1] [i_27 - 3]), (((/* implicit */short) var_0))))) - (var_10)));
        /* LoopNest 2 */
        for (unsigned short i_28 = 0; i_28 < 19; i_28 += 3) 
        {
            for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
            {
                {
                    var_58 = ((/* implicit */signed char) var_8);
                    /* LoopSeq 3 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_59 = ((/* implicit */signed char) 2147483647);
                        /* LoopSeq 3 */
                        for (unsigned short i_31 = 3; i_31 < 18; i_31 += 4) 
                        {
                            var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) arr_65 [i_28] [i_28] [i_28])) : (((/* implicit */int) arr_97 [i_27 - 2] [i_29 - 1] [i_28] [i_27 + 1] [i_31 - 1]))));
                            var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) ((((var_10) != (((/* implicit */int) arr_82 [i_30] [(short)4] [i_28] [i_31])))) ? (((/* implicit */int) max((arr_59 [i_31 - 3] [i_31] [i_31] [i_31]), (((/* implicit */unsigned char) var_1))))) : ((+((+(((/* implicit */int) (short)8213)))))))))));
                            var_62 = var_1;
                        }
                        /* vectorizable */
                        for (unsigned char i_32 = 2; i_32 < 17; i_32 += 1) /* same iter space */
                        {
                            arr_106 [i_27] [(unsigned char)4] [i_27 - 1] [i_27 - 1] [i_28] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)8743))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_63 [i_29 - 1] [i_32] [i_32 - 1] [i_29 - 1] [(short)20] [i_28] [i_28])));
                            var_63 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)31040))));
                        }
                        for (unsigned char i_33 = 2; i_33 < 17; i_33 += 1) /* same iter space */
                        {
                            var_64 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_48 [i_33] [i_33] [i_33 + 1] [i_33 - 2] [i_33 - 2] [i_33 - 1])) - (((/* implicit */int) (short)-30037))))));
                            arr_109 [i_27] [i_28] [i_29] [i_30] [(short)18] [i_28] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(var_8))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_34 = 1; i_34 < 17; i_34 += 2) 
                    {
                        var_65 = ((/* implicit */short) var_0);
                        var_66 = ((/* implicit */short) ((((/* implicit */_Bool) (short)26076)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned char i_35 = 0; i_35 < 19; i_35 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_36 = 3; i_36 < 18; i_36 += 3) 
                        {
                            arr_116 [i_27] [i_28] [i_27] [i_27 + 3] [i_27 - 2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_5)) != (((((/* implicit */int) var_2)) - (((/* implicit */int) var_8)))))))));
                            var_67 = ((/* implicit */short) (unsigned char)175);
                            var_68 = ((/* implicit */unsigned char) ((max((arr_96 [i_27 - 1] [i_29 - 1] [i_29]), (var_10))) != (max((((/* implicit */int) var_4)), (arr_96 [i_27] [i_29 - 1] [i_29])))));
                        }
                        for (short i_37 = 2; i_37 < 16; i_37 += 3) 
                        {
                            var_69 = var_2;
                            var_70 = ((/* implicit */short) (-(max((((/* implicit */int) arr_71 [i_27 - 2] [i_27] [i_27] [i_27 + 2])), (var_6)))));
                            var_71 = ((/* implicit */unsigned int) max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)86)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) != (3416451554U))))));
                        }
                        for (unsigned char i_38 = 0; i_38 < 19; i_38 += 1) 
                        {
                            var_72 = (~(((/* implicit */int) var_12)));
                            var_73 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                        }
                        var_74 = (signed char)63;
                        arr_123 [i_28] = ((/* implicit */short) (-(((arr_33 [i_27] [i_28]) - (((/* implicit */int) arr_108 [i_27] [(short)11] [i_29] [i_27 + 1] [(_Bool)1] [i_27 + 4]))))));
                    }
                    arr_124 [i_27 + 3] [i_28] [(unsigned char)9] = ((/* implicit */int) var_4);
                    var_75 = max(((unsigned short)26927), (((/* implicit */unsigned short) var_8)));
                }
            } 
        } 
    }
}
