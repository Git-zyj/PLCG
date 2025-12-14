/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181437
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
    var_19 = ((/* implicit */unsigned short) min((-9223372036854775805LL), (((/* implicit */long long int) ((signed char) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)511))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0])))))))), (max((((/* implicit */unsigned long long int) var_16)), (((2534341543745036303ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0])))))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(-6667778108151856643LL))))));
                var_22 |= ((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) arr_0 [i_0])), (9223372036854775801LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -6667778108151856643LL)) && (((/* implicit */_Bool) (short)-4406)))))))) == (((unsigned long long int) arr_3 [i_0])));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)32756)), (((unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            var_24 = (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 3]))) - (-9223372036854775789LL)));
                        }
                        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(unsigned short)6])) ? (((((-9223372036854775801LL) != (((/* implicit */long long int) ((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40770)))))) : (arr_8 [i_1 + 2] [i_1] [i_2 + 1] [i_3 - 2]))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)43095)) - (((/* implicit */int) var_0))))))))))));
                            var_27 += ((/* implicit */unsigned long long int) ((long long int) (signed char)121));
                        }
                        var_28 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_1 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3] [(signed char)1])))))))));
                        var_29 += ((/* implicit */signed char) ((((/* implicit */int) var_9)) != (((/* implicit */int) ((short) ((((/* implicit */int) arr_2 [i_2] [i_0])) % (((/* implicit */int) (short)4396))))))));
                        var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) (((+(12ULL))) >= (11295028143830880404ULL)))) : (((((/* implicit */_Bool) 5897243082706635699LL)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)31))))))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_18 [i_0] [9U] [(unsigned short)9] [(_Bool)1] [i_7] [i_7] [i_1])))))));
                            var_32 = ((/* implicit */unsigned short) (-(arr_7 [i_2 - 3] [i_1 - 4])));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            var_33 = (signed char)-44;
                            var_34 = ((/* implicit */unsigned char) ((short) arr_2 [i_0] [i_0]));
                        }
                        for (long long int i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            arr_30 [i_0] [i_0] [(unsigned short)12] [16ULL] [i_9] [(short)18] [i_2] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_1]) ? (((/* implicit */int) (short)4388)) : (-1)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)47)) >= (((/* implicit */int) var_6))))) : (((/* implicit */int) arr_27 [i_1 + 2] [14LL] [i_2] [i_9 + 1] [i_2 + 1])))));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_2] [i_1 - 4] [i_2] [i_6] [i_9])) ? (max((((arr_15 [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_2] [(_Bool)1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_9 - 1] [i_9] [i_2] [i_2] [i_1] [i_0])) | (-1)))))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) var_13))))))));
                        }
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-52))) % (6556552693186732602LL))))));
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)(-127 - 1))))) != ((~(1991886403U)))))), (arr_17 [i_2 - 3]))))));
                            arr_33 [i_1] |= ((/* implicit */unsigned short) (((((+(339722258U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)22445)) >= (((/* implicit */int) arr_2 [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_6 [i_1])))) ? (((((arr_17 [i_2 + 1]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [i_0])) - (46691))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) : (min((((((/* implicit */_Bool) arr_31 [i_0] [(short)18] [i_2] [i_6] [i_10])) ? (arr_15 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_21 [i_2] [i_1 - 1] [i_6] [i_6] [i_10])))), (max((14662976874427627531ULL), (((/* implicit */unsigned long long int) (signed char)-18))))))));
                        }
                        for (signed char i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                        {
                            var_38 = (i_2 % 2 == zero) ? (((/* implicit */short) ((((((/* implicit */_Bool) ((arr_9 [(signed char)0] [i_11] [(short)3] [(signed char)0] [(short)3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1 - 4] [i_2] [i_2] [i_6] [i_11] [i_11]))) : (var_17)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [(signed char)16] [(signed char)16] [(signed char)16] [i_2] [i_6] [i_2])) / (((/* implicit */int) (unsigned short)22430))))) : (min((((/* implicit */long long int) var_9)), (7736215332860075481LL))))) >> ((((~(((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (unsigned short)480))))))) + (63)))))) : (((/* implicit */short) ((((((((/* implicit */_Bool) ((arr_9 [(signed char)0] [i_11] [(short)3] [(signed char)0] [(short)3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1 - 4] [i_2] [i_2] [i_6] [i_11] [i_11]))) : (var_17)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [(signed char)16] [(signed char)16] [(signed char)16] [i_2] [i_6] [i_2])) / (((/* implicit */int) (unsigned short)22430))))) : (min((((/* implicit */long long int) var_9)), (7736215332860075481LL))))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (unsigned short)480))))))) + (63))))));
                            var_39 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((9223372036854775782LL) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
                            var_40 = ((/* implicit */long long int) arr_3 [i_0]);
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_6] [i_1] [6U] [i_2 - 2] [i_1] [i_1 - 3])) && (((/* implicit */_Bool) arr_18 [19LL] [i_2] [i_2] [i_6] [i_12] [i_6] [1ULL]))))))))));
                            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (((!(((/* implicit */_Bool) ((unsigned long long int) (short)32766))))) ? (((/* implicit */int) arr_36 [i_0])) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_0] [i_6] [i_12])))))));
                            var_43 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2] [(signed char)10] [i_1] [i_6] [(signed char)15]))) | (14662976874427627515ULL)))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)43081))))) : (((/* implicit */int) ((signed char) arr_5 [i_2]))))));
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (unsigned short)22451))));
                            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) var_6)), (arr_25 [i_6] [i_12] [i_2] [i_6 + 1] [i_12] [i_12])))) - (((/* implicit */int) ((signed char) arr_13 [i_2] [i_12] [i_6] [i_0] [i_1] [i_1] [i_2])))))) ? ((-(((/* implicit */int) ((short) arr_25 [i_0] [i_1] [i_2] [i_0] [13] [i_12]))))) : (((((/* implicit */_Bool) -1334422006)) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) arr_35 [12LL] [i_2] [i_2 + 1] [i_2 + 1] [i_6 - 1] [i_12] [i_2]))))));
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_46 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned short)2032)) != (-784357378)))));
                            var_47 = ((/* implicit */unsigned long long int) ((arr_21 [i_13] [i_6 + 2] [(unsigned char)10] [(short)14] [i_6 + 2]) & (arr_21 [i_0] [i_6 - 1] [i_2] [i_2] [i_0])));
                            arr_42 [(signed char)16] [(signed char)16] [i_2] [i_2] [i_2] [i_2 - 2] [i_2] = ((/* implicit */short) 5144277446194376810ULL);
                            var_48 = ((/* implicit */unsigned int) ((long long int) arr_28 [i_1] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_6 + 1] [i_13]));
                        }
                        for (short i_14 = 0; i_14 < 21; i_14 += 3) 
                        {
                            var_49 = ((/* implicit */signed char) (!((!(((((/* implicit */_Bool) arr_40 [i_14] [i_2] [i_2] [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned short)65530))))))));
                            var_50 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)25300)), (7665728074408007558ULL)))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_26 [i_0] [i_6 + 1] [i_1 + 3] [i_2 + 2] [i_14]))))));
                            arr_45 [i_2] [i_2] = ((/* implicit */signed char) min((arr_28 [i_14] [3] [3] [3] [3] [i_0]), (((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2] [i_6] [i_14]))));
                            var_51 = ((/* implicit */signed char) (+(max((((arr_44 [i_6 + 2] [i_1] [i_2 + 1] [i_2 + 1]) >> (((arr_24 [i_14] [i_6] [i_6] [i_2 + 1] [(signed char)7] [(signed char)11]) - (1863634048U))))), (arr_7 [i_0] [i_1])))));
                            var_52 = ((/* implicit */short) 998272742U);
                        }
                        for (short i_15 = 2; i_15 < 19; i_15 += 3) 
                        {
                            arr_48 [i_2] = ((/* implicit */signed char) ((unsigned char) ((signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)))));
                            var_53 |= ((/* implicit */unsigned short) (((_Bool)1) ? (576443160117379072ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42)))));
                        }
                    }
                }
                for (short i_16 = 1; i_16 < 19; i_16 += 2) 
                {
                    arr_51 [i_16] [i_16] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) ((long long int) arr_13 [(unsigned char)19] [i_0] [i_0] [i_0] [i_0] [i_16] [i_16]))))));
                    arr_52 [i_16] [i_1] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_1 + 1] [i_1] [i_1] [i_0]))))) > (((/* implicit */int) arr_47 [i_16 + 1] [i_16] [i_16] [i_16 + 2] [i_1 + 3] [i_1 - 2] [i_0]))));
                }
            }
        } 
    } 
    var_54 = ((/* implicit */short) (+((+((-(((/* implicit */int) (_Bool)1))))))));
}
