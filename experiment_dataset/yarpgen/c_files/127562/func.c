/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127562
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
    var_11 = ((/* implicit */short) ((((_Bool) ((var_8) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)101)) | (((/* implicit */int) (short)-15630)))))))) : (((/* implicit */int) var_9))));
    var_12 = ((/* implicit */unsigned char) var_8);
    var_13 = ((/* implicit */short) var_0);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_0] [(unsigned char)8]))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((unsigned char) arr_1 [(unsigned char)13] [(unsigned char)13])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)69)) ^ (((/* implicit */int) (short)17))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_4)))) : (((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) arr_3 [i_1])))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) - (((/* implicit */int) arr_4 [(_Bool)1])))) - (((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) ((short) arr_4 [i_1]))) : (((/* implicit */int) ((unsigned char) arr_3 [i_1])))));
        var_17 = ((/* implicit */short) (-(((/* implicit */int) (short)0))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_3 = 1; i_3 < 14; i_3 += 3) /* same iter space */
        {
            arr_11 [(unsigned char)1] [(unsigned char)1] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)101)))))) | (((/* implicit */int) var_6))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_9 [i_3 - 1]))))))));
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_7);
            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_1);
            /* LoopSeq 3 */
            for (short i_4 = 1; i_4 < 14; i_4 += 4) 
            {
                var_19 += ((/* implicit */unsigned char) arr_4 [i_2]);
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) var_6)))))));
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_7))))))));
                arr_19 [i_2] [i_2] = ((/* implicit */_Bool) ((short) arr_0 [(short)13] [i_3]));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_23 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_4 [i_2]);
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    arr_27 [(_Bool)1] [i_3 - 1] [i_3 - 1] = ((((/* implicit */int) ((_Bool) ((_Bool) arr_14 [i_2] [i_7] [(_Bool)1])))) > (((/* implicit */int) arr_17 [i_6 - 1] [i_6 - 1] [i_6])));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) * (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2])))))));
                    arr_28 [i_2] [i_2] [i_2] [i_2] [(_Bool)1] = var_4;
                }
            }
        }
        for (short i_8 = 1; i_8 < 14; i_8 += 3) /* same iter space */
        {
            arr_31 [i_8] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_25 [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [(_Bool)1])) - (((((/* implicit */_Bool) (short)10500)) ? (((/* implicit */int) (short)15630)) : (((/* implicit */int) (short)-5))))))));
            /* LoopSeq 4 */
            for (short i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                var_23 = (!((!(((/* implicit */_Bool) ((unsigned char) var_4))))));
                arr_34 [i_8] [(unsigned char)12] [i_9] = ((/* implicit */_Bool) ((unsigned char) ((_Bool) (short)-15631)));
                arr_35 [(_Bool)1] [i_8] [(unsigned char)7] = ((_Bool) ((((/* implicit */int) (_Bool)1)) > (((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (_Bool)1))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_24 = ((/* implicit */short) (+(((/* implicit */int) (short)-13528))));
                var_25 = var_8;
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_4))));
            }
            for (short i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                arr_42 [i_2] [i_8] [i_2] = ((/* implicit */unsigned char) arr_7 [i_2] [i_2]);
                /* LoopSeq 2 */
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_48 [(_Bool)0] [(short)11] [i_8] = ((/* implicit */_Bool) arr_9 [i_2]);
                        var_27 = arr_26 [i_2] [i_2] [(short)13] [i_2];
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_28 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))));
                        var_29 = ((_Bool) ((unsigned char) (short)15645));
                    }
                    var_30 = ((/* implicit */_Bool) ((var_6) ? (((((/* implicit */_Bool) (short)15645)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)4)) : (((/* implicit */int) (short)-15645)))) : (((/* implicit */int) (short)25037)))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_1))))))));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_8 + 1] [i_8] [i_8 + 1])) - (((/* implicit */int) arr_3 [(short)18]))));
                    var_32 = ((/* implicit */short) var_5);
                }
                for (short i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    arr_57 [i_8] = ((/* implicit */_Bool) ((unsigned char) var_7));
                    arr_58 [i_15] [i_8] [i_15] [(unsigned char)4] = ((/* implicit */short) var_2);
                    var_33 = ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_55 [i_8] [i_8] [i_8] [i_8 + 1])) : (((/* implicit */int) arr_55 [i_8] [i_8] [i_8] [i_8 + 1]))));
                }
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((short) (unsigned char)83)))));
                var_35 += ((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_1))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(unsigned char)5] [i_2])) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0))))))))));
                var_37 = (!((_Bool)1));
                var_38 = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_4)))));
                var_39 = ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) ((_Bool) var_3))))));
                arr_61 [i_2] [i_2] [(short)10] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((unsigned char) ((arr_16 [(_Bool)1] [i_8 + 1] [i_8] [i_8]) ? (((/* implicit */int) arr_60 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_2] [(_Bool)1])))))) : (((((/* implicit */int) arr_24 [(short)4] [(short)4] [(short)14] [(short)14])) & (((/* implicit */int) var_10))))));
            }
            var_40 *= ((/* implicit */_Bool) ((unsigned char) (_Bool)0));
            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) arr_50 [i_2] [i_2] [i_2] [(short)9] [i_2])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_50 [i_2] [i_2] [i_2] [i_2] [(_Bool)1]))))));
        }
        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((((/* implicit */int) arr_51 [(unsigned char)6] [i_2] [i_2])) >> (((/* implicit */int) arr_47 [i_2] [(short)0] [i_2])))) : (((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
        var_43 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_49 [i_2] [(short)2] [i_2] [i_2] [i_2])))));
    }
    /* LoopSeq 2 */
    for (short i_17 = 1; i_17 < 10; i_17 += 3) 
    {
        var_44 = ((/* implicit */_Bool) arr_62 [(_Bool)0]);
        arr_65 [(_Bool)1] = ((short) var_0);
    }
    for (short i_18 = 0; i_18 < 23; i_18 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((_Bool) arr_68 [i_19 - 1] [i_19 - 1])))));
            var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            var_47 *= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-5255)) * (((/* implicit */int) (unsigned char)143))));
        }
        for (short i_20 = 4; i_20 < 21; i_20 += 1) 
        {
            arr_72 [i_20] = ((/* implicit */_Bool) arr_67 [(unsigned char)0] [(unsigned char)0]);
            var_48 += ((/* implicit */unsigned char) arr_68 [i_20] [i_20]);
            arr_73 [i_20] [(unsigned char)11] [i_20] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)144))));
            arr_74 [i_20] = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
        }
        for (unsigned char i_21 = 0; i_21 < 23; i_21 += 4) 
        {
            arr_77 [(_Bool)1] [i_21] [(_Bool)1] = ((/* implicit */_Bool) var_4);
            arr_78 [i_18] [(_Bool)1] [i_18] = ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)101))));
            /* LoopSeq 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_49 = ((/* implicit */unsigned char) var_9);
                var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) ((((((/* implicit */int) (short)-32651)) + (2147483647))) << (((((/* implicit */int) (unsigned char)112)) - (112))))))));
                var_51 *= arr_76 [i_18] [i_18] [i_18];
            }
            /* vectorizable */
            for (unsigned char i_23 = 4; i_23 < 22; i_23 += 4) 
            {
                arr_84 [(unsigned char)13] [(unsigned char)13] [i_23] = ((/* implicit */unsigned char) arr_71 [i_18] [i_18] [i_21]);
                var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) ((((_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_81 [i_23 + 1] [i_23])))))));
                arr_85 [(short)10] [(short)10] = ((/* implicit */_Bool) ((short) arr_71 [i_23 + 1] [i_23 - 1] [i_23]));
                /* LoopSeq 4 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_53 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_81 [i_23 - 1] [i_23 - 1])) < (((/* implicit */int) var_7))));
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        arr_91 [i_18] [i_18] [i_18] [i_18] [i_25] [(short)4] = ((/* implicit */short) var_5);
                        var_54 = ((/* implicit */_Bool) ((((/* implicit */int) arr_71 [i_23] [i_23 - 3] [i_25])) | (((/* implicit */int) arr_82 [i_23 - 3] [i_23 - 3] [i_23]))));
                    }
                    arr_92 [(_Bool)1] [i_21] [(_Bool)1] [i_21] = var_2;
                }
                for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                {
                    var_55 = ((_Bool) arr_94 [i_26 + 1] [i_26 + 1] [i_26] [i_26]);
                    arr_96 [(unsigned char)10] [i_23] [i_26] [(short)7] [i_23 - 1] [(short)15] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_86 [(_Bool)1] [i_26 + 1] [i_26 + 1] [(_Bool)1]))));
                    var_56 = ((/* implicit */_Bool) var_7);
                }
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    arr_101 [(_Bool)1] [i_21] [(_Bool)1] [i_21] [i_21] [i_21] = var_0;
                    /* LoopSeq 3 */
                    for (unsigned char i_28 = 0; i_28 < 23; i_28 += 4) 
                    {
                        var_57 = ((/* implicit */_Bool) ((short) arr_94 [i_23 - 2] [i_23 - 2] [i_23 - 3] [i_23 - 3]));
                        var_58 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_104 [i_23 - 2] [i_23 - 2] [i_23] [i_23 - 1] [i_23 - 3]))));
                        var_59 = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_69 [(short)5]))))));
                    }
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        arr_107 [i_18] [i_29] [i_18] [i_18] [(_Bool)1] [i_29] [i_29] = ((/* implicit */short) ((((/* implicit */_Bool) arr_88 [i_23 + 1] [i_23 - 4] [i_23 - 3] [i_23] [i_23 - 1] [i_23 - 4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_88 [i_23 - 3] [(_Bool)1] [i_23 - 4] [(short)16] [i_23 - 3] [i_23 + 1]))));
                        var_60 = ((/* implicit */unsigned char) arr_103 [i_23 - 3] [i_23] [i_23 + 1] [i_23 + 1] [i_23 + 1]);
                    }
                    for (short i_30 = 1; i_30 < 20; i_30 += 4) 
                    {
                        arr_110 [i_18] [(short)22] |= ((/* implicit */_Bool) arr_106 [i_18] [(unsigned char)10] [i_21] [(_Bool)1] [(_Bool)1]);
                        var_61 ^= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
                        var_62 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_105 [i_23 - 4] [i_23] [(_Bool)1] [(_Bool)1] [i_23 - 2]))));
                    }
                    arr_111 [i_18] [i_18] [i_18] [(_Bool)1] [(_Bool)1] [i_18] = ((/* implicit */short) ((var_8) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_97 [i_23 - 3] [i_23] [i_23 - 4] [i_23] [i_23 - 4] [i_23 - 4]))));
                    arr_112 [i_18] [i_18] [i_18] [i_18] = arr_104 [i_23] [i_23] [i_23] [i_23 - 1] [i_23 - 3];
                }
                for (unsigned char i_31 = 1; i_31 < 22; i_31 += 4) 
                {
                    var_63 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_105 [i_31 - 1] [i_31 - 1] [(short)14] [i_31 - 1] [i_31])) : (((/* implicit */int) arr_105 [i_31 + 1] [i_31 - 1] [(_Bool)1] [i_31 - 1] [(short)11]))));
                    var_64 = ((/* implicit */short) max((var_64), (((/* implicit */short) ((((/* implicit */_Bool) arr_113 [i_31 - 1] [i_21] [i_31 + 1] [i_31 + 1])) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_66 [i_18] [i_18])))) : (((/* implicit */int) arr_76 [i_23 - 2] [i_23 + 1] [(_Bool)1])))))));
                }
            }
            var_65 = ((/* implicit */unsigned char) arr_82 [i_18] [i_18] [i_18]);
        }
        arr_115 [(unsigned char)5] [i_18] = ((/* implicit */_Bool) (((+(((((/* implicit */int) (unsigned char)31)) + (((/* implicit */int) (short)-15619)))))) - (((var_0) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_6)) + (((/* implicit */int) var_4))))))));
        /* LoopSeq 3 */
        for (unsigned char i_32 = 0; i_32 < 23; i_32 += 4) 
        {
            var_66 += ((/* implicit */short) var_5);
            arr_118 [(_Bool)1] = ((_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_100 [i_18] [i_18] [i_18] [i_18]))));
            var_67 = ((unsigned char) ((((/* implicit */_Bool) arr_83 [(_Bool)0] [(short)8] [(short)8])) ? (((/* implicit */int) arr_83 [i_18] [i_18] [(short)20])) : (((/* implicit */int) arr_83 [i_18] [i_18] [i_18]))));
        }
        for (short i_33 = 0; i_33 < 23; i_33 += 4) 
        {
            var_68 = ((short) ((_Bool) arr_89 [i_18] [i_18] [i_18] [i_18] [(_Bool)1]));
            arr_122 [(_Bool)1] = ((/* implicit */unsigned char) ((((arr_66 [i_18] [i_18]) ? (((((/* implicit */_Bool) arr_90 [i_18] [i_18] [i_18] [(_Bool)1] [i_33] [i_18])) ? (((/* implicit */int) arr_98 [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_120 [(unsigned char)20] [i_33])))) : (((/* implicit */int) var_10)))) != (((/* implicit */int) ((_Bool) (short)-32651)))));
            var_69 = ((/* implicit */unsigned char) arr_117 [i_18]);
        }
        for (short i_34 = 3; i_34 < 20; i_34 += 4) 
        {
            arr_125 [i_18] = ((/* implicit */_Bool) arr_100 [i_18] [i_18] [i_18] [i_18]);
            var_70 += ((/* implicit */_Bool) ((((((/* implicit */int) (short)-15630)) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_9))) != (((/* implicit */int) (_Bool)1)))))));
        }
        arr_126 [i_18] = (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1))));
        var_71 = ((/* implicit */unsigned char) var_9);
    }
}
