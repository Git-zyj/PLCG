/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145209
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
    var_20 = ((/* implicit */unsigned int) min((14504474125278827230ULL), (14504474125278827230ULL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_11 [i_2] [(unsigned short)2] [i_0] = ((/* implicit */unsigned char) var_15);
                    var_21 = ((/* implicit */_Bool) min((min((1645223527), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) (unsigned short)59908)) - (59879)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)59908)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-8))));
                            var_22 -= ((/* implicit */unsigned char) var_15);
                        }
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) ((((var_17) <= (((/* implicit */int) (unsigned short)65535)))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_7 [i_0 + 1]))));
                            arr_23 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] |= arr_7 [i_0];
                            var_23 = ((/* implicit */short) (-(((var_14) & (14504474125278827230ULL)))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */int) (unsigned short)36345)) | (((/* implicit */int) (short)-12914))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0 - 1])) || (((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 1]))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (unsigned short)60523)) - (60515)))));
                        arr_26 [i_1] [i_2] = ((/* implicit */int) ((unsigned char) (unsigned short)65535));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        arr_31 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [i_0] [1U] [4])))))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3942269948430724373ULL)) ? (3942269948430724376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92)))))) ? (5318285092913715025ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29949)))));
                        arr_32 [i_0 + 2] [i_0] [(short)16] [i_0] = ((/* implicit */unsigned short) (signed char)75);
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))) - (((((/* implicit */_Bool) var_0)) ? (5318285092913715025ULL) : (14504474125278827230ULL)))))));
                            var_29 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1]))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((_Bool) (_Bool)1))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 2; i_9 < 14; i_9 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 9533990346973339780ULL))) ? (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned short)28797)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (_Bool)0)))))));
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_29 [i_0] [i_9])) : (((/* implicit */int) arr_36 [i_0] [i_0 + 2] [i_9 - 2]))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_33 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                            var_34 *= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (unsigned short)0)))) || (((/* implicit */_Bool) 3942269948430724373ULL))));
                            var_35 = ((/* implicit */short) var_18);
                            arr_42 [i_0] [i_2] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [12] [12] [i_2] [i_7] [i_10])) % (-1259010847)));
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4064U)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (int i_11 = 2; i_11 < 14; i_11 += 2) 
                        {
                            arr_45 [i_11] [i_2] [i_1] = ((unsigned short) 9533990346973339786ULL);
                            var_37 -= var_12;
                            var_38 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)-15074)) ? (((/* implicit */int) (short)9864)) : (((/* implicit */int) var_11))))));
                        }
                    }
                }
            } 
        } 
    } 
}
