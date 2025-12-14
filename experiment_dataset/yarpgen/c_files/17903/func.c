/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17903
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
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) arr_3 [i_0] [(signed char)0])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        arr_14 [i_0] = ((/* implicit */int) var_9);
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            arr_19 [i_0] [i_1] = ((/* implicit */unsigned int) ((signed char) ((arr_6 [i_0] [i_1] [i_3 - 1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0])))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_2 [i_0]))));
                            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (~((~(67624247))))))));
                        }
                        for (signed char i_5 = 2; i_5 < 18; i_5 += 2) 
                        {
                            arr_24 [i_0] [i_0] [i_2 + 1] [i_3 + 1] [i_5] = ((/* implicit */long long int) var_3);
                            var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_1)) ? (-8647802238297785653LL) : (arr_8 [(signed char)10] [i_2 + 1] [(signed char)10] [i_5 - 2])))));
                        }
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_3 - 1] [i_2 + 1] [i_0] [i_0]))));
                            arr_28 [i_0] [i_0] [(short)9] [i_2] [i_0] [i_6] = ((/* implicit */short) arr_5 [i_2 + 1] [i_2] [i_0]);
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((4294967276U) > (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 966584584605824341LL)) ? (67624227) : (((/* implicit */int) (unsigned short)32809))));
                            arr_29 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(var_8)));
                        }
                        arr_30 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3 + 1] = arr_26 [6LL] [i_1] [i_0] [i_2] [8U];
                        arr_31 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (signed char)116))))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            arr_34 [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((unsigned long long int) (short)18675)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            var_17 &= ((/* implicit */unsigned long long int) ((long long int) var_2));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-13)) ^ ((~(((/* implicit */int) (short)-20989)))))))));
                            arr_35 [i_7] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_9 [i_0] [i_0])));
                            arr_36 [(signed char)11] [(unsigned short)2] [i_0] [i_1] [i_0] [i_0 + 1] [i_0 + 1] = (signed char)-112;
                        }
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_40 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) (((+(((/* implicit */int) arr_33 [i_0] [i_8])))) < (((/* implicit */int) var_4))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 2] [i_2 + 1] [i_2 - 1])) ? (arr_26 [i_0 - 1] [i_2 - 1] [i_0] [i_8] [(short)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            arr_43 [i_0] = var_1;
                            arr_44 [i_1] |= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_0)))) + (((/* implicit */int) var_11))));
                            arr_45 [i_0] [(signed char)8] [i_0] [i_2] [i_2 + 1] [i_8] [i_9] = (-(2027760857));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_9] [i_8] [i_0] [i_1] [i_0])) ? ((-(var_1))) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [(unsigned short)7]))));
                        }
                    }
                    for (long long int i_10 = 1; i_10 < 19; i_10 += 1) 
                    {
                        arr_49 [i_0] [i_1] [i_0] [(signed char)2] = ((/* implicit */signed char) ((((int) arr_13 [i_0] [i_1] [i_0] [i_10 + 1])) > (((/* implicit */int) ((signed char) -8647802238297785652LL)))));
                        var_21 -= ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_10]);
                        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_27 [i_0] [i_1] [i_0] [i_10] [i_2 + 1] [i_2 - 1]))));
                    }
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) ((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20989)))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-27166)) / (((/* implicit */int) (signed char)-116))));
                        arr_53 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((unsigned long long int) var_7));
                        arr_54 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_4 [i_2 + 1] [i_0 - 2] [i_0 - 2])));
                    }
                    var_25 = ((/* implicit */unsigned char) 0ULL);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                    {
                        arr_57 [i_0] [i_0 + 1] [i_0] [(signed char)2] [i_1] = ((/* implicit */long long int) ((8647802238297785658LL) <= (((/* implicit */long long int) var_2))));
                        arr_58 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
                    {
                        var_26 *= ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_1] [i_2 + 1] [i_2] [i_13])) && (((/* implicit */_Bool) var_4))));
                        var_28 = ((/* implicit */unsigned char) var_4);
                        var_29 = ((/* implicit */short) var_1);
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
                    {
                        arr_64 [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)0)))) < (((/* implicit */int) var_9))));
                        var_30 = ((/* implicit */unsigned long long int) var_7);
                        /* LoopSeq 3 */
                        for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            arr_67 [i_0 - 1] [i_0] [i_2 + 1] [i_14] [i_0] = var_3;
                            arr_68 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (arr_51 [i_0] [i_0] [i_0])))) << (((17621951132494209906ULL) - (17621951132494209894ULL)))));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (~(((/* implicit */int) (short)-30348)))))));
                            var_32 = ((/* implicit */unsigned int) ((4849805092702987022ULL) & (10294803739397840306ULL)));
                        }
                        for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
                        {
                            var_33 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (arr_26 [i_2 - 1] [i_2 - 1] [i_14] [i_2] [i_2])));
                            arr_73 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */short) ((9223372036854775807LL) >> (((((/* implicit */int) arr_48 [i_14])) - (5197)))));
                        }
                        for (short i_17 = 0; i_17 < 21; i_17 += 4) 
                        {
                            arr_76 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
                            arr_77 [i_17] [i_17] [i_0] [i_17] [i_0] [i_17] [i_17] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                        }
                    }
                }
                var_34 = ((/* implicit */short) (+(arr_39 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 3; i_19 < 20; i_19 += 3) 
                    {
                        {
                            arr_82 [i_0 - 2] [i_0 - 2] [i_1] [i_18] [i_0] = ((/* implicit */unsigned short) min(((+((-(var_6))))), (((/* implicit */int) (short)27165))));
                            var_35 = ((/* implicit */signed char) (+(arr_10 [i_0])));
                            var_36 = ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_27 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_19] [i_19 - 2])), (var_1)))) ? (((10294803739397840312ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)46))))) : (((/* implicit */unsigned long long int) var_2))));
                        }
                    } 
                } 
                var_37 = ((min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (123804467652577562LL)))), (((unsigned long long int) (short)32761)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_0] [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]))));
            }
        } 
    } 
    var_38 ^= ((/* implicit */short) (~((~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 4294967295U)))))))));
    var_39 *= ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-27))))))) : ((+(((var_1) & (((/* implicit */unsigned long long int) var_6)))))));
    var_40 = (+(((/* implicit */int) var_7)));
}
