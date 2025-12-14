/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108130
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_16 = arr_0 [i_0];
                arr_7 [i_0] [i_0] [i_1 - 1] = ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-116))) : (max((((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_1 + 3] [i_0] [i_0]))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_4 [i_0] [i_1] [i_0]))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_11)), (arr_0 [(_Bool)1])))), (((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */_Bool) 33553920LL);
        arr_13 [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 33553923LL)) ? (576460743713488896ULL) : (((/* implicit */unsigned long long int) -33553929LL)))), ((-(0ULL)))));
    }
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((8ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2)))));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) max((min((arr_5 [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_3]))))))), (((/* implicit */unsigned int) var_11))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 3; i_5 < 16; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                {
                    arr_27 [i_4] [i_5] [i_5] [i_6] = ((((/* implicit */int) arr_25 [i_6] [i_5 + 1])) ^ (((/* implicit */int) var_0)));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_32 [2LL] [i_6] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) (signed char)1);
                        }
                        arr_34 [i_4] [i_5] [i_5] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) arr_28 [i_6]);
                        var_18 &= ((/* implicit */short) arr_24 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1]);
                        var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) >= (896U)))));
                        var_20 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((long long int) (_Bool)1)));
                    }
                    for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_21 &= ((/* implicit */unsigned long long int) var_8);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            arr_42 [(signed char)19] [i_6] [i_6] [i_9] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_17 [i_5]) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (876U)));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_29 [i_5 - 3] [i_5 - 3] [i_5 - 2] [i_6]))));
                            var_24 = ((/* implicit */short) (+((+(((/* implicit */int) arr_6 [i_4] [i_5] [i_5]))))));
                            var_25 = ((/* implicit */signed char) ((arr_19 [i_4] [i_4] [i_10]) | (arr_19 [i_6] [i_9] [i_10])));
                        }
                        arr_43 [i_5] [i_5] [i_6] = (i_6 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((((((/* implicit */_Bool) arr_36 [i_6])) ? (arr_36 [i_6]) : (((/* implicit */int) arr_1 [i_6])))) - (179139570)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) << (((((((((/* implicit */_Bool) arr_36 [i_6])) ? (arr_36 [i_6]) : (((/* implicit */int) arr_1 [i_6])))) - (179139570))) - (478763217))))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (unsigned short)2))));
                    }
                    arr_44 [i_4] [i_4] [i_6] [i_6] = ((/* implicit */long long int) ((((unsigned long long int) var_7)) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551614ULL)))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            arr_48 [i_11] [(signed char)5] [(signed char)5] = ((unsigned char) (unsigned short)0);
            var_27 = ((((/* implicit */_Bool) (+(-33553931LL)))) ? (var_15) : ((+(9223372036854775807LL))));
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_10))))) ? (var_5) : (8ULL)))));
            arr_49 [i_4] [i_11] [i_11] = ((/* implicit */signed char) ((long long int) arr_30 [i_11] [i_11]));
            /* LoopNest 3 */
            for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        {
                            var_29 = arr_52 [i_4] [i_12] [i_4] [i_14];
                            arr_61 [i_11] [i_11] [i_12] [i_13] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 12U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4]))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_15 = 0; i_15 < 20; i_15 += 4) 
        {
            arr_65 [i_4] [i_4] = ((/* implicit */int) var_12);
            /* LoopSeq 4 */
            for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 1; i_17 < 16; i_17 += 4) 
                {
                    for (long long int i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        {
                            arr_73 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((arr_17 [i_17 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_17 [i_15]))))) : (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551615ULL)))));
                            arr_74 [i_4] [i_15] [i_16] [i_17] [i_18] = ((/* implicit */signed char) var_6);
                            var_30 = ((/* implicit */unsigned short) var_13);
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_16] [i_4])) * (((/* implicit */int) var_4)))))));
                var_32 = ((/* implicit */long long int) ((arr_59 [i_4] [i_15]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4])))));
            }
            for (long long int i_19 = 0; i_19 < 20; i_19 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 2) 
                {
                    arr_80 [11ULL] [(_Bool)1] [(_Bool)1] [i_19] [(_Bool)1] [i_20] = ((/* implicit */int) 4294967282U);
                    var_33 = (+(((/* implicit */int) arr_63 [i_15] [i_20])));
                }
                arr_81 [i_4] [i_15] [i_15] [i_19] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_4] [i_15]))) == (262112U)));
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 20; i_21 += 1) 
                {
                    for (signed char i_22 = 4; i_22 < 17; i_22 += 2) 
                    {
                        {
                            arr_87 [i_4] [i_15] [i_19] [i_21] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_78 [(short)14] [i_15] [i_15])) % (4194303LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [7ULL] [7ULL] [i_19] [i_21])))))) : (((((/* implicit */_Bool) arr_24 [11ULL] [i_21] [i_19] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_15]))) : (arr_5 [i_21] [i_19] [i_15])))));
                            arr_88 [i_19] = ((/* implicit */signed char) ((short) var_7));
                            var_34 = ((/* implicit */_Bool) (+((+(arr_3 [i_15])))));
                        }
                    } 
                } 
                arr_89 [i_4] [i_15] [i_15] [i_19] = ((/* implicit */unsigned long long int) ((unsigned int) arr_56 [i_4]));
            }
            for (short i_23 = 0; i_23 < 20; i_23 += 1) 
            {
                arr_92 [9] [i_15] [i_23] [i_15] = ((((/* implicit */_Bool) (~(33553929LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2))) : (var_5))));
                arr_93 [i_4] [i_23] [i_23] = ((/* implicit */_Bool) var_3);
                var_35 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) 896U)) : (arr_90 [i_4] [i_15] [i_23] [i_23])));
                var_36 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_52 [i_4] [8LL] [i_15] [i_23]))) ? (((/* implicit */int) arr_79 [i_4] [i_15] [i_15] [i_23])) : (((/* implicit */int) (signed char)113))));
            }
            for (unsigned short i_24 = 0; i_24 < 20; i_24 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_25 = 0; i_25 < 20; i_25 += 1) 
                {
                    var_37 = ((/* implicit */_Bool) (short)12);
                    var_38 -= ((/* implicit */unsigned short) (_Bool)1);
                }
                var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [7] [i_15] [i_4] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)8064)))))));
                arr_100 [i_4] = ((/* implicit */unsigned char) arr_96 [2LL] [i_15] [(signed char)2]);
            }
        }
        var_40 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_29 [i_4] [i_4] [i_4] [i_4]))));
    }
    /* vectorizable */
    for (short i_26 = 0; i_26 < 16; i_26 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_27 = 0; i_27 < 16; i_27 += 1) 
        {
            var_41 = ((((/* implicit */_Bool) arr_11 [i_26])) ? (arr_11 [i_27]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_26]))));
            var_42 = ((/* implicit */unsigned long long int) (~(arr_83 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])));
            arr_106 [i_26] [i_26] = ((/* implicit */signed char) ((short) arr_40 [i_26] [i_26] [i_27]));
            var_43 = ((/* implicit */_Bool) arr_26 [i_26] [i_27] [i_27]);
            arr_107 [i_26] = ((/* implicit */unsigned int) var_12);
        }
        var_44 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)3))));
    }
    var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_13))));
    var_46 = ((((/* implicit */_Bool) ((long long int) 4294967295U))) ? ((~(3ULL))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13))))), (var_14))));
}
