/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143930
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [1U] [i_1] = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)26143)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 2]))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)0)), (var_19)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2] [i_1] [i_2])) * (((/* implicit */int) (unsigned char)255))))) : (1048575U))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))) : (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2]))))) : (((/* implicit */int) (!((_Bool)1)))))))));
                            var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) (short)29826))) != (((/* implicit */int) (unsigned char)128))));
                        }
                        for (int i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            arr_15 [i_2] [i_1] [i_1] [i_2 + 1] [i_2] = ((/* implicit */short) ((((2239111818862499798LL) <= (((/* implicit */long long int) 4293918707U)))) ? ((+(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)1134)) : (((/* implicit */int) (short)29525)))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)10)) > (((/* implicit */int) var_19)))))));
                            var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) 8796093022207LL))));
                            var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18446744073709551615ULL)))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) var_11);
                            var_24 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((int) var_1)));
                        }
                        arr_20 [i_3] [i_1] [i_1] [i_0] = min((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (12981319866698934165ULL))));
                        arr_21 [i_0] [i_0] [i_1] [i_2] [9ULL] [i_3] = ((/* implicit */int) ((7558728222985328000LL) >> (((((/* implicit */int) (short)1024)) - (972)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                arr_26 [i_1] [(_Bool)1] [i_2] [(_Bool)1] [i_8] [i_0] [i_8] = ((/* implicit */unsigned short) (-(min((max((-6169208443600260406LL), (((/* implicit */long long int) arr_19 [i_1] [i_7] [i_2 + 3] [i_1])))), (((/* implicit */long long int) min(((unsigned char)1), (var_11))))))));
                                arr_27 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)7)) != (((/* implicit */int) (short)12568))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (-8796093022205LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6)))))) : (max((var_14), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (arr_0 [i_8] [i_7]) : (((/* implicit */long long int) (((_Bool)0) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_2 - 1] [i_2 + 2] [i_2]))))))));
                                var_26 |= ((/* implicit */short) -1174574837);
                                var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) -222725196)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            {
                                var_28 += ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned char) arr_23 [i_0] [i_10] [i_2] [i_2 - 1] [i_2] [i_2 - 1]))), (((((/* implicit */_Bool) -4364911208955999621LL)) ? (var_0) : (((/* implicit */long long int) var_17))))));
                                arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_9] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)939))))) ? (max((281474976710144ULL), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)30))))))) << (((max((max((5465424207010617464ULL), (((/* implicit */unsigned long long int) -8796093022205LL)))), (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))))) - (18446735277616529396ULL)))));
                                arr_34 [i_0] [(_Bool)0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)173))))) | (((((/* implicit */_Bool) (unsigned char)78)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_15)) ? (536608768U) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))), (((/* implicit */unsigned int) var_15))))) ? (max((((/* implicit */unsigned long long int) ((4293918720U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) (unsigned short)6535)) ? (2558145144846867544ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)5] [i_1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_16 [i_9] [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225)))))) ? (((/* implicit */int) ((var_13) || (((/* implicit */_Bool) (unsigned char)15))))) : (((/* implicit */int) arr_31 [i_0] [i_1] [i_2] [i_9] [i_10] [i_2 + 3])))))));
                                var_30 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)15)), (0LL)))), (((unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4116))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_31 += ((/* implicit */unsigned char) var_8);
    var_32 = ((/* implicit */long long int) ((var_4) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3LL)) ? (725298853U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_17)))));
}
