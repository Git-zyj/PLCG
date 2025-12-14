/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112928
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
    var_19 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)31)), (min(((unsigned short)8792), (((/* implicit */unsigned short) (short)-1))))))), (((((/* implicit */_Bool) ((short) var_17))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (var_4))) : (((/* implicit */int) ((_Bool) var_12)))))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((/* implicit */int) ((short) arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1])))))))));
        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)8792))));
        var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_1 [i_0 + 1]))))))), (((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        arr_5 [(unsigned char)15] [i_1 - 1] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) arr_3 [i_1])));
        var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1])))))) ? (((/* implicit */int) ((signed char) arr_3 [i_1]))) : (((/* implicit */int) ((unsigned short) arr_4 [i_1 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_4 [8LL])) : (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))))));
    }
    for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            var_23 = ((/* implicit */int) ((unsigned long long int) (+(arr_10 [i_2] [i_2]))));
            var_24 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_8 [i_3])), (arr_10 [i_2] [i_2])));
            var_25 -= ((/* implicit */unsigned char) max((((/* implicit */short) ((signed char) (_Bool)1))), (((short) 4294967295U))));
        }
        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            arr_15 [i_2] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_4])) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_2])) : (((/* implicit */int) arr_12 [i_2] [i_4] [0]))))) ? (((/* implicit */long long int) ((int) arr_11 [i_2] [12U] [12U]))) : ((+(arr_7 [i_2]))))));
            /* LoopSeq 1 */
            for (short i_5 = 2; i_5 < 19; i_5 += 2) 
            {
                var_26 ^= ((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) min((arr_6 [i_5]), (arr_8 [i_2])))))));
                arr_18 [i_5] [i_4] [i_4] [(unsigned char)11] &= ((/* implicit */unsigned char) arr_13 [i_2] [i_5]);
            }
        }
        var_27 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_6 [i_2])))) : (((((/* implicit */_Bool) arr_4 [(short)16])) ? (arr_10 [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2])))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                {
                    var_28 -= ((/* implicit */short) arr_7 [i_6]);
                    arr_23 [i_2] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_2])))));
                    var_29 = ((/* implicit */short) ((int) arr_20 [i_2] [7] [i_7]));
                }
            } 
        } 
    }
    for (unsigned char i_8 = 2; i_8 < 9; i_8 += 2) 
    {
        var_30 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_8])) ? (((/* implicit */int) arr_6 [(_Bool)1])) : (((/* implicit */int) arr_22 [i_8] [i_8] [i_8 - 1] [i_8 - 1]))))));
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            arr_30 [i_9] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_8] [i_9]))) : (arr_3 [i_9])))) ? (max((((/* implicit */long long int) arr_11 [i_8] [i_8] [i_8])), (arr_14 [i_8] [i_9]))) : (((long long int) arr_29 [i_9] [i_8 - 1] [i_8])))), (((/* implicit */long long int) ((unsigned short) ((short) arr_17 [i_8] [14LL] [i_8 - 1] [i_8]))))));
            var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8 - 2]))));
            /* LoopSeq 4 */
            for (long long int i_10 = 1; i_10 < 7; i_10 += 1) 
            {
                arr_35 [i_10] [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) ((long long int) arr_27 [(unsigned char)8]));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        {
                            arr_41 [i_8 - 1] [i_8 - 1] [i_10] = ((/* implicit */short) arr_26 [i_12]);
                            arr_42 [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_9] [i_9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_11]))))) : (((/* implicit */int) arr_4 [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_32 [i_8 - 2] [(unsigned char)0] [i_10] [i_11])))))))) : (max((((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_12]))) : (arr_28 [i_8 - 1] [i_8 - 2] [i_8 - 1]))), (((/* implicit */unsigned int) ((unsigned char) (short)-19945)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    arr_46 [i_8] [i_8 - 1] [i_10] [i_8] [i_8 - 1] = (!(((/* implicit */_Bool) arr_8 [i_9])));
                    var_32 = max((((long long int) min((arr_4 [i_9]), (arr_4 [i_10 + 1])))), (((/* implicit */long long int) arr_45 [5] [i_9] [i_9] [i_13] [i_13])));
                    arr_47 [0LL] [i_10] [i_10] [i_8 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_8 - 1]))) ? (((((/* implicit */_Bool) arr_8 [(signed char)9])) ? (((/* implicit */int) arr_39 [i_8] [i_10] [i_8])) : (((/* implicit */int) arr_17 [i_8] [i_8 - 2] [i_8 - 1] [i_8 - 2])))) : (((/* implicit */int) ((short) arr_36 [i_10])))))) ? (((((/* implicit */_Bool) ((long long int) arr_0 [i_10 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_45 [i_8] [(short)1] [i_8] [(short)1] [i_13])))) : (min((arr_13 [i_8] [i_8]), (((/* implicit */long long int) arr_38 [(signed char)1] [i_8 - 1] [i_9] [i_10] [i_10] [i_13] [i_13])))))) : (((long long int) arr_4 [i_9]))));
                    var_33 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) min((arr_34 [i_10 + 3]), (arr_9 [i_13] [i_13])))))));
                }
                for (unsigned int i_14 = 2; i_14 < 9; i_14 += 3) 
                {
                    var_34 = ((long long int) (+(((/* implicit */int) ((unsigned short) arr_17 [(signed char)3] [i_9] [i_9] [i_8])))));
                    arr_52 [i_10] [i_9] [i_9] [i_9] [i_9] [i_10] = ((long long int) arr_39 [i_8] [i_10] [i_10]);
                }
                for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    var_35 &= ((/* implicit */short) ((unsigned int) (short)19752));
                    var_36 = (+(((/* implicit */int) arr_24 [i_8])));
                }
                var_37 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_8])) ? (((/* implicit */long long int) arr_37 [i_9] [i_8] [i_9] [i_8])) : ((-9223372036854775807LL - 1LL)))))), (max((((/* implicit */unsigned long long int) arr_12 [(signed char)4] [i_9] [i_9])), (max((((/* implicit */unsigned long long int) arr_27 [i_9])), (arr_25 [i_10 + 2])))))));
                var_38 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) ((unsigned char) arr_29 [i_8 - 2] [i_9] [i_9]))), (((int) arr_13 [i_8] [i_8]))))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_17 = 1; i_17 < 9; i_17 += 4) 
                {
                    arr_61 [i_8 + 1] [i_9] [i_8] [i_8 + 1] = ((/* implicit */signed char) ((_Bool) arr_27 [i_16]));
                    /* LoopSeq 2 */
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                    {
                        var_39 -= ((/* implicit */unsigned char) arr_37 [i_8] [i_8] [i_17] [i_18]);
                        arr_64 [i_8] [2LL] [i_8] [(_Bool)1] [i_8] [6LL] [6LL] = ((/* implicit */long long int) ((unsigned int) arr_58 [i_9] [(short)7] [0LL]));
                        var_40 = ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) arr_40 [i_18] [i_9] [(short)4] [i_9] [(short)4])));
                    }
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 3) /* same iter space */
                    {
                        var_41 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_8] [i_16] [i_8] [i_8])) ? (((/* implicit */int) arr_12 [i_16] [i_8] [i_8])) : (((/* implicit */int) arr_40 [(unsigned char)6] [i_16] [i_16] [i_16] [i_16]))))) ? (((/* implicit */unsigned long long int) arr_37 [i_19] [i_17 + 1] [i_8] [i_8])) : (((unsigned long long int) arr_10 [i_8 + 1] [i_8 - 1]))));
                        arr_68 [i_8] [i_8] [i_8] [i_17] [i_8] [i_8] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_3 [9]))))));
                        var_42 = ((/* implicit */short) ((signed char) arr_28 [i_9] [3ULL] [i_9]));
                    }
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_71 [i_20] [i_20] [i_20] [i_8 - 2] = min((arr_3 [i_9]), (((/* implicit */long long int) arr_24 [i_8])));
                    var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) arr_60 [i_16] [i_9] [i_8]))));
                    var_44 = ((short) ((long long int) arr_51 [i_8] [i_20] [i_8] [i_16] [i_20]));
                    var_45 += ((/* implicit */long long int) ((_Bool) ((long long int) (+(-7225249638721860922LL)))));
                }
                arr_72 [i_8] [i_8 - 2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_21 [i_8]), (((/* implicit */unsigned long long int) arr_50 [i_16])))))))), (arr_14 [i_8] [i_8 - 1])));
                var_46 -= ((long long int) ((signed char) (!(((/* implicit */_Bool) arr_7 [i_8 - 1])))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 2) /* same iter space */
            {
                var_47 &= ((/* implicit */unsigned char) arr_22 [i_8] [i_9] [i_8] [i_8]);
                var_48 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_9])), (arr_73 [i_8])))) ? (((/* implicit */unsigned long long int) ((long long int) arr_50 [i_8]))) : (((((/* implicit */_Bool) arr_1 [i_21])) ? (((/* implicit */unsigned long long int) arr_3 [i_21])) : (arr_60 [i_8 - 2] [i_8 + 1] [i_8 - 2]))))), (((/* implicit */unsigned long long int) max((((unsigned int) arr_66 [(signed char)0] [i_21] [i_21] [i_21] [i_21])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_8 - 1])) ? (((/* implicit */int) arr_63 [i_8 + 1] [(unsigned char)2] [(unsigned char)1] [i_21] [i_8] [i_21])) : (((/* implicit */int) arr_22 [i_8] [i_9] [i_21] [i_8]))))))))));
            }
            for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) 
            {
                var_49 = ((/* implicit */long long int) ((unsigned int) ((int) ((((/* implicit */_Bool) arr_58 [i_22] [i_9] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [4] [i_22] [i_9] [i_8 + 1]))) : (arr_10 [i_8] [i_8])))));
                /* LoopNest 2 */
                for (long long int i_23 = 2; i_23 < 9; i_23 += 2) 
                {
                    for (int i_24 = 2; i_24 < 6; i_24 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) arr_43 [i_8] [i_9] [i_22] [i_8] [i_24])));
                            arr_84 [i_22] [i_22] [i_22] [i_23 - 2] [i_9] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((long long int) arr_78 [4LL] [i_22] [i_9] [i_8]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 12LL))))) : (((/* implicit */int) arr_4 [i_24]))))));
                            var_51 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_9]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_25 = 0; i_25 < 10; i_25 += 2) 
                {
                    for (long long int i_26 = 0; i_26 < 10; i_26 += 4) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned long long int) ((_Bool) max(((short)14660), ((short)32757))));
                            var_53 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((short) arr_79 [i_25] [i_22] [i_9] [i_8]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2638403408033237922LL)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (short)19752))))) : (((unsigned int) arr_28 [i_8] [i_8 - 2] [i_8 + 1]))))));
                            arr_91 [i_9] [i_9] [i_22] [i_22] [i_26] [i_8 - 2] [0ULL] |= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_1 [i_8])))))) ? (arr_67 [(unsigned char)1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_25] [i_26])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_8] [i_8 - 2] [i_8] [i_8]))))) : (((/* implicit */int) arr_22 [i_8] [(short)16] [i_8] [i_26])))))));
                            var_54 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) arr_36 [i_22]))), ((-(arr_60 [i_22] [i_22] [i_9]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_27 = 2; i_27 < 7; i_27 += 3) 
                {
                    for (unsigned short i_28 = 0; i_28 < 10; i_28 += 4) 
                    {
                        {
                            arr_97 [i_27] [i_27] [i_27] = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_78 [i_9] [i_9] [i_9] [i_9]))))), ((~(((/* implicit */int) arr_34 [(short)6])))))));
                            var_55 = ((/* implicit */long long int) max((var_55), ((+(min((((/* implicit */long long int) arr_32 [i_22] [i_22] [i_22] [i_27])), (((((/* implicit */_Bool) arr_31 [i_8] [(_Bool)1] [i_27] [i_27])) ? (((/* implicit */long long int) ((/* implicit */int) arr_86 [i_8] [i_8 - 2] [i_9] [i_22] [i_8] [i_28]))) : (arr_49 [i_27 - 1] [i_9] [i_27 - 1] [i_27] [i_28])))))))));
                            var_56 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_9])) ? (((/* implicit */int) arr_51 [i_8] [i_27] [i_22] [i_27 + 3] [5U])) : (((/* implicit */int) arr_9 [i_8] [(unsigned char)7]))))))));
                            var_57 += ((/* implicit */unsigned char) ((signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) arr_77 [i_8 + 1] [i_8 + 1] [i_27] [i_28])) : (((/* implicit */int) (unsigned short)56744))))), (((long long int) (_Bool)1)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_29 = 0; i_29 < 10; i_29 += 4) 
                {
                    var_58 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) arr_13 [i_8] [(signed char)1]))), (min((arr_3 [12ULL]), (((/* implicit */long long int) arr_82 [i_9] [i_9] [i_22] [i_9] [i_9]))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_26 [i_29])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)17]))) : (arr_37 [i_29] [i_22] [i_9] [i_8 - 1]))), (min((((/* implicit */unsigned int) arr_39 [i_22] [i_29] [i_8])), (arr_93 [i_8] [i_9] [i_22] [i_29])))))) : (min((min((arr_75 [i_8] [i_8] [i_8]), (((/* implicit */long long int) arr_92 [i_22] [i_22] [i_22] [i_22])))), (((/* implicit */long long int) arr_77 [i_22] [i_22] [1LL] [i_8]))))));
                    arr_100 [i_8] [i_9] [0] [0] = ((/* implicit */short) arr_81 [(short)0] [(short)0] [i_22] [i_29]);
                }
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) /* same iter space */
                {
                    arr_103 [i_9] [i_9] [i_30] [i_9] [i_8] = ((/* implicit */short) (-(((unsigned int) ((_Bool) arr_55 [i_8])))));
                    var_59 = ((/* implicit */signed char) ((_Bool) arr_83 [i_8] [i_8] [i_8] [i_9] [i_22] [i_22] [i_30]));
                }
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
                {
                    var_60 ^= ((signed char) ((int) arr_22 [i_22] [i_9] [i_22] [7]));
                    arr_108 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) min((((/* implicit */long long int) arr_6 [i_31])), (arr_7 [i_8]))))) ? (min((((long long int) arr_96 [i_8 - 2] [i_9] [i_22] [(signed char)2])), (((/* implicit */long long int) ((unsigned short) arr_98 [i_31]))))) : (max((((/* implicit */long long int) (_Bool)1)), (-1LL)))));
                    var_61 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (short)-17359)), (-6929640479790162574LL)));
                }
            }
            arr_109 [i_8 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((short) arr_51 [i_9] [i_8] [i_9] [i_8] [i_8 - 1]))))));
            var_62 = ((/* implicit */int) min((var_62), (arr_1 [4LL])));
        }
        var_63 = ((/* implicit */unsigned short) arr_101 [7LL] [i_8] [i_8] [i_8]);
        arr_110 [2LL] = ((/* implicit */signed char) ((unsigned short) min((min((arr_74 [i_8] [i_8] [i_8 - 2] [i_8 - 2]), (arr_78 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_8 - 1] [i_8]))))))));
    }
}
