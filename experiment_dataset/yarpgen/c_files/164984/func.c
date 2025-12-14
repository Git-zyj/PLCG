/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164984
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_17)), (arr_1 [10ULL])))), (((var_8) / (((/* implicit */unsigned long long int) var_9)))))) / (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (var_12))), (((/* implicit */int) var_17)))))));
        arr_2 [i_0] = ((/* implicit */signed char) var_15);
    }
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (int i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                for (unsigned char i_4 = 2; i_4 < 11; i_4 += 3) 
                {
                    {
                        arr_13 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (((unsigned short) var_5)))))));
                        var_19 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-81))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1 + 1] [9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)124))))) : (max((((/* implicit */unsigned long long int) arr_7 [i_1])), (8523971687158804616ULL)))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    {
                        arr_25 [i_7] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((7U), (((/* implicit */unsigned int) var_17))))) ? ((+(var_13))) : (((/* implicit */unsigned int) var_12)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) var_16);
                            var_22 -= var_17;
                            var_23 = arr_23 [i_1];
                            var_24 ^= (((~(((/* implicit */int) arr_12 [i_8] [i_7 - 1] [i_6] [i_5] [i_1 - 2])))) / (((/* implicit */int) arr_21 [i_7] [i_7 + 2] [i_8] [i_8] [i_8] [i_8])));
                            var_25 = ((unsigned int) ((unsigned long long int) var_0));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            arr_31 [7U] [i_5] [(_Bool)1] [i_1] [i_9] = (-(var_0));
                            var_26 = ((/* implicit */unsigned char) (((!(var_1))) || (((/* implicit */_Bool) ((unsigned char) var_17)))));
                            arr_32 [i_1 - 3] [i_1] [i_6] [i_6] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)116)) ? (741431540) : (((/* implicit */int) (unsigned short)12093))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((var_0), (((/* implicit */int) arr_23 [i_1]))))))) && (((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_2)), (0LL))))))));
            arr_37 [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) (signed char)103)))), ((!(((/* implicit */_Bool) var_8))))))), (max((((((/* implicit */_Bool) arr_30 [i_1] [(signed char)11] [10LL] [i_1] [i_10] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_13))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) | (((/* implicit */int) arr_23 [i_1])))))))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    {
                        var_28 -= ((/* implicit */unsigned short) var_9);
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_21 [i_12] [(unsigned char)2] [i_10] [i_10] [i_10] [i_1 - 3])), (((((/* implicit */_Bool) arr_6 [i_10] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-109))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))), (var_14))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)120)), (-11))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned int) ((short) ((short) arr_11 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1])));
        }
        for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [1U] [i_1] [i_13 - 1] [i_13])) ? (arr_28 [2ULL] [i_1] [i_13] [i_13 + 1] [i_13]) : (((/* implicit */long long int) arr_10 [i_1] [i_13] [i_13] [i_1]))))) ? (((((/* implicit */_Bool) arr_10 [i_13] [9] [i_13] [i_1])) ? (arr_28 [i_13] [8LL] [i_13] [i_13 + 1] [i_13]) : (((/* implicit */long long int) arr_10 [i_1 - 1] [i_13 - 1] [i_13 + 1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_10 [i_13] [i_13] [i_13] [i_1]))))));
            /* LoopSeq 3 */
            for (int i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                arr_49 [i_14] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_7 [i_1]))))));
                /* LoopSeq 3 */
                for (signed char i_15 = 1; i_15 < 12; i_15 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_16 = 4; i_16 < 11; i_16 += 4) 
                    {
                        var_32 &= ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */long long int) var_0)) : (arr_30 [i_1] [i_1] [(_Bool)0] [i_16] [i_1] [i_1]))), (((/* implicit */long long int) (+(((/* implicit */int) (short)1))))))))));
                        var_33 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(var_10)))), (max((((unsigned int) 338780631290619988ULL)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_1 - 1] [i_13 - 1] [i_14])) || (((/* implicit */_Bool) var_9)))))))));
                        arr_54 [i_1 - 1] [i_1] [i_1] [i_15] [i_16 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (0U) : (var_13)));
                        arr_55 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)7] = ((/* implicit */unsigned short) var_4);
                    }
                    /* vectorizable */
                    for (unsigned int i_17 = 1; i_17 < 12; i_17 += 3) 
                    {
                        var_34 = arr_43 [i_1] [i_14] [(unsigned char)8];
                        arr_58 [i_17 + 1] [i_1] [i_13] [3U] [i_13] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) var_11);
                        var_35 = ((/* implicit */_Bool) min((var_35), (((var_16) || (((/* implicit */_Bool) arr_35 [i_1 - 3]))))));
                        arr_59 [i_1] [12ULL] [i_14] [i_14] [i_14] = ((/* implicit */long long int) var_14);
                    }
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        var_36 = var_7;
                        arr_63 [12ULL] [i_13] [i_1] [i_1] [i_18] [i_13 - 1] [i_1] = ((/* implicit */unsigned short) (short)23640);
                    }
                    arr_64 [i_1] [i_14] [i_13 - 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))))), (var_11)))) ? (max((((/* implicit */long long int) max((1402860765), (((/* implicit */int) arr_53 [i_13] [i_13 - 1] [i_14] [i_15]))))), (max((arr_50 [i_15 - 1] [i_14] [i_13] [i_1]), (((/* implicit */long long int) arr_60 [i_15] [i_14] [i_13 + 1] [i_1])))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_45 [i_1] [i_1]))))));
                    var_37 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_3 [i_15 + 1] [i_13 - 1])))) ? (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_17 [0ULL] [i_14] [0ULL]))))), (max((var_0), (((/* implicit */int) arr_39 [(unsigned char)1] [i_14] [i_13] [(unsigned char)8]))))))) : (max((((/* implicit */long long int) arr_52 [i_15 - 1] [8U] [i_15 + 1] [8U] [i_15 + 1])), (443467903223495324LL)))));
                }
                for (unsigned char i_19 = 1; i_19 < 12; i_19 += 3) 
                {
                    var_38 -= ((_Bool) ((((/* implicit */_Bool) ((arr_51 [i_1] [i_13] [i_19] [i_1 + 1]) ? (((/* implicit */int) arr_12 [i_1] [i_1 - 1] [5LL] [i_1] [i_1])) : (((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1 - 3]))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_16)), (arr_34 [(unsigned short)0])))) : ((-(-8270627532123355856LL)))));
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)511))))))) : (((((/* implicit */_Bool) (+(var_14)))) ? (max((arr_40 [i_19] [i_14] [i_13 + 1] [i_1]), (3474630134U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) != (((/* implicit */int) var_11))))))))));
                    var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
                    arr_67 [i_1] [i_1] [1] [i_13 + 1] [i_13 + 1] [i_19] = (-((+(((/* implicit */int) arr_12 [i_1] [i_13] [i_1 - 3] [i_19 - 1] [i_19])))));
                }
                /* vectorizable */
                for (signed char i_20 = 0; i_20 < 13; i_20 += 3) 
                {
                    var_41 = ((/* implicit */int) arr_28 [i_1 - 1] [i_1] [i_13 - 1] [i_13 + 1] [i_20]);
                    arr_71 [i_1] [i_14] [i_14] [(unsigned char)10] [7] [i_1] = (~(((((/* implicit */_Bool) 338780631290620003ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_1 - 3] [i_13] [i_14] [i_20]))) : (arr_60 [i_20] [(_Bool)1] [i_13 - 1] [i_1 - 1]))));
                }
            }
            /* vectorizable */
            for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
            {
                var_42 = ((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_21 + 1] [i_21 + 1] [i_13] [9LL] [i_13 - 1] [i_1 - 3]))));
                arr_76 [i_1] [i_1] = ((/* implicit */signed char) var_10);
                /* LoopSeq 2 */
                for (long long int i_22 = 3; i_22 < 12; i_22 += 3) 
                {
                    var_43 = ((/* implicit */_Bool) ((unsigned long long int) arr_33 [7ULL] [i_21 + 1] [6U]));
                    arr_80 [i_1] [i_1] [i_21] [i_1 - 1] = ((_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_7))));
                }
                for (int i_23 = 0; i_23 < 13; i_23 += 4) 
                {
                    var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)15))))) == (((((/* implicit */int) var_4)) >> (((/* implicit */int) arr_56 [i_1] [i_1] [i_21] [i_23] [i_21 + 1] [i_23]))))));
                    var_45 = ((/* implicit */signed char) 2827157358U);
                }
            }
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_25 = 0; i_25 < 13; i_25 += 3) 
                {
                    var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) & (((arr_11 [(short)2] [(_Bool)0] [i_13] [i_13 + 1] [(_Bool)0] [i_1 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2))) : (var_8)))))))));
                    arr_87 [i_1] [i_1] = arr_7 [(unsigned short)6];
                    arr_88 [i_1] [i_1] [i_24 - 1] [i_25] [i_25] = ((/* implicit */short) (~((~(arr_27 [i_24 - 1] [i_1] [i_1 - 1] [i_13 - 1] [i_25])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_26 = 1; i_26 < 10; i_26 += 4) 
                    {
                        var_47 += ((max((((/* implicit */unsigned int) arr_65 [i_1 - 3] [i_24] [i_26] [i_26] [(_Bool)1] [i_26 + 3])), (arr_40 [i_1 - 3] [i_1] [i_24 - 1] [i_26]))) != (((/* implicit */unsigned int) max((max((arr_35 [i_1]), (((/* implicit */int) (short)804)))), ((+(((/* implicit */int) var_5))))))));
                        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (~(arr_6 [i_25] [i_13 - 1]))))));
                        arr_92 [i_13 + 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) max((arr_41 [i_1] [i_24 - 1] [i_1 + 1] [i_1]), (arr_41 [i_1] [i_24 - 1] [i_1 + 1] [i_1]))));
                        var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) max((max((arr_26 [i_24] [i_26 + 2] [i_26 + 3] [i_26] [i_26 + 2]), (((/* implicit */unsigned int) (_Bool)1)))), (max((arr_26 [1] [i_26 + 2] [i_26 - 1] [i_26 + 3] [i_26 - 1]), (arr_26 [i_13] [i_26 + 2] [i_26 - 1] [i_13] [i_26 + 2]))))))));
                    }
                }
                var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(arr_3 [i_1] [(_Bool)1])))), (max((arr_18 [i_1] [i_13] [i_13] [(unsigned char)10]), (((/* implicit */unsigned int) (unsigned short)55119))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_45 [i_1] [i_1])), (var_10)))) : (arr_26 [i_24] [(signed char)8] [i_13] [i_13] [i_1 + 1])));
                var_51 *= ((/* implicit */unsigned short) (-(var_3)));
                var_52 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10))) * ((+(var_8))))), (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_6)), (arr_81 [i_24 - 1] [i_13 + 1] [(short)9] [i_1] [i_1 - 2]))))))));
            }
            var_53 = ((/* implicit */int) (signed char)0);
            arr_93 [i_1] [i_1 - 1] [i_13] = ((/* implicit */signed char) ((int) arr_17 [(signed char)0] [i_1] [i_1]));
            arr_94 [(signed char)10] [i_1] = ((/* implicit */long long int) 4294967295U);
        }
        for (unsigned long long int i_27 = 1; i_27 < 12; i_27 += 3) /* same iter space */
        {
            arr_98 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_57 [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_27]))))));
            var_54 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_33 [i_1 - 3] [i_27] [i_1 + 1])) ? (var_3) : (((/* implicit */int) arr_33 [i_1] [i_27] [i_1 + 1])))), (((/* implicit */int) (signed char)114))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_28 = 0; i_28 < 23; i_28 += 3) 
    {
        var_55 = ((/* implicit */unsigned long long int) ((unsigned int) var_17));
        arr_102 [i_28] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_101 [i_28])) && (((/* implicit */_Bool) arr_101 [i_28]))));
        var_56 = ((/* implicit */short) ((2827157353U) == (((/* implicit */unsigned int) var_12))));
        var_57 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_99 [i_28] [16U]))) & (arr_101 [i_28]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_100 [i_28]))))))));
    }
    var_58 = ((/* implicit */int) var_5);
}
