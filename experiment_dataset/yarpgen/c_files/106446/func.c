/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106446
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_19 &= ((/* implicit */unsigned int) min((((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (min((((/* implicit */unsigned long long int) var_0)), (11447323623960044768ULL))))), (((/* implicit */unsigned long long int) (-(arr_3 [i_0]))))));
        var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_13))))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((unsigned int) var_6))))));
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_21 += ((/* implicit */_Bool) (-(11447323623960044768ULL)));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 + 1])) : (((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) (-(arr_5 [(short)9])))) : ((+(6999420449749506848ULL)))))));
                    arr_10 [i_2] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_5)))) ? (((/* implicit */int) min((var_1), (arr_7 [i_1] [i_1] [i_1])))) : ((+(((/* implicit */int) arr_1 [i_1 + 1])))))));
                    var_23 = ((/* implicit */signed char) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) 6999420449749506848ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-23))))));
                }
            } 
        } 
        arr_11 [i_1] [i_1] = ((/* implicit */int) arr_2 [i_1] [i_1]);
        var_24 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) arr_0 [i_1 + 1])), (arr_5 [i_1 + 1])))));
        var_25 = ((/* implicit */int) min((min((6999420449749506833ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) (_Bool)0))));
    }
    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        arr_15 [i_4] |= ((/* implicit */short) (+(((unsigned int) 2079245324825686093ULL))));
        var_26 = ((/* implicit */short) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (signed char)127))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            arr_19 [(signed char)0] [(short)7] [i_5] = ((/* implicit */signed char) var_8);
            arr_20 [i_5] [i_5] = ((/* implicit */unsigned short) arr_1 [i_4]);
            var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_13 [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_13 [i_5 - 1] [i_5 + 2]))))), (min((var_2), (var_2)))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2980342193185646145LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-2980342193185646145LL)));
            arr_21 [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) var_14))));
        }
        /* vectorizable */
        for (long long int i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_7 = 1; i_7 < 19; i_7 += 1) 
            {
                arr_27 [i_4] [i_6] [i_7 - 1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_4] [(short)11] [i_6]))));
                arr_28 [i_4] [16LL] [i_4] [i_6] = ((/* implicit */unsigned short) (signed char)-120);
            }
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_6 + 2] [i_6 + 1])) ? (((/* implicit */int) arr_13 [i_6 + 2] [i_6 + 1])) : (((/* implicit */int) arr_13 [i_6 + 2] [i_6 + 1])))))));
            arr_29 [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) arr_24 [i_6 + 1] [i_6]))));
            arr_30 [i_4] [(short)10] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)61917))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_24 [i_6] [i_6]))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -8015702257855340788LL)) ? (((/* implicit */int) arr_25 [i_4] [i_4])) : (((/* implicit */int) arr_33 [i_4] [i_8]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((unsigned short)38523), (((/* implicit */unsigned short) (signed char)-127))))))), (((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) arr_17 [i_4] [i_8])))) : ((+(((/* implicit */int) arr_33 [i_4] [i_4])))))))))));
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-512))));
            arr_35 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)105))))) : (((((/* implicit */_Bool) -5242024207152281273LL)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_2 [i_8] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)38))))))));
            /* LoopNest 2 */
            for (signed char i_9 = 2; i_9 < 17; i_9 += 1) 
            {
                for (short i_10 = 2; i_10 < 19; i_10 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-40))))) ? (arr_23 [i_8] [i_8]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_38 [i_9 + 3] [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9])))))));
                        arr_40 [i_8] = min((((/* implicit */unsigned int) ((short) 7101120925163166578LL))), (((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_4]))) : (var_4))));
                        var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_10 - 1] [i_10] [i_9 - 2] [i_9] [i_9 - 1]))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            arr_44 [i_11] [i_4] = ((/* implicit */unsigned int) arr_36 [i_11] [i_4] [i_4]);
            var_34 = (short)-22360;
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
    {
        for (short i_13 = 0; i_13 < 11; i_13 += 2) 
        {
            for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        for (int i_16 = 4; i_16 < 10; i_16 += 1) 
                        {
                            {
                                arr_58 [i_12] [i_12] [i_14] [i_12] [i_15] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                                var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)38)))))));
                            }
                        } 
                    } 
                    arr_59 [i_12] [i_13] [i_13] [i_13] = min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_14 [i_13] [i_14])) : (((/* implicit */int) ((signed char) -5242024207152281273LL))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_45 [i_13])) ? (1159856681394945930LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_12] [i_12]))))))));
                }
            } 
        } 
    } 
}
