/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131279
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (arr_0 [i_0] [4LL])))) ? (((/* implicit */unsigned long long int) max((507904U), (((/* implicit */unsigned int) (signed char)112))))) : (208223504023458621ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-121)))))));
        arr_2 [(unsigned char)2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) - (((/* implicit */int) (!(((/* implicit */_Bool) 18238520569686092995ULL))))))))));
        var_14 = ((/* implicit */unsigned char) 18238520569686092984ULL);
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) 208223504023458633ULL))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                {
                    arr_10 [i_3] = ((/* implicit */signed char) 208223504023458621ULL);
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (((!((_Bool)1))) ? (208223504023458656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))) : ((~(16352)))));
                    var_18 = ((/* implicit */unsigned short) (((_Bool)1) ? (arr_8 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (arr_9 [i_1] [i_2] [i_3]))))));
                }
            } 
        } 
        arr_11 [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (1107114824336236177ULL)));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32752)) ? (arr_8 [i_5] [i_4]) : (((/* implicit */unsigned long long int) 4294459402U))));
            var_21 = ((/* implicit */unsigned int) ((arr_14 [i_4] [i_5] [i_4]) > (((/* implicit */int) (_Bool)1))));
            var_22 = ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)-6))))));
        }
        arr_16 [i_4] &= ((((/* implicit */int) ((8806052962678923043ULL) >= (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4] [i_4]))))) == (((((/* implicit */int) (unsigned char)158)) - (((/* implicit */int) arr_12 [i_4])))));
        var_23 = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (208223504023458633ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
    }
    for (long long int i_6 = 3; i_6 < 7; i_6 += 2) 
    {
        arr_20 [i_6] |= ((/* implicit */long long int) ((((((/* implicit */int) ((127ULL) >= (((/* implicit */unsigned long long int) 1073741824))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 3507776108U))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_19 [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2273742550792112438ULL)) ? (-3298604628785584444LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((unsigned long long int) (signed char)8)))) : (((/* implicit */unsigned long long int) min((3122283994U), (((/* implicit */unsigned int) arr_7 [i_6 - 2])))))));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                        {
                            var_24 &= ((/* implicit */long long int) (signed char)93);
                            arr_32 [i_9] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32786)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9640691111030628584ULL)) ? (((/* implicit */int) (short)-19)) : (((/* implicit */int) var_12))))) : (arr_26 [i_6] [i_7] [i_6] [i_6 - 1])));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                        {
                            var_25 -= ((/* implicit */unsigned int) ((((max((var_11), ((_Bool)1))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)171)), (arr_3 [(_Bool)1])))) : (((61440) + (((/* implicit */int) (unsigned short)32787)))))) + (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1975612260U))))), ((unsigned char)16))))));
                            var_26 = arr_30 [i_11] [4ULL] [i_8] [i_7] [i_6];
                            var_27 = ((/* implicit */unsigned int) min((var_27), (max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((506845409) == (((/* implicit */int) arr_35 [i_6 - 1] [i_6] [i_6] [(signed char)1] [i_6] [i_6])))))) >= (arr_8 [i_8] [i_8])))), (min((((/* implicit */unsigned int) ((unsigned char) 4U))), (max((4294967295U), (arr_31 [i_6] [(short)4] [i_8] [i_8] [(signed char)7] [(unsigned char)8])))))))));
                        }
                        /* LoopSeq 4 */
                        for (short i_12 = 3; i_12 < 7; i_12 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned char) ((18446744073709551615ULL) * (((/* implicit */unsigned long long int) 3098736148U))));
                            var_29 *= (short)24300;
                            var_30 += ((/* implicit */unsigned long long int) arr_29 [i_6] [i_6] [i_8] [i_9] [i_6] [i_12 + 2] [i_8]);
                            var_31 -= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 4294967280U)))) + (4294967291U)));
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 2) /* same iter space */
                        {
                            arr_41 [i_6] [i_6 - 3] [0U] [3ULL] [i_7] [i_6] [(unsigned short)3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((187826443132308350LL) == (((/* implicit */long long int) ((/* implicit */int) (short)7936))))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)48797)) || (arr_12 [4ULL])));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) 1535764197U)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) 9223354444668731392LL))));
                        }
                        for (unsigned long long int i_14 = 2; i_14 < 9; i_14 += 2) /* same iter space */
                        {
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_38 [i_7] [i_7] [i_7] [1U] [i_7] [i_7]))))), (((1615041354713218677ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16733)))))))) ? (5ULL) : (min((10386106441865877445ULL), (((/* implicit */unsigned long long int) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)122)))))))));
                            arr_44 [i_7] [(short)9] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) 1073741823)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)62998))))) : (1615041354713218682ULL))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (min((arr_8 [i_6] [(short)8]), (9640691111030628552ULL)))))));
                            arr_45 [i_7] [i_7] [i_7] [i_8] [i_9] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(max((-2030135782), (((/* implicit */int) (unsigned short)33831))))))) == (((((/* implicit */_Bool) arr_40 [i_6 - 1] [i_7] [i_9] [i_9] [i_7])) ? (((/* implicit */unsigned long long int) arr_22 [i_6 + 2] [i_14 - 1])) : (16831702718996332944ULL)))));
                            var_35 = ((/* implicit */_Bool) ((((9640691111030628560ULL) << (((/* implicit */int) (!(((/* implicit */_Bool) -5301398253684022646LL))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16769)))));
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 2) /* same iter space */
                        {
                            var_36 &= ((/* implicit */short) ((((/* implicit */_Bool) (-(9640691111030628547ULL)))) ? (((/* implicit */unsigned long long int) var_9)) : ((-(arr_13 [i_6])))));
                            var_37 = ((/* implicit */_Bool) min((18140791561138550888ULL), (((/* implicit */unsigned long long int) 671590221U))));
                            var_38 = -2011048570729965278LL;
                            var_39 = ((/* implicit */signed char) 18206900565010569158ULL);
                        }
                    }
                    var_40 -= ((/* implicit */unsigned char) 18446744073709551615ULL);
                    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)139)))), (-409406682)))) ? (max((((((/* implicit */_Bool) 4294967291U)) ? (3396909312U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_7]))))), (arr_19 [i_6 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47)))));
                    arr_48 [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2040)) ? (((/* implicit */int) (short)-27705)) : (((/* implicit */int) arr_12 [i_7]))))) ? (((((/* implicit */_Bool) (short)27730)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)47)))) : (((/* implicit */int) arr_0 [i_6] [i_6]))))));
                }
            } 
        } 
        arr_49 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147221504ULL)) ? (4119495614U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) -4577572706719067756LL)) : (((((/* implicit */_Bool) (signed char)1)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6])))))))) ? (((((/* implicit */_Bool) (unsigned char)211)) ? (10386106441865877468ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63510))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) + (17134555406739203782ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152)))))));
        /* LoopSeq 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_42 += ((/* implicit */_Bool) arr_25 [i_16] [i_16] [i_6] [i_6]);
            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((6099691989775266402ULL), (((/* implicit */unsigned long long int) (unsigned short)2040))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48814))) : (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned long long int) -1LL)) : (9640691111030628563ULL)))))))))));
        }
        for (unsigned int i_17 = 1; i_17 < 8; i_17 += 2) 
        {
            arr_55 [i_6] = ((/* implicit */unsigned long long int) arr_3 [i_6]);
            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) 502757686))));
        }
    }
    var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) 4294967295U))));
}
