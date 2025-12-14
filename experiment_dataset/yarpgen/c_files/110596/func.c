/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110596
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
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) != (var_5)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_1 + 1] = ((((arr_0 [i_0]) / (((/* implicit */unsigned long long int) arr_4 [i_0] [i_2])))) + (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)3)), (((((/* implicit */int) (short)30028)) + (((/* implicit */int) (short)-30029))))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */_Bool) arr_3 [i_3] [i_1 + 1] [4ULL]);
                        arr_10 [i_1] [(unsigned short)9] [(unsigned short)9] [i_1 - 1] [(unsigned short)9] = ((/* implicit */signed char) arr_6 [i_3] [i_2] [i_0] [i_0]);
                        arr_11 [i_1 - 1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))) - (((((/* implicit */_Bool) ((8857569061790705550ULL) - (((/* implicit */unsigned long long int) var_7))))) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8)))))))));
                        /* LoopSeq 4 */
                        for (int i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */short) (~(((/* implicit */int) ((arr_14 [i_0] [i_1 - 1] [i_1 + 1] [i_3] [i_4 - 1] [i_4 + 1]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))))));
                            arr_17 [i_4] [i_3] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) (~(-8974109172342723170LL)));
                            arr_18 [i_4] [i_4] [i_2] [i_1 - 1] [i_1] [i_4] [i_0] = ((/* implicit */short) max((((3ULL) >> (((((/* implicit */int) (unsigned char)91)) - (58))))), (((/* implicit */unsigned long long int) ((((2619648916U) >> (((((/* implicit */int) (short)-30029)) + (30047))))) / (((/* implicit */unsigned int) ((((/* implicit */int) (short)30032)) * (((/* implicit */int) (signed char)31))))))))));
                            var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_2))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1])) ? (arr_21 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2]) : (((/* implicit */int) ((14672509556325480518ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))));
                            var_14 = ((/* implicit */long long int) var_10);
                            var_15 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1 + 1] [i_5]);
                        }
                        for (int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                        {
                            arr_25 [i_2] [i_2] [i_2] [1U] [1U] [i_2] = ((/* implicit */unsigned char) min((((((((/* implicit */int) arr_15 [i_0])) * (((/* implicit */int) (unsigned short)24791)))) | ((-(((/* implicit */int) var_10)))))), ((~(((/* implicit */int) (_Bool)1))))));
                            var_16 *= ((/* implicit */signed char) max((((((/* implicit */int) (signed char)18)) >> (((((14672509556325480509ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))))) - (30ULL))))), (((/* implicit */int) ((short) arr_8 [i_0] [i_0] [0U])))));
                        }
                        for (int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                        {
                            var_17 += ((/* implicit */short) (!(((/* implicit */_Bool) max(((short)-30029), (arr_20 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                            arr_28 [i_7] [i_1 - 1] [i_7] [i_3] [i_7] = max((((/* implicit */int) ((_Bool) -1612505730))), (max(((~(((/* implicit */int) var_8)))), ((~(((/* implicit */int) (unsigned char)33)))))));
                            arr_29 [(short)2] [i_7] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) (unsigned short)63522)) ? (var_0) : (((/* implicit */unsigned long long int) 2185499240453744253LL)))))) >= (((/* implicit */unsigned long long int) min((min((536870911U), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) arr_5 [i_0] [i_1 + 1] [i_1 + 1] [i_0])))))));
                        }
                        arr_30 [i_0] [i_0] [i_2] [i_0] = (((_Bool)0) ? (((/* implicit */unsigned long long int) 3119843807806362014LL)) : (10790760740773878225ULL));
                    }
                    for (unsigned short i_8 = 1; i_8 < 10; i_8 += 1) 
                    {
                        arr_34 [i_0] [i_0] [i_2] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)91)) ? (442453445) : (((/* implicit */int) var_3))))), (max((var_0), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) 4028293061U)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-23019))))))) : (var_7)));
                        var_18 = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)15)), ((unsigned short)32768)))))));
                    }
                    for (short i_9 = 2; i_9 < 13; i_9 += 3) 
                    {
                        arr_38 [i_0] [i_1] [i_1] [i_9] = ((/* implicit */signed char) (-((+(arr_2 [i_1 + 1] [i_1 + 1])))));
                        arr_39 [i_0] [i_1 + 1] [(unsigned char)5] [i_9] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((unsigned long long int) (short)-30017))))));
                    }
                    for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        arr_42 [(signed char)3] = ((/* implicit */short) (+(max((((((/* implicit */int) var_10)) + (((/* implicit */int) var_2)))), (((((/* implicit */int) (short)7504)) - (((/* implicit */int) (unsigned short)24338))))))));
                        var_19 = ((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [(unsigned char)0]);
                    }
                    arr_43 [i_1 + 1] = max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_1)) / (-2147483643)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) | (min((0ULL), (((/* implicit */unsigned long long int) var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 2; i_11 < 13; i_11 += 3) 
                    {
                        for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            {
                                arr_49 [i_0] [i_1 + 1] [i_12] [i_11] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4173))) : (-831343241757014151LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))))), (18446744073709551615ULL)));
                                arr_50 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_5)), (130223023595837398LL))) / (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))))) % ((-(var_0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) var_9);
}
