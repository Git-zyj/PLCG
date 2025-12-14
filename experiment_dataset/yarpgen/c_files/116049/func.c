/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116049
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
    var_14 = ((/* implicit */unsigned int) (unsigned char)252);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((_Bool) max((5322260133959561653ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_4] [(unsigned short)18] [i_0])))));
                                var_16 = ((/* implicit */unsigned char) ((unsigned int) max((arr_2 [i_3]), (arr_2 [i_0]))));
                                arr_12 [(_Bool)1] [i_3] [i_4] [i_1] [i_0] = ((/* implicit */signed char) (unsigned char)4);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_5 = 4; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        arr_16 [(short)9] [1U] [i_2] [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_14 [i_0] [i_1 - 2] [i_1 - 2] [i_5 - 2] [i_5 + 2]), (arr_14 [i_0] [i_1 - 2] [i_1 - 2] [i_5 - 2] [i_5 - 1]))))));
                        var_17 = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) arr_7 [i_1 - 2]))), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_5 + 2] [i_5] [i_1 - 1] [i_1 - 2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                        var_18 = ((/* implicit */long long int) min((var_18), (var_8)));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 4; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) (-(2147483647)))) ? ((~(var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [(signed char)19] [i_6 - 2] [i_6 - 2] [5])))))));
                        arr_19 [(_Bool)1] [(unsigned char)19] [i_2] [(signed char)1] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 2] [(_Bool)1] [i_6])) && (((/* implicit */_Bool) var_6))))));
                        var_20 += ((/* implicit */signed char) ((int) arr_2 [i_1]));
                    }
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((3358094163U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)96)), (var_6)))))))) ? (((/* implicit */int) (signed char)-127)) : (((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */int) min((arr_14 [i_0] [14LL] [i_2] [i_0] [i_1 - 1]), ((unsigned char)0)))) : (((/* implicit */int) (unsigned char)3))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 3; i_7 < 22; i_7 += 4) 
    {
        for (signed char i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 2; i_10 < 21; i_10 += 4) 
                    {
                        arr_31 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */signed char) max((((((/* implicit */int) ((signed char) 2111084365))) + (((/* implicit */int) min((var_13), (var_13)))))), (((/* implicit */int) var_10))));
                        arr_32 [(signed char)10] [i_8] [i_8] [i_9] [i_10 + 2] = ((/* implicit */int) ((long long int) 5322260133959561641ULL));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_12 = 2; i_12 < 19; i_12 += 4) 
                        {
                            arr_40 [i_7] [i_7 - 3] [(_Bool)1] [9U] [i_12] = ((/* implicit */signed char) arr_29 [i_7]);
                            arr_41 [i_7 - 2] [i_8] [(_Bool)1] [(_Bool)1] [i_11] [i_11] [i_12] |= ((/* implicit */short) ((var_10) && (var_5)));
                        }
                        for (unsigned char i_13 = 3; i_13 < 22; i_13 += 4) 
                        {
                            arr_44 [(unsigned char)8] [i_7] [6] [(unsigned char)20] [i_9] [i_11 - 1] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_11 + 2] [i_11] [(signed char)5] [i_11] [i_11 - 1] [i_11 + 3])) | (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) arr_27 [i_13 - 3])) : (((/* implicit */int) (_Bool)1))))));
                            arr_45 [i_7] [i_7] [i_9] [i_7] [9ULL] &= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_27 [i_7])) + (((/* implicit */int) arr_26 [i_7])))));
                            arr_46 [(_Bool)1] [i_11] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] = (~(((/* implicit */int) arr_20 [i_7 - 2])));
                        }
                        for (short i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_11))));
                            arr_49 [21LL] [i_9] [7U] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_9] [i_14])) / (((/* implicit */int) arr_24 [i_8] [i_9]))));
                            arr_50 [i_7] [i_11] [i_7] [i_9] [i_7] [i_8] [i_7] = ((/* implicit */_Bool) 5322260133959561629ULL);
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_36 [(_Bool)1] [i_7 - 1] [i_11 + 1]))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            arr_54 [i_15] [(signed char)20] [i_9] [i_8] [i_15] = ((/* implicit */short) ((signed char) var_12));
                            var_24 = ((/* implicit */signed char) var_9);
                            var_25 = ((/* implicit */int) arr_29 [i_7 - 2]);
                        }
                        var_26 *= arr_22 [i_7 - 2];
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 3; i_16 < 22; i_16 += 3) 
                    {
                        for (unsigned long long int i_17 = 1; i_17 < 19; i_17 += 4) 
                        {
                            {
                                arr_59 [i_7 + 1] [i_8] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                                arr_60 [i_7] [i_16] [i_16] [(unsigned char)21] [i_17 + 1] = ((/* implicit */signed char) 2111084365);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_18 = 4; i_18 < 21; i_18 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (unsigned char)77);
                        /* LoopSeq 2 */
                        for (int i_19 = 4; i_19 < 22; i_19 += 1) 
                        {
                            arr_67 [i_7 - 3] [i_19] [i_9] [i_18] [i_19 - 3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
                            arr_68 [i_7] [i_7 + 1] [i_19] [i_7 + 1] [6] [(_Bool)1] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) var_1)))));
                        }
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_33 [i_8] [i_8]))))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (unsigned char)255))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_37 [i_18 - 1])) + ((+(var_2)))));
                        }
                        /* LoopSeq 1 */
                        for (int i_21 = 0; i_21 < 23; i_21 += 3) 
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (-(((/* implicit */int) arr_70 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7])))))));
                            arr_75 [i_7 + 1] [i_7] [i_9] [i_18 + 1] &= ((/* implicit */signed char) var_2);
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_8])) > (((/* implicit */int) arr_22 [i_7 - 2])))))));
                            arr_76 [i_7 - 1] [(unsigned char)1] [(signed char)9] [11] [i_21] [(unsigned char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2132639150)) ? (((((/* implicit */long long int) arr_33 [i_9] [i_21])) / (var_8))) : (((((/* implicit */_Bool) 17575006175232LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_21]))) : (arr_34 [i_7] [i_7] [(_Bool)1] [(signed char)0])))));
                            var_33 *= ((/* implicit */short) var_5);
                        }
                        /* LoopSeq 2 */
                        for (int i_22 = 0; i_22 < 23; i_22 += 4) 
                        {
                            arr_81 [i_7 - 3] [8U] [i_9] = ((/* implicit */unsigned char) 6394730429328665649LL);
                            arr_82 [(signed char)4] [i_8] [i_9] [i_9] [i_8] [i_18] = ((unsigned int) ((((/* implicit */_Bool) -905346747)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_7] [i_8] [i_7] [i_18] [i_22])))));
                            arr_83 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] |= ((/* implicit */short) ((_Bool) ((long long int) arr_53 [i_7 + 1] [i_7 + 1])));
                            var_34 = ((/* implicit */unsigned long long int) var_3);
                            arr_84 [i_7] [i_22] [i_7] [i_18] [i_22] [i_18] = ((((/* implicit */_Bool) arr_64 [i_18] [i_8] [i_9] [i_8] [0] [i_8])) ? (arr_77 [i_7] [i_7] [i_9] [i_9] [(signed char)16] [i_22]) : (((/* implicit */int) arr_62 [i_22] [i_22] [i_22])));
                        }
                        for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 2) 
                        {
                            var_35 = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_7])) - (((((/* implicit */int) var_10)) / (((/* implicit */int) var_6))))));
                            arr_89 [(signed char)5] [(signed char)5] = ((/* implicit */unsigned long long int) ((((_Bool) var_3)) ? (((/* implicit */int) arr_43 [i_18 + 1] [i_8] [i_18 + 1] [17] [i_23] [i_8])) : ((~(((/* implicit */int) arr_62 [(unsigned char)19] [i_18] [i_23]))))));
                            arr_90 [i_7] [i_7] [i_7 - 2] = ((/* implicit */signed char) ((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_7 - 1] [i_7 - 3])))));
                            arr_91 [i_7 - 1] [i_8] [i_9] [i_9] [i_18 + 2] [i_18] [i_23] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) -297205147)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) ((signed char) arr_47 [i_8] [i_8] [i_8] [(short)0] [i_8]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [8U])) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) var_12))))) : (((unsigned int) var_10))))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) min((var_2), (((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((min((var_4), (arr_25 [i_7 - 2] [i_8] [i_7 - 2]))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (9200978444461831017ULL)))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (signed char)-6))))) >= (((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_24]))) : (var_3))))))));
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (178475181) : (((/* implicit */int) arr_27 [i_7 - 1]))))) ? (((/* implicit */int) ((signed char) arr_27 [i_7 - 2]))) : (((/* implicit */int) arr_27 [i_7 + 1])))))));
                        var_39 *= arr_29 [i_7 - 2];
                        var_40 *= ((/* implicit */short) ((((/* implicit */int) var_1)) == ((+((~(((/* implicit */int) var_1))))))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_99 [(_Bool)1] [7LL] [i_9] [i_26] [i_7] [i_7] = ((/* implicit */_Bool) 717741500);
                        arr_100 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_55 [i_7 - 1] [i_8] [i_9] [i_26])) || (((/* implicit */_Bool) arr_55 [i_7] [i_8] [i_9] [i_26])))) ? (((((/* implicit */_Bool) arr_98 [i_26] [7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_98 [i_7 + 1] [i_7 - 2])))) : (((/* implicit */int) (signed char)-37))));
                    }
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) var_2))));
    var_42 = ((/* implicit */unsigned char) var_11);
}
