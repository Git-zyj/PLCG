/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134180
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)2048)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_0)) : (arr_2 [i_0]))) : (((arr_2 [i_0]) - (arr_1 [i_0])))))) ? (((/* implicit */int) (short)-32749)) : (((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-13847)) : (var_6))) : (((((/* implicit */int) (short)1023)) % (-590742921)))))));
        arr_4 [7] = ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_2 [i_0])), (-1LL))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18100)) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        arr_5 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)96))) : (-1LL)))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) | (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29689)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_10 += ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_7)) <= (arr_7 [i_1 - 1]))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                arr_18 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (short)32767))));
                                var_11 = ((/* implicit */int) ((((/* implicit */int) (short)29688)) > (var_0)));
                            }
                        } 
                    } 
                    var_12 += ((/* implicit */int) var_7);
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_6)) > (var_1)));
                    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_15 [(short)11] [i_3]))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_6 [i_1])))))));
                }
            } 
        } 
    }
    for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 3; i_8 < 8; i_8 += 4) 
            {
                arr_29 [i_6 - 1] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (short)-30589)))))));
                var_15 -= ((/* implicit */_Bool) var_9);
                arr_30 [i_6] [i_7] [i_7] [i_8 + 3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_6 [i_6 + 1]))));
            }
            for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                var_16 += ((/* implicit */short) ((long long int) (signed char)102));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_7])) ? (9223372036854775798LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6])))));
                arr_33 [i_6 + 1] [i_6 + 2] [i_6 + 1] [(short)8] = ((/* implicit */int) var_8);
                var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_6] [i_6 + 2])) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) arr_20 [i_6]))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    {
                        arr_39 [i_6] [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_6] [i_7] [i_7] [i_11])))))));
                        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_36 [1] [i_6] [i_7] [i_6] [i_6]))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7280)) ? (var_8) : (arr_11 [i_6 - 1] [i_12] [i_6 + 1] [i_12])))) ? (((var_1) - (((/* implicit */unsigned long long int) arr_7 [(signed char)9])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_25 [i_6] [i_6])))))))));
            var_21 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((-(((/* implicit */int) arr_23 [i_6 - 1])))) : (((/* implicit */int) arr_23 [i_6 - 1])));
            var_22 = ((/* implicit */unsigned long long int) (-(max((((((/* implicit */int) var_4)) - (((/* implicit */int) var_4)))), (((/* implicit */int) var_5))))));
        }
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((((((/* implicit */long long int) ((/* implicit */int) (short)-27))) > (1125899902648320LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) (short)-1))))) : (min((((/* implicit */unsigned long long int) var_5)), (1571870858724896554ULL))))), (((/* implicit */unsigned long long int) arr_8 [i_6 - 1])))))));
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) (short)15)) + (((/* implicit */int) ((arr_43 [i_13 + 1] [i_13 + 1]) <= (((unsigned long long int) var_2)))))));
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned int i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (((~(((((/* implicit */_Bool) arr_44 [i_15])) ? (((/* implicit */int) (short)-6)) : (492626322))))) | ((+(((((/* implicit */_Bool) 2630461174608545965ULL)) ? (((/* implicit */int) (short)17552)) : (((/* implicit */int) (short)10043)))))))))));
                    /* LoopSeq 3 */
                    for (int i_16 = 0; i_16 < 25; i_16 += 2) /* same iter space */
                    {
                        var_26 += ((/* implicit */signed char) var_1);
                        var_27 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17535))) * (var_1)));
                    }
                    for (int i_17 = 0; i_17 < 25; i_17 += 2) /* same iter space */
                    {
                        arr_56 [i_17] [i_14] [i_14] [i_13] = ((/* implicit */int) ((2630461174608545960ULL) & (2630461174608545992ULL)));
                        arr_57 [i_13] [i_13 + 1] [i_13] [(short)11] [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
                        arr_58 [i_13 + 1] [9] [9] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-29689)) ? (23) : (((/* implicit */int) (signed char)-116))));
                        var_28 += ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_54 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_43 [i_15] [i_15]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)97)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_13 + 1])) / (arr_46 [i_13 + 1] [i_13 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)15360)) + (((/* implicit */int) (short)-2960))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_49 [i_13] [(signed char)22] [(signed char)22])), (arr_44 [i_13]))))) : (var_2)))));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 25; i_18 += 2) /* same iter space */
                    {
                        arr_61 [i_13 + 1] [i_14] [i_15] [i_14] = (~(((((/* implicit */_Bool) arr_53 [i_13] [i_13] [i_13] [i_13 + 1])) ? (var_1) : (((/* implicit */unsigned long long int) arr_54 [i_14])))));
                        /* LoopSeq 2 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_64 [i_13 + 1] [i_19] [i_13 + 1] [i_15] [i_18] [(short)24] [8] = ((var_0) <= (((/* implicit */int) arr_59 [i_13 + 1] [i_13 + 1])));
                            var_29 = ((/* implicit */short) (-2147483647 - 1));
                            arr_65 [i_13] [i_15] [i_15] [i_15] &= ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                        }
                        for (signed char i_20 = 0; i_20 < 25; i_20 += 2) 
                        {
                            var_30 += ((/* implicit */int) ((((unsigned int) var_1)) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [(signed char)4] [14ULL] [14ULL] [i_18] [i_18] [(signed char)4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))));
                            var_31 = ((/* implicit */long long int) (+(15816282899101005656ULL)));
                            arr_70 [i_13] [i_14] [i_15] [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1965541796555627520LL)) >= (var_3)))) >> (((((((/* implicit */_Bool) arr_50 [18LL] [18LL])) ? (((/* implicit */int) arr_52 [i_14] [i_14] [i_15] [i_18])) : (var_9))) + (70)))));
                            arr_71 [i_20] = ((/* implicit */_Bool) var_7);
                        }
                        var_32 += ((/* implicit */long long int) (((((~(17))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_53 [(short)11] [(short)11] [i_15] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (176980039U))) - (61U)))));
                    }
                    var_33 -= ((((/* implicit */_Bool) (-((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) 261632))))))) ? (((/* implicit */int) arr_53 [i_13] [i_13] [i_14] [13])) : (((/* implicit */int) (short)-28395)));
                }
            } 
        } 
    }
    var_34 -= ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (unsigned char i_21 = 0; i_21 < 19; i_21 += 4) 
    {
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) 4837654690964365513ULL))));
        arr_75 [i_21] = ((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)117))))), (2166017544U))))));
        arr_76 [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) 2963583315U)) ? (((/* implicit */long long int) 3543403424U)) : (-17LL)));
    }
    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) < (((/* implicit */int) ((_Bool) var_1)))));
}
