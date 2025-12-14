/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165641
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((549755813887ULL) != (var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (18446743523953737725ULL))))));
    var_11 ^= ((/* implicit */unsigned char) var_8);
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) 1468703025U)) | (18446743523953737724ULL))) - (((/* implicit */unsigned long long int) 2612172826U)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) max((arr_3 [i_0]), (var_7)));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (5299797277586239851ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [(unsigned char)9]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446743523953737709ULL))))))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_1] [(unsigned char)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((((/* implicit */_Bool) 18446743523953737715ULL)) && (((/* implicit */_Bool) 18446743523953737696ULL))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) max((((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), ((-(((/* implicit */int) arr_0 [i_1 - 1]))))));
                        var_15 = ((/* implicit */long long int) 1682794447U);
                    }
                    for (short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_12 [i_0] [i_2] [i_2] [i_4]), (arr_12 [i_0] [i_2] [i_2] [i_4])))), (var_6))))));
                        var_17 -= ((/* implicit */signed char) arr_0 [i_0]);
                    }
                }
                for (signed char i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) 14U))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) 8356817907032963134LL);
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_15 [i_1 - 2] [i_6] [i_6 - 1] [i_6])) >= (var_6)));
                    }
                    for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (((!(arr_10 [i_1 - 1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 13)) & (var_0)))) : (18446744073709551608ULL))))));
                        var_21 += ((/* implicit */long long int) (-((-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_16 [(unsigned char)10] [10]))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) arr_14 [i_1 - 2]);
                        var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (1458190832U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 + 1])))) ? (((/* implicit */int) arr_13 [6ULL] [6ULL] [i_5] [3U])) : (((/* implicit */int) (unsigned char)255))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) arr_18 [i_5] [i_5]);
                            arr_28 [i_0] [i_0] [i_5] [6U] [i_9] = arr_20 [i_0] [i_1 + 1] [3ULL] [i_8] [i_9];
                        }
                        var_25 = ((/* implicit */unsigned short) arr_4 [i_5] [i_5]);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (18446743523953737746ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_3 [i_10])))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            var_27 = ((/* implicit */short) var_9);
                            var_28 -= ((/* implicit */unsigned char) (signed char)57);
                            var_29 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_20 [i_1 + 1] [i_1 - 2] [i_10] [i_10] [i_10])))), ((~(((/* implicit */int) arr_20 [i_0] [i_1 - 2] [i_10] [i_10] [11LL]))))));
                            arr_33 [i_10] [i_1 - 1] [i_1 - 1] [(short)4] [i_11] = ((/* implicit */unsigned short) arr_23 [i_10] [i_10] [i_10] [i_10]);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) /* same iter space */
                        {
                            arr_36 [i_0] [6U] [i_0] [i_0] [2LL] [i_5] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)511)))))));
                            var_30 &= ((/* implicit */signed char) min((((arr_4 [i_5] [i_1 - 1]) / (((/* implicit */int) (unsigned short)65526)))), ((+(((/* implicit */int) (unsigned char)183))))));
                            var_31 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-1)) ? (1594260711027694613LL) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_5] [i_10] [i_12])))))));
                            var_32 = ((/* implicit */unsigned char) ((arr_32 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) ^ (arr_32 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 2] [i_1 - 2])));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
                        {
                            arr_39 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1 - 2])) ? (arr_24 [i_1 - 1]) : (arr_24 [i_1 - 2]))))));
                            var_33 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 + 1])) << (((((/* implicit */int) (unsigned char)72)) - (66)))))) != (2836776466U)));
                            var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)144))));
                        }
                        var_35 = ((/* implicit */signed char) 1734211352);
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 13; i_14 += 1) 
                        {
                            var_36 ^= ((/* implicit */unsigned short) (_Bool)1);
                            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (-(18446743523953737723ULL))))));
                        }
                        /* vectorizable */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_46 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) arr_1 [i_1 + 1]))));
                            var_38 = ((/* implicit */long long int) arr_32 [i_0] [i_1] [i_5] [i_0] [i_15] [i_15]);
                            var_39 = ((/* implicit */long long int) ((arr_32 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [3ULL]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2150597511U)) ? (43U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            arr_49 [i_10] [i_10] [0ULL] [i_10] [i_10] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_5] [i_5] [i_16] [i_16])) ? (var_6) : (arr_32 [i_0] [i_1] [i_5] [i_5] [i_10] [i_16]))), (max((arr_32 [i_0] [i_1 - 2] [i_5] [6LL] [i_16] [i_10]), (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_40 = ((/* implicit */long long int) -841766922);
                            var_41 *= ((/* implicit */unsigned long long int) (unsigned char)191);
                        }
                        var_42 = ((/* implicit */_Bool) ((unsigned char) (+(max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1 - 2] [i_5] [i_5])), (549755813887ULL))))));
                    }
                    var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) arr_30 [i_0] [i_0] [7LL] [i_0] [i_0]))));
                }
                for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    arr_52 [5ULL] [i_1] [i_17] = ((/* implicit */short) -1734211347);
                    arr_53 [i_0] [i_0] [i_0] = max(((((!(((/* implicit */_Bool) 1358561050)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((~(4294967295U))))), (min((1458190832U), (((/* implicit */unsigned int) -1734211338)))));
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3979884324593643886LL)) ? (8927613015516707873LL) : (((/* implicit */long long int) 4294967293U))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)87)) ? (arr_15 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [11LL] [11LL] [11LL] [11LL]))))) - (((((/* implicit */_Bool) var_7)) ? (arr_24 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))) : (((5399274103378461446LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99)))))));
                    arr_54 [i_0] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8340942667664631406ULL)) ? (7U) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (127U) : (2836776458U)))))) ? ((~(arr_32 [i_0] [i_0] [i_1] [i_1] [i_1] [i_17]))) : (((/* implicit */unsigned long long int) arr_42 [(unsigned char)2] [(unsigned char)8]))));
                }
                for (long long int i_18 = 1; i_18 < 11; i_18 += 3) 
                {
                    arr_59 [(_Bool)1] [i_1] [i_1] [i_18] = ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_55 [i_0] [(unsigned short)0] [i_0] [i_18 + 1]))))) / (4294967174U));
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        for (int i_20 = 0; i_20 < 13; i_20 += 3) 
                        {
                            {
                                var_45 += ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) ((117U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126)))))), (2375560252907047272LL)))));
                                var_46 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_18 + 1] [i_20] [i_20] [i_18 + 1] [i_20])) == (((/* implicit */int) var_5))))), (4165441508452380165LL)));
                                arr_64 [i_0] [0] [i_18] [i_19] [i_19] &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_26 [i_1 + 1] [i_1 - 2])) : (arr_2 [i_1 - 2] [i_1 - 1])))), (4294967273U)));
                                arr_65 [i_18] = ((/* implicit */int) ((((/* implicit */long long int) max((var_2), (((/* implicit */unsigned int) ((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) var_6)))))))) / (((((/* implicit */_Bool) (unsigned short)5949)) ? (((((/* implicit */_Bool) 0ULL)) ? (828494819627499475LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))))) : (-6141692063551469688LL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
