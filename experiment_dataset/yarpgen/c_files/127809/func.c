/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127809
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
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_18 &= ((/* implicit */signed char) ((int) (+(((/* implicit */int) (unsigned short)5106)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((unsigned short) arr_7 [i_1] [i_0 - 1] [i_2]))));
                                arr_11 [i_4] [i_3] [i_4] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 + 2] [i_0 - 1])))));
                            }
                        } 
                    } 
                }
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_20 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) -3645722581083938589LL)) ? (((/* implicit */int) (unsigned short)60445)) : (((/* implicit */int) var_17))))) * ((+(var_12)))))));
                    arr_15 [i_0] [i_1] [i_1] [(short)19] = ((/* implicit */short) (unsigned short)27931);
                    arr_16 [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)42))) + (var_11))))) & (((/* implicit */int) ((unsigned short) 2363507056219687719LL)))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (unsigned short)60430))));
                    var_22 = var_1;
                }
                arr_17 [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) var_5);
                /* LoopSeq 1 */
                for (short i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_28 [i_0] [i_8] [i_6 + 1] [i_6 - 1] [i_8] [i_8]))) ? (((((/* implicit */int) (unsigned char)213)) * (((/* implicit */int) arr_18 [i_0] [i_7] [i_1])))) : (((/* implicit */int) ((signed char) var_0)))));
                                arr_29 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] = arr_1 [i_0 + 1];
                                var_24 = ((/* implicit */long long int) ((unsigned int) arr_13 [i_0 - 1] [i_6 + 1] [i_6 - 1] [(short)16]));
                            }
                        } 
                    } 
                    arr_30 [i_1] = ((/* implicit */unsigned short) ((short) var_8));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (short i_10 = 2; i_10 < 13; i_10 += 1) 
        {
            for (short i_11 = 3; i_11 < 13; i_11 += 1) 
            {
                {
                    var_25 = ((/* implicit */int) 237745229U);
                    var_26 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)29)) && (((/* implicit */_Bool) (unsigned char)47)))))));
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) (~(arr_32 [i_9] [i_9])));
        var_28 *= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)5108)) : (((/* implicit */int) var_8))))) & (((unsigned int) var_10)));
        arr_38 [i_9] = ((/* implicit */signed char) (_Bool)1);
        var_29 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)60428))));
    }
    /* vectorizable */
    for (signed char i_12 = 3; i_12 < 16; i_12 += 1) 
    {
        arr_42 [i_12 - 1] [i_12] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)213))));
        /* LoopSeq 2 */
        for (long long int i_13 = 4; i_13 < 13; i_13 += 1) 
        {
            var_30 = ((/* implicit */long long int) (~(-1127276809)));
            arr_45 [i_12] = ((/* implicit */_Bool) (+(14101134435752084645ULL)));
        }
        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            var_31 = ((/* implicit */short) min((var_31), ((short)26622)));
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (((((/* implicit */_Bool) (unsigned short)28790)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218))) : (1250103714U))))))));
        }
        /* LoopSeq 4 */
        for (unsigned short i_15 = 0; i_15 < 17; i_15 += 1) 
        {
            arr_52 [12] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_12 - 3] [i_15] [i_12 - 1] [i_12 - 1] [i_15] [i_15])) || (((/* implicit */_Bool) arr_14 [i_12] [i_15]))));
            /* LoopSeq 1 */
            for (unsigned int i_16 = 1; i_16 < 15; i_16 += 4) 
            {
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (unsigned char)42))));
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (-(11163510405942100975ULL))))));
            }
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_35 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (660850183U)));
            var_36 = ((/* implicit */signed char) (short)26622);
        }
        for (unsigned short i_18 = 4; i_18 < 16; i_18 += 1) 
        {
            var_37 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 11163510405942100975ULL)) ? (arr_53 [i_12] [(signed char)10] [i_12 - 2] [i_18 + 1]) : (((/* implicit */unsigned long long int) 588985544))));
            var_38 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (3599161509901907119LL)))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 1) 
        {
            var_39 = ((/* implicit */short) -3599161509901907108LL);
            arr_65 [i_12] [i_12] [(short)6] = ((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_12 - 2]))));
            arr_66 [i_12] [i_12] [i_19] = ((/* implicit */int) (+(arr_23 [i_12 + 1] [i_19] [i_12 - 3] [i_19])));
            var_40 = ((/* implicit */long long int) (-(arr_13 [i_12 - 2] [i_19] [i_12 - 2] [i_12])));
        }
        /* LoopSeq 1 */
        for (long long int i_20 = 2; i_20 < 16; i_20 += 4) 
        {
            arr_71 [i_20] [i_20 - 1] [i_20] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16055)) ? (11087053736756588813ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (short)-27620)) : (-1));
            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
            /* LoopNest 3 */
            for (unsigned short i_21 = 0; i_21 < 17; i_21 += 1) 
            {
                for (long long int i_22 = 1; i_22 < 13; i_22 += 4) 
                {
                    for (unsigned char i_23 = 1; i_23 < 14; i_23 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (-(-1LL))))));
                            var_43 = ((/* implicit */unsigned short) var_14);
                        }
                    } 
                } 
            } 
        }
        arr_82 [i_12 - 1] [16U] &= ((/* implicit */short) (+(3936948341U)));
    }
    for (int i_24 = 1; i_24 < 20; i_24 += 4) 
    {
        var_44 = ((/* implicit */short) arr_83 [i_24]);
        var_45 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)5090)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_83 [i_24 - 1])) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) var_15))))) : (((arr_84 [i_24 + 2]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) 11163510405942100988ULL))));
    }
    for (int i_25 = 4; i_25 < 17; i_25 += 1) 
    {
        arr_87 [i_25] = ((/* implicit */int) (unsigned char)220);
        /* LoopSeq 3 */
        for (unsigned short i_26 = 0; i_26 < 18; i_26 += 4) 
        {
            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-40))) ? (((long long int) arr_10 [i_25 + 1] [i_25] [i_25 + 1] [i_26] [i_25 + 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_10 [i_25 - 2] [i_26] [i_25 - 2] [i_26] [(unsigned short)10]) : (2147483647))))));
            var_48 = ((/* implicit */short) (unsigned short)49152);
            arr_90 [i_25] [i_26] [i_26] |= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? ((~(1400691275803825175LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_19 [i_25] [i_25] [i_25 - 1] [i_26]))))));
        }
        for (unsigned int i_27 = 2; i_27 < 16; i_27 += 1) /* same iter space */
        {
            arr_93 [(unsigned short)4] [8] [(_Bool)1] |= ((/* implicit */signed char) ((unsigned int) ((int) arr_6 [i_25] [i_27 - 1] [13LL])));
            var_49 -= ((/* implicit */signed char) (unsigned short)65535);
            arr_94 [i_25] [(short)14] &= ((/* implicit */int) 874999788U);
            var_50 = ((/* implicit */short) arr_7 [i_25] [i_25] [i_25]);
            var_51 -= ((/* implicit */short) (unsigned short)49152);
        }
        for (unsigned int i_28 = 2; i_28 < 16; i_28 += 1) /* same iter space */
        {
            var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) (-(2106798759))))));
            /* LoopSeq 2 */
            for (signed char i_29 = 0; i_29 < 18; i_29 += 4) 
            {
                var_53 ^= ((/* implicit */short) (unsigned short)36757);
                var_54 = ((/* implicit */int) (-(0LL)));
                var_55 &= ((/* implicit */int) ((((/* implicit */_Bool) -588985533)) ? (((long long int) arr_2 [i_28 - 2])) : (((long long int) (unsigned short)65535))));
                /* LoopNest 2 */
                for (unsigned short i_30 = 3; i_30 < 15; i_30 += 4) 
                {
                    for (unsigned short i_31 = 0; i_31 < 18; i_31 += 1) 
                    {
                        {
                            arr_105 [(_Bool)1] [i_25] = ((/* implicit */short) (-((-(((/* implicit */int) (_Bool)1))))));
                            var_56 ^= ((/* implicit */unsigned short) var_16);
                            var_57 |= ((/* implicit */unsigned int) arr_10 [i_25] [i_28 - 2] [i_30] [i_28 - 2] [i_31]);
                        }
                    } 
                } 
            }
            for (long long int i_32 = 2; i_32 < 15; i_32 += 1) 
            {
                arr_108 [i_25] [i_25] [8] &= ((/* implicit */_Bool) ((long long int) var_16));
                var_58 ^= ((/* implicit */short) (unsigned char)16);
                var_59 *= ((/* implicit */signed char) 108553937U);
                arr_109 [i_25] [i_28] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)36745)) ? (4186413357U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5091)))));
            }
        }
        var_60 = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)22)))) & (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned short)60445))))))));
    }
}
