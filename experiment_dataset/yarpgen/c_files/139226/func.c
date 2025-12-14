/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139226
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
    var_14 = ((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) ((_Bool) var_9)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_1 - 3] [i_0 - 2] = ((/* implicit */signed char) arr_3 [i_0 + 2] [i_0 - 1] [i_1 - 3]);
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15890))) + (var_2)));
            var_15 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_10 [i_2] [i_0] [i_0] = ((/* implicit */signed char) (~(arr_1 [i_0 + 2] [i_0 - 1])));
            /* LoopSeq 2 */
            for (long long int i_3 = 1; i_3 < 14; i_3 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) arr_0 [i_2]);
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4]))))) <= ((~(((/* implicit */int) arr_13 [(short)12] [(short)12] [i_0] [i_0])))))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3] [i_2] [10ULL]))))))))));
                var_19 += ((/* implicit */_Bool) ((signed char) var_12));
            }
            /* vectorizable */
            for (long long int i_6 = 1; i_6 < 14; i_6 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_2 [i_2] [i_6]))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 1; i_7 < 14; i_7 += 4) 
                {
                    arr_24 [i_0] [i_0 + 2] [8ULL] [i_6] [i_0] = ((unsigned char) arr_23 [i_7 - 1] [i_6] [i_6] [i_0]);
                    arr_25 [i_0] [i_6] [i_0] [i_6] [i_6] [i_7 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_6 + 1] [i_0 + 1]))));
                    arr_26 [i_6] = ((/* implicit */unsigned char) ((short) var_3));
                    var_21 = ((/* implicit */unsigned int) ((unsigned long long int) arr_11 [i_0 + 1] [i_6 + 1] [i_7]));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_19 [(short)14] [(short)14] [i_6 - 1] [i_7]))));
                }
                arr_27 [i_6] [7ULL] [i_6] = ((/* implicit */_Bool) arr_16 [i_2] [i_6]);
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_23 = min(((-(arr_2 [i_0 + 1] [i_0]))), (((/* implicit */long long int) min((arr_16 [i_0] [i_0 - 2]), (((/* implicit */unsigned int) var_12))))));
            arr_30 [i_8] = (+(max((arr_12 [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_8]), (arr_12 [i_8] [i_8] [i_8] [i_8]))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_9 = 4; i_9 < 14; i_9 += 4) 
        {
            arr_33 [(unsigned char)2] [(unsigned char)2] = arr_29 [i_0 - 1] [i_0] [i_0 - 1];
            arr_34 [6ULL] = var_11;
        }
        arr_35 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)49660);
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_32 [i_0] [i_0 + 2] [i_0 + 2]))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                for (unsigned int i_13 = 4; i_13 < 14; i_13 += 3) 
                {
                    {
                        var_25 += ((/* implicit */unsigned short) (~(arr_2 [i_10] [i_10 - 2])));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_23 [i_13 - 2] [i_12] [i_13 - 4] [i_13 - 2]))));
                        var_27 = var_4;
                        var_28 = ((/* implicit */unsigned char) arr_0 [i_10]);
                    }
                } 
            } 
            var_29 += ((/* implicit */signed char) ((unsigned char) arr_17 [i_11]));
            /* LoopNest 2 */
            for (signed char i_14 = 2; i_14 < 12; i_14 += 2) 
            {
                for (unsigned short i_15 = 2; i_15 < 14; i_15 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_16 = 0; i_16 < 15; i_16 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */int) ((unsigned char) var_10));
                            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) arr_48 [i_15]))));
                            arr_52 [i_10 - 1] [(unsigned short)3] [6ULL] = ((/* implicit */unsigned long long int) (unsigned short)15890);
                        }
                        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) /* same iter space */
                        {
                            var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_11] [i_17] [i_17])) || (arr_5 [i_11] [i_14 - 2])));
                            arr_55 [i_10] [i_11] [i_10] [i_15] [i_17] = ((/* implicit */signed char) ((long long int) ((-1489033974) * (((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 15; i_18 += 2) /* same iter space */
                        {
                            var_33 += ((/* implicit */unsigned long long int) (-(arr_51 [i_15 - 1] [i_14 - 2] [i_11])));
                            arr_59 [i_14 - 2] [i_15] [i_18] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_15 [i_18] [0U] [i_14] [i_11] [i_10])))) & (((/* implicit */int) arr_40 [i_18] [i_14] [i_11] [i_10]))));
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_57 [i_18] [i_15] [i_14])) != (((/* implicit */int) arr_46 [i_15]))))) != (((/* implicit */int) arr_22 [i_18] [i_10] [i_11] [i_18])))))));
                        }
                        for (unsigned int i_19 = 0; i_19 < 15; i_19 += 2) /* same iter space */
                        {
                            arr_62 [i_10] [i_10] [i_14] [i_14] [i_15 - 1] [i_14] = (-(((/* implicit */int) (unsigned short)15890)));
                            var_35 += ((/* implicit */short) ((unsigned int) arr_23 [i_15 - 2] [i_11] [i_11] [i_10 - 2]));
                        }
                        var_36 = ((/* implicit */_Bool) 7687646724933775112ULL);
                        /* LoopSeq 2 */
                        for (unsigned char i_20 = 0; i_20 < 15; i_20 += 2) 
                        {
                            var_37 = ((/* implicit */_Bool) (~(arr_60 [i_10] [i_20] [i_10] [i_10] [i_11])));
                            var_38 = ((unsigned char) arr_46 [i_10 - 2]);
                            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) arr_21 [i_10] [8ULL] [i_20] [i_14] [(unsigned char)12] [i_14]))));
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_11] [i_10 - 1] [i_10 - 2] [i_10])) || (((/* implicit */_Bool) arr_37 [i_10 + 1]))));
                            var_41 += ((/* implicit */unsigned long long int) var_12);
                        }
                        for (int i_21 = 0; i_21 < 15; i_21 += 1) 
                        {
                            arr_68 [i_21] [i_11] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_15] [i_15 - 2] [i_21])))))));
                            arr_69 [i_21] [i_21] [i_21] [i_21] [i_14 - 2] = arr_20 [i_15] [i_14] [i_15] [i_15];
                            arr_70 [i_15] = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) arr_53 [i_21] [i_15] [i_14] [i_11] [i_11] [i_10])))));
                        }
                        var_42 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_10 - 2] [i_14 - 1] [i_14 + 1] [i_14]))));
                    }
                } 
            } 
        }
        for (long long int i_22 = 1; i_22 < 14; i_22 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 2) 
            {
                for (signed char i_24 = 1; i_24 < 11; i_24 += 2) 
                {
                    {
                        arr_79 [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_7)) | (arr_43 [i_22 - 1] [i_10 + 2] [i_10 + 1])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_25 = 2; i_25 < 14; i_25 += 2) 
                        {
                            arr_83 [i_10] [i_22 + 1] [i_23] [i_23] [i_24 + 3] [i_22] [1LL] = ((/* implicit */long long int) arr_43 [i_22] [i_22] [i_25]);
                            var_43 += ((/* implicit */_Bool) (unsigned short)15425);
                            arr_84 [i_25] [i_25 - 2] [i_22] [i_25] [i_25] = ((/* implicit */_Bool) 311349582432898013ULL);
                            var_44 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                            arr_85 [i_22] [i_22] [i_23] [i_22] [i_22] = ((/* implicit */unsigned char) arr_5 [i_22 + 1] [i_22 + 1]);
                        }
                        arr_86 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */short) arr_0 [i_22]);
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) arr_75 [i_22] [i_22] [i_22 - 1] [i_22] [i_22] [6ULL]))));
            /* LoopSeq 4 */
            for (unsigned long long int i_26 = 1; i_26 < 14; i_26 += 1) /* same iter space */
            {
                var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) ((((/* implicit */unsigned int) arr_3 [i_26] [i_10 - 2] [i_26])) > ((-(arr_87 [i_26] [i_26] [i_10 - 2] [i_26 + 1]))))))));
                arr_90 [i_22] [(short)8] [i_22] = ((/* implicit */_Bool) arr_19 [i_22] [i_22] [i_22] [i_26 - 1]);
            }
            for (unsigned long long int i_27 = 1; i_27 < 14; i_27 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (signed char i_29 = 0; i_29 < 15; i_29 += 4) 
                    {
                        {
                            arr_102 [i_22] [i_28] [i_27] [i_27] [i_22] [i_22] = ((/* implicit */unsigned char) (-(2072299330049146204ULL)));
                            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) arr_16 [i_27] [i_27]))));
                        }
                    } 
                } 
                arr_103 [i_27] [i_22] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (arr_18 [i_10] [i_22] [i_22 - 1] [i_22 - 1])));
                /* LoopSeq 1 */
                for (unsigned char i_30 = 0; i_30 < 15; i_30 += 4) 
                {
                    arr_107 [i_10] [i_22] = ((/* implicit */unsigned short) 7687646724933775112ULL);
                    /* LoopSeq 1 */
                    for (signed char i_31 = 0; i_31 < 15; i_31 += 3) 
                    {
                        arr_110 [i_10] [i_22] [i_10] [i_30] [i_30] = ((/* implicit */unsigned short) var_8);
                        var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-117)) && (((/* implicit */_Bool) var_9))))))))));
                        arr_111 [i_10] [i_22] [i_27] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) arr_48 [i_22 - 1]))));
                        var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) arr_9 [i_27] [i_27] [i_22]))));
                    }
                }
                arr_112 [i_27] [i_22 + 1] [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_44 [i_10 - 1] [i_10] [i_10]))));
                var_50 = ((/* implicit */unsigned int) arr_44 [9] [i_22] [i_10]);
            }
            for (unsigned long long int i_32 = 1; i_32 < 14; i_32 += 1) /* same iter space */
            {
                var_51 += ((/* implicit */unsigned long long int) arr_9 [i_32 + 1] [i_22 + 1] [i_10]);
                var_52 = ((/* implicit */_Bool) arr_98 [i_32] [i_32 + 1] [i_32] [i_32] [i_32] [i_32]);
            }
            for (unsigned long long int i_33 = 0; i_33 < 15; i_33 += 4) 
            {
                arr_118 [i_10] [i_22] [i_10] [i_33] = ((/* implicit */short) (+(((((/* implicit */int) arr_106 [i_22])) / (((/* implicit */int) arr_15 [i_33] [i_33] [i_22] [i_33] [i_33]))))));
                /* LoopSeq 3 */
                for (unsigned int i_34 = 0; i_34 < 15; i_34 += 1) 
                {
                    arr_121 [i_22] [i_22] [i_22] [i_22] [i_22] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_11))) <= (((/* implicit */int) ((unsigned char) 10328274258011865768ULL)))));
                    /* LoopSeq 2 */
                    for (short i_35 = 0; i_35 < 15; i_35 += 4) 
                    {
                        arr_124 [i_35] [i_35] [i_22] [i_35] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_119 [i_10 - 2]))));
                        arr_125 [i_10] [i_22] [i_22] [i_34] [i_35] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_39 [i_10] [i_22]))));
                        arr_126 [i_10] [i_10] [i_33] [i_22] = ((/* implicit */_Bool) (+((~(arr_115 [i_22])))));
                    }
                    for (unsigned char i_36 = 4; i_36 < 13; i_36 += 3) 
                    {
                        arr_131 [i_22] [i_22] [i_22 + 1] [i_33] [i_34] [i_36 - 4] [i_34] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_91 [i_22] [i_22] [i_22 - 1]))));
                        var_53 = ((/* implicit */signed char) arr_42 [i_22]);
                        arr_132 [i_10] [i_10] [i_22] [i_34] [i_22] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_11))))) | (var_13)));
                        arr_133 [i_10] [i_22] [i_34] [i_22] = ((/* implicit */unsigned char) arr_42 [i_22]);
                    }
                }
                for (unsigned char i_37 = 0; i_37 < 15; i_37 += 3) 
                {
                    var_54 = ((/* implicit */unsigned short) arr_44 [i_10] [i_22] [i_10]);
                    arr_137 [i_10] [i_10] [i_22] [i_22] [i_22] [i_37] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_130 [i_10 - 2] [i_10 - 2] [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22]))));
                    arr_138 [i_22] [i_37] [i_33] [i_22] = ((/* implicit */unsigned char) arr_72 [i_22] [i_22 + 1] [i_33]);
                    arr_139 [i_37] [i_22] [i_22] [i_10] = ((/* implicit */unsigned char) 2724958370U);
                }
                for (unsigned int i_38 = 0; i_38 < 15; i_38 += 1) 
                {
                    var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) arr_88 [i_33]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_39 = 0; i_39 < 15; i_39 += 3) /* same iter space */
                    {
                        var_56 += ((/* implicit */unsigned short) arr_88 [i_33]);
                        var_57 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
                    }
                    for (unsigned int i_40 = 0; i_40 < 15; i_40 += 3) /* same iter space */
                    {
                        arr_149 [i_22] [i_38] [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_43 [i_10 - 2] [i_10] [i_10 - 2]))));
                        var_58 += ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
                        var_59 = ((/* implicit */short) (-((~(12282036897694092711ULL)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_41 = 1; i_41 < 14; i_41 += 4) 
                    {
                        var_60 = ((/* implicit */unsigned short) max((var_60), (((/* implicit */unsigned short) var_3))));
                        arr_152 [i_41] [i_41] [i_41] [i_22 + 1] [i_22] = ((/* implicit */unsigned int) (~(arr_108 [i_10] [i_10 - 2] [i_22 - 1] [i_22 - 1] [i_22])));
                    }
                }
            }
            var_61 = ((/* implicit */unsigned long long int) arr_117 [i_22]);
            arr_153 [i_22] [i_22] [i_22] = ((/* implicit */int) -7193347148075826275LL);
        }
        var_62 = ((/* implicit */unsigned char) min((var_62), (((/* implicit */unsigned char) ((unsigned long long int) var_4)))));
    }
    for (unsigned long long int i_42 = 2; i_42 < 13; i_42 += 3) /* same iter space */
    {
        arr_157 [i_42] = (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [(unsigned short)8] [i_42] [i_42] [(unsigned short)8])), (arr_28 [i_42 - 1])))));
        var_63 += ((/* implicit */long long int) ((short) max((arr_123 [i_42] [i_42] [i_42 - 2] [i_42] [i_42]), (arr_123 [i_42] [i_42] [i_42 - 2] [i_42 - 2] [i_42 + 1]))));
        arr_158 [i_42] = ((((/* implicit */unsigned long long int) (~(min((arr_2 [i_42] [i_42]), (((/* implicit */long long int) (unsigned short)15890))))))) != (min((arr_101 [i_42] [i_42] [i_42]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_134 [(signed char)10] [10ULL] [i_42] [i_42])) * (((/* implicit */int) (_Bool)1))))))));
        var_64 = ((/* implicit */unsigned char) (_Bool)1);
    }
    var_65 = var_11;
    /* LoopSeq 1 */
    for (unsigned char i_43 = 0; i_43 < 13; i_43 += 4) 
    {
        var_66 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
        /* LoopSeq 1 */
        for (_Bool i_44 = 0; i_44 < 1; i_44 += 1) 
        {
            var_67 += ((/* implicit */unsigned short) max(((+(arr_114 [i_44] [i_43] [i_43]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_119 [i_44]))))) | (((long long int) arr_146 [i_43])))))));
            arr_164 [i_43] [i_44] [i_44] = ((/* implicit */unsigned short) arr_43 [i_43] [i_43] [i_44]);
            var_68 += ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_49 [i_43] [i_43] [i_44] [i_43] [i_44]))))));
        }
        /* LoopSeq 2 */
        for (signed char i_45 = 1; i_45 < 10; i_45 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_46 = 0; i_46 < 13; i_46 += 2) 
            {
                for (int i_47 = 2; i_47 < 12; i_47 += 1) 
                {
                    {
                        var_69 = ((/* implicit */unsigned short) min((var_69), (((/* implicit */unsigned short) max((18135394491276653602ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_6) && (((/* implicit */_Bool) (unsigned char)255)))))))))))));
                        var_70 = ((/* implicit */_Bool) min((var_70), (((/* implicit */_Bool) arr_88 [i_46]))));
                        arr_173 [i_43] [i_45] [i_45] [i_45] = ((/* implicit */short) arr_170 [i_46] [i_46] [i_46] [i_46]);
                        var_71 += ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) arr_160 [3])), ((+(arr_140 [i_43])))))));
                        var_72 = ((/* implicit */unsigned long long int) (~(max(((~(((/* implicit */int) arr_58 [i_43] [i_47 + 1] [i_47 - 1] [i_45] [i_45] [i_47 - 1] [i_45 + 1])))), (((/* implicit */int) ((unsigned char) arr_151 [i_43] [i_43])))))));
                    }
                } 
            } 
            var_73 = ((/* implicit */unsigned int) min((var_73), (((/* implicit */unsigned int) ((unsigned char) arr_161 [i_45] [(unsigned char)12] [i_43])))));
            var_74 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_43] [i_43] [i_43] [i_45]))))) >= ((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_135 [i_43] [i_43] [i_45] [i_43])))))));
            arr_174 [i_43] [i_45] [i_45] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_14 [i_43] [i_45] [i_43])))), (((/* implicit */int) arr_92 [i_45]))));
        }
        for (signed char i_48 = 1; i_48 < 10; i_48 += 4) /* same iter space */
        {
            arr_178 [i_48] [i_48] [i_48] = ((/* implicit */short) max((((/* implicit */int) (!((_Bool)1)))), ((-(((/* implicit */int) ((_Bool) arr_171 [i_48] [i_48])))))));
            var_75 = ((/* implicit */_Bool) min((var_75), (((/* implicit */_Bool) min(((-(((/* implicit */int) arr_48 [0])))), (((/* implicit */int) min(((!(arr_77 [i_43]))), (var_6)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_49 = 3; i_49 < 11; i_49 += 3) 
            {
                var_76 += ((7833638806704271133ULL) << (((arr_63 [i_49 + 1] [i_48 + 3]) + (5343272897150546889LL))));
                var_77 = ((/* implicit */short) ((arr_43 [i_49 + 2] [i_48 + 3] [i_48]) / (arr_43 [i_49 + 1] [i_48 + 2] [i_49])));
            }
            for (unsigned char i_50 = 0; i_50 < 13; i_50 += 1) 
            {
                arr_185 [i_50] [i_48] [i_43] = ((unsigned short) var_2);
                arr_186 [i_48] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_48] [i_48] [i_48] [i_48]))));
                var_78 = ((/* implicit */signed char) (~((-(arr_3 [i_48] [i_48] [i_48])))));
            }
        }
        arr_187 [i_43] = ((/* implicit */unsigned char) arr_140 [i_43]);
    }
}
