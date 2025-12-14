/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159684
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
    var_11 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9652105441583936079ULL)) && (var_2)))), (((unsigned long long int) (unsigned char)252)))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)83)))), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_0)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (-2811115248639552790LL))))) > (((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) (short)24576))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)24569), (((/* implicit */short) (unsigned char)3)))))) : (((long long int) arr_3 [i_1] [i_0]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_10 [i_2]);
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_16 [i_2] [i_2] = (unsigned char)252;
                            var_13 = ((/* implicit */signed char) min((var_13), ((signed char)-51)));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-40)) ? (2166656897U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)233)))));
                            arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) (short)-7154)) ? (9652105441583936071ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14019))));
                            var_15 = ((/* implicit */unsigned short) ((unsigned int) arr_6 [i_1 + 1] [i_1 + 3]));
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]))) : (-2910652343258972520LL))) : (((((/* implicit */_Bool) (unsigned short)43360)) ? (-2811115248639552790LL) : (-2811115248639552790LL)))));
                            arr_22 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_5] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0])) || (((/* implicit */_Bool) arr_3 [i_5] [i_5]))));
                            arr_23 [i_5] [i_3] [i_2] [i_3] [i_2] [i_1] [i_0] = ((((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) arr_11 [i_5] [i_5])))) & (((/* implicit */int) (unsigned char)207)));
                        }
                        var_17 = ((/* implicit */unsigned short) ((int) ((unsigned long long int) arr_1 [i_0] [i_0])));
                        var_18 ^= ((((/* implicit */_Bool) ((int) arr_5 [i_3]))) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2])) : (2147483647));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) + (18446744073709551603ULL))))))));
                        var_20 = ((/* implicit */unsigned int) ((signed char) arr_7 [i_1] [i_1] [i_1 - 2]));
                        var_21 = ((/* implicit */int) ((6884647515197758303LL) >= (((/* implicit */long long int) 3942721121U))));
                        arr_28 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 2077790723)) ? (7442751223079581771LL) : (-7252764737369752909LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((unsigned long long int) arr_1 [i_0] [i_1 + 2])))));
                    }
                    arr_29 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] [i_2]))) : (min((((/* implicit */unsigned long long int) 70692177)), (16224331177849759909ULL)))));
                    var_23 = ((/* implicit */unsigned int) ((((unsigned long long int) ((2077790725) / (((/* implicit */int) arr_15 [i_2]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((214255562), (((/* implicit */int) (short)-2470))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) : (min((137438691328LL), (((/* implicit */long long int) 2077790704)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((((min((((/* implicit */unsigned long long int) var_2)), (var_5))) % (((/* implicit */unsigned long long int) ((-1741004846) / (((/* implicit */int) (signed char)113))))))), (var_5)));
}
