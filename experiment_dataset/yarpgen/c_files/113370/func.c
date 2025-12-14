/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113370
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((var_6) - (min((((arr_5 [16U] [i_0] [16U]) << (((7081145217724283980ULL) - (7081145217724283948ULL))))), (8955184645016904587ULL)))));
                    var_14 = ((/* implicit */long long int) arr_3 [i_0]);
                    var_15 = ((/* implicit */unsigned long long int) var_11);
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                    {
                        var_16 = var_0;
                        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 1060609954715410268ULL)))))) ? (((long long int) 10775700284179850150ULL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-14431)) && (((/* implicit */_Bool) (signed char)-8))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) (unsigned char)55);
                        var_19 = ((/* implicit */int) var_6);
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((-974984384696356238LL), (((/* implicit */long long int) 0U))))) ? (((((/* implicit */_Bool) 18126995113493549454ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_2)))) - (((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_4] [i_2] [i_0]))))) && (((/* implicit */_Bool) (+(arr_6 [i_0] [i_0] [i_0] [(_Bool)0] [i_0]))))))))))));
                        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_8 [i_0] [i_4]) && (((/* implicit */_Bool) 2147483646LL)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-104)))))))) : (((((/* implicit */_Bool) ((int) var_5))) ? (min((var_7), (arr_5 [i_1] [i_1] [i_4]))) : (arr_5 [i_4] [i_2] [i_4])))));
                    }
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_5 [i_0] [i_0] [(_Bool)1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((4LL) - (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))));
                            var_24 = ((/* implicit */short) 12113378085956392793ULL);
                            var_25 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_11 [i_2] [i_2] [i_0] [17ULL])))) ? (((/* implicit */unsigned long long int) (~(1516014672)))) : (((var_0) / (var_0)))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32752)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) : (-7828049445319012462LL)));
                            var_27 = ((/* implicit */long long int) arr_0 [i_0]);
                        }
                    }
                    for (short i_7 = 2; i_7 < 16; i_7 += 3) 
                    {
                        arr_21 [i_7] [(_Bool)0] [2LL] [2LL] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) * (var_9)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 527263486U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(short)2] [i_1] [(unsigned short)12] [(unsigned short)12] [i_1]))) : (arr_15 [i_0] [6] [i_0] [i_0] [i_0])))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-11367)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_28 = (+(max((((/* implicit */long long int) arr_16 [i_7 - 1] [i_7 + 1] [i_8] [i_7 - 1] [i_7 - 1])), ((-(var_10))))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)89))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) var_1))))))));
                            var_30 = ((/* implicit */unsigned long long int) ((((arr_20 [i_0] [i_1] [i_8] [i_8] [i_7 - 2]) | (arr_20 [i_0] [i_1] [i_8] [i_2] [i_7 - 2]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && ((_Bool)1)))) < (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            arr_26 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned int) -7552854560171211759LL));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                        {
                            var_31 += ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [16ULL] [i_2] [i_0]))) / (-5411628716049443238LL))), (var_10)))) : (min((((2243003720663040ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_9]))))), (((8796093022207ULL) * (var_9)))))));
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1]))) % (((unsigned long long int) (-(((/* implicit */int) var_4)))))))));
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((signed char) arr_18 [i_2] [i_7] [1] [i_7])))));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [(_Bool)1] [i_1]))));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 3669128110U)) || (((/* implicit */_Bool) 13707653812698751952ULL))))) | (-2020677661)));
                        }
                        var_36 = ((/* implicit */_Bool) -6950442802428827384LL);
                    }
                }
            } 
        } 
    } 
    var_37 = ((_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (18446744073709551612ULL) : (0ULL)));
    var_38 = ((/* implicit */signed char) ((((var_9) | (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) <= (((/* implicit */unsigned long long int) 4294967295U))));
}
