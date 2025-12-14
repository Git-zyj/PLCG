/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138528
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
    for (int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) (unsigned short)13938)))));
                var_19 *= ((/* implicit */unsigned int) min(((-(((/* implicit */int) min(((unsigned short)51597), (((/* implicit */unsigned short) (_Bool)1))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    arr_8 [i_0] [18LL] [9] [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) arr_5 [i_1 + 1] [(unsigned short)14] [i_0 - 3] [i_0])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 4; i_3 < 24; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5)) ? (-7633170868153198818LL) : (((/* implicit */long long int) 1905863810U))))) == (((((/* implicit */_Bool) 3666871361U)) ? (9338106129673961492ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(0)))) / (((((/* implicit */_Bool) 628095934U)) ? (9338106129673961492ULL) : (((/* implicit */unsigned long long int) -960101550952927552LL))))));
                        arr_12 [i_1] [i_1] [(_Bool)1] [(signed char)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-103))))) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 3] [i_0 + 1] [i_0] [i_0] [i_0 - 3])) : (((/* implicit */int) arr_5 [i_3 - 4] [i_3] [i_3] [i_3 - 3]))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_22 ^= ((/* implicit */unsigned short) arr_1 [8LL]);
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)54439)) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)54439)))))));
                            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1 + 2]))));
                        }
                        for (short i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) (+((-(var_9)))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (var_8)))) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15))) : (arr_15 [i_0] [2LL] [(short)3] [(signed char)22] [(short)3]))) + (32LL)))));
                        }
                        for (short i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                        {
                            arr_19 [i_1] [14LL] = ((/* implicit */int) ((arr_17 [i_3] [i_2] [i_0] [i_2] [i_1 - 1] [i_0 + 1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            var_27 = ((((/* implicit */_Bool) 628095934U)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(unsigned char)18] [i_3] [i_3] [5] [i_3])) && (((/* implicit */_Bool) (unsigned char)226))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)24]))))));
                            arr_20 [i_0] [i_1] [(short)14] [i_3] [10ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1 + 2] [i_3 + 1] [2ULL])) | (((/* implicit */int) (signed char)-103))));
                        }
                    }
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    var_28 *= ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_10 [(unsigned short)14] [6] [0U] [i_1] [(short)16] [i_0]))))));
                    arr_24 [1ULL] [14LL] [14LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)115))))) ? (1613718692981515974LL) : (((/* implicit */long long int) (+(-4))))));
                }
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    arr_29 [i_1] = ((/* implicit */_Bool) ((((arr_23 [i_0]) >= (arr_23 [(unsigned short)9]))) ? (((int) var_5)) : (((/* implicit */int) ((unsigned short) (short)10)))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((var_16) - (((/* implicit */unsigned long long int) var_17))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13939))) / (((unsigned int) (short)-5)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                }
                /* vectorizable */
                for (signed char i_9 = 1; i_9 < 24; i_9 += 3) 
                {
                    var_30 *= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (unsigned short)13938)) ? (((/* implicit */int) (short)-20)) : (((/* implicit */int) (unsigned char)0)))));
                    var_31 = ((/* implicit */_Bool) (signed char)0);
                }
                arr_32 [i_0 - 4] [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
                var_32 *= (short)0;
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51598)) ? (((/* implicit */int) (unsigned short)51598)) : (((/* implicit */int) (unsigned char)233))))) ? (((((/* implicit */_Bool) min(((short)-2770), (((/* implicit */short) (signed char)115))))) ? (((unsigned long long int) var_14)) : (((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (var_17)))), ((+(((/* implicit */int) (unsigned char)253)))))))));
}
