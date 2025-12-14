/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149431
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
    var_15 = ((/* implicit */int) max((var_14), (((/* implicit */long long int) max((((((/* implicit */unsigned int) (-2147483647 - 1))) >= (3221225472U))), (var_11))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), ((((!(((/* implicit */_Bool) ((short) (-2147483647 - 1)))))) ? (((/* implicit */unsigned long long int) ((int) var_5))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) * ((-(var_7)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 = min((((((/* implicit */_Bool) var_3)) ? (max((2147483642), (((/* implicit */int) (signed char)127)))) : (((((/* implicit */int) var_5)) >> (((((/* implicit */int) (unsigned char)71)) - (47))))))), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_2 - 2])) : (((((/* implicit */_Bool) 12582912)) ? (((/* implicit */int) arr_2 [i_2] [i_1])) : (((/* implicit */int) var_12)))))));
                    var_18 |= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 66846720U)))))) | (max((((/* implicit */unsigned long long int) var_9)), (var_8))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (_Bool)0)) : (-2147483646)))) ? (((/* implicit */int) min(((_Bool)1), (var_1)))) : ((~(((/* implicit */int) arr_3 [15])))))))));
                    var_19 ^= ((/* implicit */unsigned char) arr_6 [i_0] [(_Bool)1] [(_Bool)1] [i_2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 15; i_4 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_4 [i_4] [i_0])), ((((!(((/* implicit */_Bool) -2147483636)))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_2 [i_0] [i_3])), (arr_11 [(short)10])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (var_11))))))));
                    var_21 &= ((/* implicit */unsigned char) 1073741819U);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_4 - 1] [i_0])) >= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (unsigned short)0))))) ? ((+(3836691300584723191ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_4] [i_4] [i_4 - 1] [i_4])) & (((/* implicit */int) var_1)))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 4) 
        {
            for (short i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                {
                    var_23 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4095)) ? (((/* implicit */int) (short)31743)) : (((/* implicit */int) (signed char)97))))) ? (((/* implicit */unsigned long long int) -2147483646)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))) + (15030739215734781063ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 91106032U))))))))));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)-127)))), (((((/* implicit */_Bool) (signed char)-115)) ? (-2147483636) : (((/* implicit */int) arr_19 [i_5]))))))) ? (((((((/* implicit */_Bool) arr_14 [i_5] [i_6 - 2])) || (var_1))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)146)))) : (((/* implicit */int) var_0)))) : (((((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) 67092480U)))) ? (((503316480) | ((-2147483647 - 1)))) : ((~(var_6)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            arr_25 [i_5 - 2] [i_8] [i_5 - 2] = ((/* implicit */signed char) max((max(((-(((/* implicit */int) var_12)))), ((+(((/* implicit */int) (signed char)127)))))), ((-(arr_24 [i_5 + 2])))));
            arr_26 [i_5 + 1] [i_5] [i_8] = ((/* implicit */int) (+(min((((/* implicit */unsigned int) -1937518382)), (3321819598U)))));
            var_25 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (short)23282)) && (((/* implicit */_Bool) ((arr_13 [i_5 + 1] [i_5 + 1]) ? (var_4) : (91106032U))))))));
        }
        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) (_Bool)1)) : (1994212611)));
                /* LoopNest 2 */
                for (signed char i_11 = 3; i_11 < 17; i_11 += 3) 
                {
                    for (int i_12 = 1; i_12 < 17; i_12 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(-2147483631)))), (min((var_7), (18446744073709551615ULL)))));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)48707)) && (arr_13 [i_5 + 2] [i_5 + 2]))) ? (-294678418838659209LL) : (((/* implicit */long long int) ((arr_13 [i_5 - 1] [i_11]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))))))) ? ((((_Bool)0) ? (1047552U) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_27 [(unsigned char)0] [i_11] [i_12 + 2])), (arr_24 [i_5])))))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-18899)))) ? (((arr_34 [i_10]) ? (503316463) : (((/* implicit */int) (signed char)-107)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-12)), (arr_14 [i_5] [15LL])))))))));
                            arr_40 [i_5 + 2] [i_5 + 2] [i_10 - 1] [i_11] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-108))))), ((~(1073741823U)))))) ? (((((/* implicit */_Bool) max((3221225471U), (1073741824U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) arr_20 [1ULL] [i_10] [i_11])) ? (var_8) : (((/* implicit */unsigned long long int) 3221225484U)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (3670016U)))) ? (min((12636275775274124202ULL), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)124)))))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((arr_31 [i_5 + 1] [i_10] [i_10 - 1] [10ULL]) ? (((/* implicit */int) arr_31 [i_5 - 1] [i_5 - 1] [i_10 - 1] [i_10 - 1])) : (((/* implicit */int) arr_31 [i_5 + 2] [8] [i_10 - 1] [14LL]))))), (max(((+(1890004541U))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_5] [i_9] [i_10] [i_10 - 1])))))))));
                var_30 = (((-(((/* implicit */int) ((((/* implicit */_Bool) 503316463)) || (((/* implicit */_Bool) (signed char)124))))))) > (((/* implicit */int) ((unsigned char) -864772072))));
            }
            var_31 -= ((/* implicit */_Bool) ((((/* implicit */int) min((arr_36 [i_5 - 2] [i_9] [i_5] [i_9]), (arr_36 [i_5 + 2] [i_5] [(short)4] [i_9])))) | (((/* implicit */int) (!(((/* implicit */_Bool) (+(1073741812U)))))))));
            var_32 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_23 [i_5]))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
    {
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            {
                var_33 = ((/* implicit */unsigned int) (unsigned short)512);
                var_34 = ((/* implicit */unsigned short) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_13] [i_14]))))) > (((/* implicit */int) arr_44 [(unsigned short)0] [i_14 + 1] [(unsigned short)11])))) ? (((((/* implicit */int) arr_20 [i_14 + 1] [i_14 + 1] [(_Bool)1])) >> (((-5349467940427241360LL) + (5349467940427241373LL))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_13] [i_13] [i_13] [i_13])))))))));
            }
        } 
    } 
}
