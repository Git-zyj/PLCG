/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101505
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    arr_8 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) var_12))))) < (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (min((17216310738307856744ULL), (17216310738307856744ULL)))))));
                    var_14 = ((/* implicit */short) min((((arr_7 [i_0] [i_1] [i_2] [i_2]) > (arr_7 [i_2] [i_1] [i_2] [i_2]))), ((!(((/* implicit */_Bool) arr_4 [i_1]))))));
                    var_15 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) min((arr_0 [i_0] [i_0]), (((/* implicit */signed char) arr_1 [i_0])))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) < (var_1))))));
                }
                for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    arr_11 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-111)) < (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))))) < (((arr_4 [i_0]) & (var_6))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 4; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 3; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_6) : ((+(var_6)))))), (max((((/* implicit */unsigned long long int) arr_2 [i_1])), (((((/* implicit */_Bool) var_1)) ? (1230433335401694871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 2; i_8 < 13; i_8 += 4) 
                        {
                            var_17 = ((/* implicit */_Bool) ((long long int) (unsigned char)1));
                            var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned char)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 853776448504389773ULL)) && (((/* implicit */_Bool) (unsigned char)1)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0]))) / (var_8)))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            var_19 += ((/* implicit */signed char) ((unsigned int) (+(var_3))));
                            arr_28 [i_0] [i_9] [i_6] [i_0] [i_9] [i_9] [i_6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_6 - 1] [i_7] [i_6 - 1]))) ^ (arr_12 [i_0] [i_0] [i_0] [i_0]));
                            arr_29 [i_0] [i_1] [i_6] [i_7] [i_0] [i_6] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)125)))) & (((((/* implicit */int) (unsigned char)248)) << (((var_3) - (4551770813191723423LL)))))));
                            arr_30 [i_0] [i_0] [i_1] [i_6] [i_0] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_12 [i_9] [i_7] [i_6] [i_1])));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_3))));
                        var_21 = ((/* implicit */signed char) (!(var_5)));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
                        {
                            arr_38 [i_0] = ((/* implicit */unsigned short) ((((unsigned long long int) var_0)) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125)))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_16 [i_1] [i_1] [i_6] [i_6] [i_6 - 1] [i_1]))));
                            var_23 = ((/* implicit */signed char) min((var_23), (var_4)));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_8)))) && (((/* implicit */_Bool) ((var_8) & (var_6))))));
                        }
                        for (int i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
                        {
                            var_25 += ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)896))) & (var_6)))));
                            arr_43 [i_1] [i_0] [i_0] [i_11] [i_1] [i_13] = (+((+(var_1))));
                            arr_44 [i_0] [i_0] [i_0] = arr_24 [i_0] [i_1] [i_6] [i_11];
                        }
                        var_26 |= ((/* implicit */short) ((unsigned long long int) arr_13 [i_0] [i_6 - 1] [i_6 - 1] [i_11]));
                    }
                    var_27 *= ((/* implicit */unsigned short) 1230433335401694872ULL);
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        for (int i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned short) var_11);
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_16] [i_1])) / (((/* implicit */int) (signed char)116))));
                                arr_53 [i_16] [i_15] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_15] [i_14] [i_14] [i_0])) ? (arr_7 [i_15] [i_14] [i_14] [i_1]) : (((/* implicit */unsigned int) arr_51 [i_15 - 1] [i_15 - 1] [i_15] [i_15 - 1] [i_15] [i_1]))));
                            }
                        } 
                    } 
                    var_30 = arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1];
                }
                /* LoopSeq 3 */
                for (long long int i_17 = 3; i_17 < 12; i_17 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (-((-(arr_13 [i_17] [i_17 - 1] [i_17] [i_1]))))))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((3697096654928407377LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49720))))))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_17 - 3])))))));
                }
                for (long long int i_18 = 3; i_18 < 12; i_18 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_18] [i_18] [i_18 - 1] [i_18])) ? ((+(-123709212))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_18] [i_18] [i_18 + 2] [i_18] [i_18 + 1] [i_18]))) >= (arr_12 [i_18 + 2] [i_18 - 2] [i_18 + 2] [i_18]))))));
                    var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */int) arr_50 [i_0] [i_1])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_18 - 1] [i_18] [i_18] [i_18] [i_18 + 1] [i_18 + 1])))))))));
                    var_35 ^= ((/* implicit */_Bool) (-(((int) var_7))));
                }
                /* vectorizable */
                for (long long int i_19 = 3; i_19 < 12; i_19 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */short) var_7);
                    arr_61 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_14 [i_19 - 1] [i_19] [i_19] [i_19 - 1] [i_19] [i_19]);
                    arr_62 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_19 - 3] [i_19]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_20 = 1; i_20 < 11; i_20 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_21 = 3; i_21 < 11; i_21 += 4) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)56)) < (((/* implicit */int) (_Bool)1))))))))));
                            var_38 = ((/* implicit */short) arr_41 [i_0] [i_1] [i_19 - 2] [i_20 + 3] [i_19 + 2] [i_21 + 3] [i_19]);
                        }
                        for (unsigned long long int i_22 = 3; i_22 < 12; i_22 += 4) 
                        {
                            arr_71 [i_0] [i_1] [i_19] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_19] [i_19 + 1] [i_22 - 2] [i_22])) & (((/* implicit */int) arr_16 [i_0] [i_1] [i_19] [i_19 + 1] [i_20 + 3] [i_22 - 3]))));
                            var_39 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_22] [i_22] [i_22] [i_20] [i_19 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_22 - 1] [i_22] [i_22] [i_22 - 3] [i_19 - 3]))) : (var_7)));
                            var_40 = ((/* implicit */unsigned short) arr_37 [i_0] [i_0] [i_0] [i_1] [i_19] [i_20] [i_22]);
                            arr_72 [i_0] [i_0] [i_1] [i_19 + 2] [i_20 + 1] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_22 + 2] [i_22 - 2] [i_22] [i_22] [i_22] [i_22 + 1])) ? (arr_17 [i_19 - 1] [i_20 + 1] [i_22] [i_22] [i_22 - 3] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 853776448504389773ULL))))))));
                        }
                        var_41 += ((/* implicit */signed char) ((17592967625205161852ULL) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)146)))))));
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */int) arr_70 [i_0] [i_1] [i_19] [i_20] [i_19 + 2] [i_1] [i_20 + 1])) ^ (((/* implicit */int) arr_70 [i_0] [i_1] [i_19 - 3] [i_20] [i_20] [i_1] [i_20 + 2])))))));
                        var_43 = ((/* implicit */unsigned short) 853776448504389759ULL);
                    }
                }
                arr_73 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((min(((-(17592967625205161838ULL))), (((/* implicit */unsigned long long int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)125)) < (((/* implicit */int) (unsigned char)37)))))));
                arr_74 [i_0] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (415357525U)))) : (((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0])))))))));
            }
        } 
    } 
    var_44 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(var_5)))) >= ((+(((((/* implicit */int) var_12)) | (((/* implicit */int) var_2))))))));
}
