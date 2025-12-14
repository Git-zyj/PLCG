/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109118
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) min((((unsigned char) (unsigned short)59890)), (((/* implicit */unsigned char) (signed char)-1))));
                                var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) & (arr_7 [i_0])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_2])))) : (((/* implicit */int) (unsigned short)14695))))) ? (((((/* implicit */_Bool) 8358293930268200780LL)) ? ((+(4294967286U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)56915)) | (((/* implicit */int) (unsigned char)78))))))) : (var_6)));
                                var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned char)4)) >= (523838710)))))));
                                arr_12 [i_0] [0LL] [i_2] [9LL] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) ((13321936057010173359ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28168))))))));
                                var_12 = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                } 
                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_4 [i_1] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [6LL] [6LL]))))))) : (arr_2 [i_1]));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (((+(var_1))) + (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
        /* LoopSeq 4 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_17 [i_6] [i_6] [i_6] &= ((/* implicit */unsigned long long int) var_6);
            /* LoopSeq 3 */
            for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_23 [i_7] [i_6] [i_6] [i_6] = ((/* implicit */int) arr_21 [i_6] [i_6] [i_7] [i_6]);
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        arr_26 [3U] [i_6] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)177))));
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((unsigned char) (short)24524)))));
                    }
                }
                arr_27 [i_5] [i_5] [i_7] &= 0LL;
            }
            for (signed char i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
            {
                arr_32 [i_5] [i_6] [i_10] [i_5] = ((((/* implicit */_Bool) arr_24 [i_5] [(_Bool)1] [i_5] [i_6] [i_6] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_24 [(unsigned char)12] [i_6] [i_6] [i_6] [i_6] [i_10] [i_10]));
                arr_33 [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_10] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (4368591412329472065LL)))) ? (((/* implicit */int) arr_20 [i_5] [i_5] [i_5])) : (((/* implicit */int) (unsigned char)162))));
            }
            for (signed char i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
            {
                arr_37 [i_5] [i_5] [i_11] = ((/* implicit */unsigned int) (signed char)1);
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        {
                            arr_45 [(unsigned short)0] [(unsigned short)0] [i_11] [i_12] [i_13] = ((/* implicit */unsigned int) (unsigned char)142);
                            arr_46 [i_12] [i_5] [i_11] [i_6] [15ULL] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_5] [i_12] [i_12] [i_12])) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)12))))) : (arr_16 [i_13] [i_13])));
                        }
                    } 
                } 
                arr_47 [i_5] [i_5] [i_6] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)126)) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) (signed char)-1))));
            }
            arr_48 [i_5] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))) / (-5817641677827425717LL)));
            arr_49 [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) >= ((-(((/* implicit */int) (signed char)63))))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((0ULL) > (5105175902536868036ULL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_5] [18LL] [i_5]))) == (var_7)))))))));
        }
        for (unsigned short i_14 = 3; i_14 < 21; i_14 += 2) 
        {
            arr_53 [i_5] &= ((/* implicit */unsigned short) ((arr_18 [i_5]) / (arr_18 [i_5])));
            arr_54 [11LL] [i_14 + 1] [i_14 + 2] = ((/* implicit */unsigned char) arr_35 [(unsigned char)15] [i_14 - 3] [i_14 + 1]);
        }
        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_16 = 2; i_16 < 22; i_16 += 2) /* same iter space */
            {
                var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_16 - 1] [i_16] [i_16 - 1] [i_16] [i_16 - 1] [(unsigned short)22])))));
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    for (unsigned int i_18 = 0; i_18 < 23; i_18 += 4) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned int) arr_50 [i_17]);
                            arr_66 [i_15] [i_15] [i_15] [i_17] [i_15] [i_18] = ((/* implicit */signed char) ((((/* implicit */int) arr_29 [i_16 + 1] [i_16 - 1] [i_16 - 1])) ^ (((/* implicit */int) arr_29 [i_16 - 2] [i_16 - 1] [i_16 - 1]))));
                            arr_67 [i_18] |= ((/* implicit */signed char) var_9);
                            arr_68 [i_16 + 1] [(_Bool)1] [i_16] [i_15] [13] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)206)) != (((/* implicit */int) (short)24524))));
                        }
                    } 
                } 
            }
            for (int i_19 = 2; i_19 < 22; i_19 += 2) /* same iter space */
            {
                arr_73 [(signed char)16] [(signed char)4] [i_19] [(signed char)4] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))));
                var_19 -= var_8;
            }
            for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                arr_76 [i_5] [i_15] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (var_6)));
                arr_77 [i_5] [i_20] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)44))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_5] [i_5] [i_15] [i_5])) > (((/* implicit */int) arr_60 [(unsigned short)5] [i_15] [i_20])))))) : (((arr_18 [i_15]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_15] [(unsigned short)8])))))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (short)24514))));
            }
            /* LoopSeq 1 */
            for (long long int i_21 = 2; i_21 < 22; i_21 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_22 = 0; i_22 < 23; i_22 += 4) 
                {
                    arr_84 [i_5] [i_5] [i_21] = ((/* implicit */unsigned short) (+(-8LL)));
                    arr_85 [i_5] [i_15] [i_5] [i_22] [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                    var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)18))));
                }
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(arr_78 [i_5] [i_5]))))));
            }
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((-1LL) % (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_15]))))))));
            arr_86 [i_15] [(unsigned char)15] = ((/* implicit */unsigned int) arr_55 [(_Bool)1]);
        }
        for (long long int i_23 = 2; i_23 < 22; i_23 += 4) 
        {
            var_24 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_87 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18614))) : (arr_57 [(_Bool)1] [(_Bool)1]))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_1)) ? (arr_19 [(unsigned short)4] [i_5] [i_23 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [(unsigned char)8] [i_23 - 2] [i_5] [i_5]))))) - (1571811484U)))));
            /* LoopSeq 1 */
            for (unsigned char i_24 = 2; i_24 < 22; i_24 += 3) 
            {
                arr_93 [i_24] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40137))) & (9223372036720558080ULL)));
                var_25 = ((/* implicit */unsigned long long int) (signed char)7);
            }
            var_26 *= ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((((/* implicit */int) (unsigned short)50847)) & (((/* implicit */int) arr_69 [i_5] [i_5] [i_5])))) - (29)))));
        }
        arr_94 [i_5] = ((/* implicit */short) arr_40 [(unsigned short)18] [i_5] [i_5] [i_5] [i_5] [(unsigned short)18]);
    }
}
