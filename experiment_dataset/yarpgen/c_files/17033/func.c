/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17033
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
    var_19 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65535))));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(1443945819U)))) < (((-1827749472529592959LL) / (arr_6 [i_1])))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */long long int) min((3177788883U), (arr_5 [i_1])))) > (((((/* implicit */_Bool) arr_6 [i_1])) ? (-4611686018427387904LL) : (((/* implicit */long long int) arr_5 [i_1])))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_13)))))), (576761911)));
        /* LoopNest 2 */
        for (long long int i_2 = 4; i_2 < 18; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_17))) + (arr_14 [i_1] [i_1] [i_2 - 4] [i_2] [i_2 + 2] [i_2 - 2])))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            arr_17 [i_1] [i_2 + 1] [i_3] [i_1] [16ULL] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3])))))));
                            var_24 = ((/* implicit */long long int) ((((arr_8 [i_1] [i_2 + 2]) <= (((/* implicit */long long int) arr_14 [6U] [i_2 - 3] [i_4] [i_2 - 3] [i_4] [i_4])))) ? (var_6) : (((1593549926U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2 + 2] [i_4] [i_4] [i_1])))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            arr_21 [i_1] [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4611686018427387919LL))));
                            var_25 = ((/* implicit */_Bool) ((short) (unsigned short)0));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 1593549926U)) ? (arr_20 [i_1] [15U] [i_2 - 2] [i_2] [i_2 - 1]) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (short)31921)))))));
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)55907);
                        }
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_11 [i_2]))));
                        var_28 = ((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1] [i_3] [i_4] [i_4] [i_4]);
                    }
                    var_29 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16383)))))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_18 [i_1] [15] [i_1] [i_3] [i_8] [i_8] [i_8]) >> (((arr_8 [i_2] [i_2]) + (3264212350758694610LL))))), (((/* implicit */unsigned int) (unsigned short)24))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) -6956193511604317711LL)) ? (((/* implicit */int) (short)9163)) : (((/* implicit */int) var_17))))) % (min((((/* implicit */long long int) var_0)), (6956193511604317710LL))))) : (((/* implicit */long long int) 4294967288U))));
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 1; i_9 < 17; i_9 += 3) 
                        {
                            var_32 &= ((/* implicit */unsigned int) 805306368);
                            arr_31 [i_9] [i_8] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(max((((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_8] [i_1])), (arr_23 [i_2 - 2] [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_2 + 2])))));
                            arr_32 [i_1] [(short)18] [i_1] [i_8] [i_9] = ((/* implicit */short) min(((((+(18446744073709551615ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32131))))), (((/* implicit */unsigned long long int) min((arr_10 [i_2 + 1]), (((/* implicit */long long int) (unsigned short)16384)))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 4; i_10 < 17; i_10 += 1) 
                        {
                            var_33 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) arr_30 [i_1] [i_2] [(unsigned short)3])))));
                            var_34 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)42069));
                            var_35 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6956193511604317711LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_1)))) : (arr_8 [i_2 - 2] [i_8 + 2])));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 2; i_11 < 17; i_11 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_2 + 2] [i_2 + 1] [i_11 - 2] [i_11 + 3] [i_11 + 2]))));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            arr_39 [i_1] [(short)5] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */long long int) 0U);
                            var_37 -= ((/* implicit */unsigned int) -6956193511604317718LL);
                            arr_40 [i_1] [12ULL] [i_3] [2U] [2U] [12ULL] [i_1] = ((/* implicit */short) ((unsigned char) arr_35 [i_2 + 2] [i_1] [i_2 + 2]));
                        }
                    }
                    for (unsigned int i_13 = 1; i_13 < 17; i_13 += 4) 
                    {
                        var_38 = ((/* implicit */long long int) arr_34 [i_2] [i_2] [i_2 - 2] [i_13 - 1] [i_13 + 2]);
                        var_39 ^= ((((/* implicit */_Bool) min((arr_22 [i_3] [i_3] [i_3] [i_2] [i_13] [i_2 - 1]), (arr_22 [i_1] [(unsigned short)12] [i_2] [i_3] [i_13] [i_2 - 4])))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 511)) ? (-2006075634355629583LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))));
                        /* LoopSeq 3 */
                        for (short i_14 = 2; i_14 < 18; i_14 += 2) 
                        {
                            var_40 = ((/* implicit */short) min(((+(arr_20 [i_1] [i_2] [i_1] [i_13 - 1] [i_14 - 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 3] [i_2 - 4])) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (arr_23 [i_14] [i_13 + 3] [i_3] [(unsigned char)8] [i_1]) : (((/* implicit */int) (signed char)-108))))))))));
                            var_41 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) ((short) 0ULL)))))) * (max((((/* implicit */long long int) var_13)), (-6956193511604317739LL)))));
                            arr_46 [i_1] [i_2 + 2] [i_1] [i_1] [(unsigned short)1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_0)) ? (6956193511604317739LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_2 - 2] [i_2 - 2] [8U] [i_2 - 2] [i_1])) ? (((/* implicit */int) (short)9163)) : (((/* implicit */int) (signed char)108))))))), (((/* implicit */long long int) (-(arr_36 [i_13 + 3] [19LL] [i_1]))))));
                            arr_47 [8LL] [i_2] [i_3] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) arr_11 [i_1]));
                        }
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_44 [i_15] [i_13 + 2] [i_3] [i_2] [i_1])) ? (arr_34 [19U] [i_2] [i_3] [i_13] [19U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_15]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)58194))))));
                            arr_52 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_35 [i_13 + 2] [i_1] [i_15]))));
                        }
                        for (short i_16 = 0; i_16 < 20; i_16 += 1) /* same iter space */
                        {
                            arr_56 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_1] [(unsigned char)12]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_26 [i_1] [2U] [i_2 - 4] [i_3] [i_13 + 3] [i_16])))) : (((((/* implicit */_Bool) arr_19 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_13 + 2] [i_13 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2 - 2] [i_2] [i_2 + 1] [i_13 + 3] [i_13 + 1]))) : (var_5)))));
                            var_43 = (-(((((/* implicit */_Bool) 234881024U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1] [i_1]))) : (arr_36 [i_13 - 1] [i_3] [i_1]))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            arr_59 [(short)13] [(short)13] [i_3] [i_13] [i_1] = ((/* implicit */long long int) arr_35 [i_1] [i_1] [i_1]);
                            arr_60 [i_1] [i_2] [i_1] [i_17] [i_17] = var_7;
                            var_44 = ((/* implicit */unsigned short) 1117178413U);
                            var_45 = ((/* implicit */unsigned short) ((unsigned int) min((((((/* implicit */_Bool) var_17)) ? (498) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_8)))));
                            arr_61 [i_1] [i_13 + 3] [i_3] [i_2 + 2] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 1583085997U)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (signed char)127))))));
                        }
                        for (unsigned short i_18 = 0; i_18 < 20; i_18 += 1) 
                        {
                            arr_64 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (short)3771);
                            arr_65 [19LL] [10] [13ULL] [i_1] [i_3] [i_13] [i_18] = ((/* implicit */long long int) ((arr_48 [i_2] [i_13]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                            arr_66 [i_1] [i_1] [i_18] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)65528)) * (((/* implicit */int) arr_55 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] [i_1])))) | (((/* implicit */int) arr_55 [(unsigned short)8] [i_2 + 1] [i_2] [i_2] [i_1] [i_1]))));
                            var_46 = ((/* implicit */long long int) (unsigned char)123);
                        }
                        var_47 = ((/* implicit */unsigned int) (short)-3772);
                    }
                }
            } 
        } 
        var_48 ^= ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) (~(952979259)))))));
    }
}
