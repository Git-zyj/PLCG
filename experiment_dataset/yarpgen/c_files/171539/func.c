/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171539
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((508050093U), (1772519324U)))) ? (min((((/* implicit */unsigned long long int) var_9)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((3786917183U) - (var_0))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned int) 5575238400936055169ULL);
                        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) / ((-(((((/* implicit */_Bool) 508050093U)) ? (16891974858997871978ULL) : (((/* implicit */unsigned long long int) var_4))))))));
                        var_17 = ((/* implicit */long long int) 2447937104U);
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_10)))) ? (var_5) : (3786917203U))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = (unsigned char)251;
                            var_19 = ((/* implicit */unsigned int) (unsigned char)4);
                            var_20 = var_0;
                        }
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)19)) ? (13545275559800351004ULL) : (((((/* implicit */_Bool) var_8)) ? (2251799813685247ULL) : (((/* implicit */unsigned long long int) 5095818779743639199LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3939377564U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4648333532216150930LL))))));
                            arr_17 [11ULL] [i_0] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)9)) ? (3821401875487903136ULL) : (12984547568554947795ULL)));
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_5] = (-((-((-(((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (7655072974135524414ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_23 += ((/* implicit */_Bool) (+(0LL)));
                        }
                    }
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(7655072974135524402ULL)))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) | (12984547568554947771ULL))))) : (((/* implicit */unsigned long long int) 0U))));
                    var_25 = ((/* implicit */unsigned short) (+(((-987616216) + (((508) * (((/* implicit */int) var_6))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) (~((-(min((((/* implicit */unsigned int) var_12)), (var_8)))))));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) min((1980447837), (((((/* implicit */_Bool) 3134089307U)) ? ((~(((/* implicit */int) (unsigned short)6)))) : ((~(((/* implicit */int) (unsigned char)131)))))))))));
    }
    var_28 = ((/* implicit */_Bool) var_10);
    var_29 = ((/* implicit */unsigned int) var_4);
}
