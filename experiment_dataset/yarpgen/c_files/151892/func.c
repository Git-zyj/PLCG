/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151892
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
    var_11 = ((unsigned short) 9821513445707602928ULL);
    var_12 = ((unsigned short) (+(((/* implicit */int) (short)19512))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) (unsigned char)228);
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_15 -= ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_16 = ((/* implicit */short) min((2554889524U), (max((((/* implicit */unsigned int) (short)-11660)), (1740077761U)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) arr_1 [i_3 + 1] [i_3 + 1]);
                    var_18 = ((/* implicit */long long int) max((var_18), (((long long int) (short)-19512))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+((+(((/* implicit */int) (short)-19513)))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            var_20 &= ((/* implicit */unsigned long long int) ((long long int) arr_8 [i_1] [i_1] [i_4] [i_1]));
            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-19516)) : (((/* implicit */int) (short)31))))));
            var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_11 [i_1] [i_4] [i_4]) == (((/* implicit */long long int) ((/* implicit */int) (short)19523))))))));
            var_23 = ((/* implicit */long long int) max((var_23), (arr_4 [i_1] [9LL])));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-6067224190155134117LL)))) ? (((/* implicit */int) (short)14075)) : ((+(((/* implicit */int) (short)-37))))));
        }
        for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (5616575873720913821LL) : (6067224190155134117LL)));
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) (short)0)))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (unsigned short)65525))))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_5] [2ULL] [i_5] [i_1]))) : (((/* implicit */int) arr_3 [i_6]))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    var_27 ^= ((/* implicit */long long int) ((short) var_9));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned char) arr_21 [i_8] [i_8 + 1] [i_8 - 1] [i_6] [i_8] [11LL]);
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (~(1099392564407007457LL))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((unsigned char) (short)-17040))));
                    }
                    for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        var_31 = ((/* implicit */long long int) max((var_31), (((((/* implicit */_Bool) arr_17 [i_1] [i_5])) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)112))))) : (((((/* implicit */_Bool) (unsigned short)21880)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65515))) : (663423062884154692LL)))))));
                        var_32 ^= ((/* implicit */signed char) ((unsigned char) (-(arr_17 [i_9] [i_9]))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        var_33 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)24)) * (((/* implicit */int) (unsigned short)51775)))) / (((/* implicit */int) (short)-19512))));
                        var_34 = ((/* implicit */unsigned short) (~(arr_19 [i_1] [i_1] [i_7])));
                    }
                    var_35 ^= ((short) arr_21 [i_7] [i_7] [i_1] [i_1] [14U] [i_1]);
                }
                var_36 = ((/* implicit */short) (~(((/* implicit */int) arr_13 [2LL]))));
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3716895928881493497LL)) - (arr_18 [(unsigned short)10] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [(unsigned short)2] [i_5] [i_5]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))))))) : ((-(18446744073709551615ULL)))));
            }
        }
        var_38 = ((/* implicit */unsigned long long int) (~(arr_9 [i_1] [i_1] [(unsigned short)5] [i_1])));
        /* LoopSeq 2 */
        for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            var_39 = ((/* implicit */short) (-(arr_7 [i_1] [i_1] [12ULL] [i_1])));
            var_40 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-29964))) / (-3716895928881493498LL))));
            var_41 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)161));
            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((short) arr_1 [i_11] [i_1])))));
            var_43 = ((/* implicit */unsigned long long int) ((short) (short)19505));
        }
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 15; i_14 += 1) 
                {
                    for (unsigned short i_15 = 2; i_15 < 13; i_15 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) var_4)))));
                            var_45 = ((/* implicit */short) ((long long int) (signed char)114));
                            var_46 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65509)) ? (((/* implicit */int) (short)-13039)) : (((/* implicit */int) (unsigned short)127))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_34 [i_1] [i_12] [i_1] [i_13])))) : (arr_18 [i_13 - 1] [i_1])));
                            var_47 ^= ((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_1] [(unsigned short)8]));
                        }
                    } 
                } 
            } 
            arr_41 [12LL] [i_12] = ((/* implicit */long long int) (unsigned short)39);
            arr_42 [i_1] [i_12] = ((/* implicit */long long int) ((short) arr_24 [i_1] [(unsigned char)4] [i_12 - 1] [i_1] [i_1] [i_1] [14U]));
        }
        var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-19506)))) >> (((((long long int) -9133068355578818168LL)) + (9133068355578818192LL))))))));
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 13; i_16 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) 
        {
            for (short i_18 = 0; i_18 < 13; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                {
                    {
                        arr_52 [i_16] [i_16] [i_16] [i_16] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)10930)) ? (15693218182912910086ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14075)))));
                        var_49 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_43 [i_19]))));
                        var_50 = ((/* implicit */unsigned int) ((unsigned char) ((signed char) arr_11 [i_17] [9LL] [i_19])));
                        var_51 = ((/* implicit */_Bool) ((15ULL) >> (((/* implicit */int) ((signed char) (short)11573)))));
                        var_52 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_13 [9ULL]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_20 = 2; i_20 < 12; i_20 += 2) 
        {
            for (short i_21 = 3; i_21 < 11; i_21 += 2) 
            {
                for (short i_22 = 1; i_22 < 12; i_22 += 2) 
                {
                    {
                        var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) ((unsigned long long int) arr_13 [i_21 - 2])))));
                        /* LoopSeq 4 */
                        for (short i_23 = 0; i_23 < 13; i_23 += 4) /* same iter space */
                        {
                            var_54 = ((((unsigned long long int) arr_25 [i_16] [i_23] [i_23] [i_22] [i_23] [i_22] [i_22])) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)59)) / (((/* implicit */int) (unsigned short)16395))))));
                            arr_67 [i_16] [5LL] [5LL] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) arr_28 [i_16] [i_20] [i_23]);
                            var_55 = ((/* implicit */unsigned short) arr_43 [i_22]);
                            var_56 = ((/* implicit */unsigned int) ((signed char) arr_26 [i_20 - 1] [(unsigned short)3] [i_21] [i_21 + 1]));
                            var_57 += ((/* implicit */short) (-(((/* implicit */int) ((signed char) (short)14101)))));
                        }
                        for (short i_24 = 0; i_24 < 13; i_24 += 4) /* same iter space */
                        {
                            var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_16] [i_20 - 1] [i_21] [11LL] [i_22] [7LL] [11LL])) ? (((/* implicit */int) arr_66 [i_20 + 1] [i_20 - 1] [i_21 + 2] [i_22 + 1] [i_24])) : ((-(((/* implicit */int) (signed char)115)))))))));
                            arr_70 [6LL] [i_22 - 1] [i_21] [i_20] = ((/* implicit */short) ((signed char) (+(((/* implicit */int) (_Bool)1)))));
                            var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [(unsigned short)0] [i_24])) ? (1U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 274341036032LL)) ? (((/* implicit */int) arr_66 [i_16] [i_20] [i_21 + 2] [i_22] [(short)10])) : (((/* implicit */int) (signed char)-64))))))))));
                        }
                        for (short i_25 = 0; i_25 < 13; i_25 += 4) /* same iter space */
                        {
                            arr_74 [i_16] [(short)8] [i_16] [(unsigned char)2] [(unsigned char)5] = ((unsigned short) ((((/* implicit */_Bool) arr_51 [i_16] [i_20] [i_21] [i_22] [i_25])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_35 [(_Bool)1] [i_20] [i_16]))));
                            var_60 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_48 [i_16] [i_20 + 1]))));
                        }
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            var_61 = ((((/* implicit */_Bool) 1037043259U)) ? (arr_50 [i_16] [i_21] [i_21 + 2] [i_20 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [(unsigned short)10] [i_20 - 1] [(unsigned short)10] [i_22 + 1] [i_16]))));
                            var_62 = arr_0 [i_22 - 1];
                            var_63 ^= ((unsigned short) (+(arr_50 [i_16] [(unsigned short)0] [i_26] [i_26])));
                            arr_78 [6LL] [0LL] [0LL] [i_21] [i_26] = ((/* implicit */long long int) ((((/* implicit */int) arr_59 [i_16] [i_20] [i_20 + 1] [i_20 + 1])) == (((/* implicit */int) arr_59 [i_16] [i_20] [i_21 + 1] [i_22 + 1]))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_27 = 1; i_27 < 9; i_27 += 3) 
                        {
                            var_64 = arr_7 [0ULL] [(short)0] [3ULL] [i_22];
                            var_65 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)35))) ? (((((/* implicit */int) (signed char)57)) >> (((arr_49 [i_16] [i_20] [i_21] [i_21]) - (7263630973621990239ULL))))) : ((~(((/* implicit */int) (unsigned short)38))))));
                        }
                        for (short i_28 = 0; i_28 < 13; i_28 += 2) /* same iter space */
                        {
                            arr_83 [i_16] [i_16] [i_16] = ((((/* implicit */long long int) ((/* implicit */int) ((short) (short)19505)))) | ((+(arr_4 [i_16] [i_20]))));
                            arr_84 [i_16] [i_20] [10ULL] [(short)12] [i_28] = ((/* implicit */signed char) ((short) (~(((/* implicit */int) arr_20 [i_16] [(short)0] [i_16] [(unsigned short)9] [(short)0])))));
                            var_66 = ((/* implicit */short) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) arr_6 [i_16] [i_16])) : (arr_2 [(signed char)12]))) - (((/* implicit */unsigned long long int) arr_72 [i_16] [i_20] [i_16] [i_16] [i_28] [i_21 - 3] [i_21]))));
                        }
                        for (short i_29 = 0; i_29 < 13; i_29 += 2) /* same iter space */
                        {
                            var_67 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_16] [i_20]))) < (arr_18 [i_16] [i_20]))))));
                            var_68 += ((/* implicit */short) var_6);
                            var_69 = ((/* implicit */long long int) ((unsigned int) ((signed char) var_9)));
                            arr_87 [i_16] [i_16] [(unsigned short)9] [3U] [i_16] [(short)12] |= ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) (short)-24085)))));
                            var_70 = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) (short)4997)))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_30 = 0; i_30 < 13; i_30 += 2) 
                        {
                            var_71 |= var_7;
                            var_72 ^= ((/* implicit */short) (+(((/* implicit */int) arr_54 [i_20] [i_21 + 2] [i_30]))));
                            var_73 = ((/* implicit */unsigned char) arr_27 [i_20 - 1]);
                        }
                    }
                } 
            } 
        } 
        arr_90 [i_16] [i_16] &= ((/* implicit */short) arr_2 [5ULL]);
    }
}
