/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167003
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_5)))) + (2147483647))) << (((((((/* implicit */long long int) ((/* implicit */int) (short)13037))) | (3945061285675692679LL))) - (3945061285675692783LL)))))) ? ((~(((/* implicit */int) ((short) var_11))))) : (((/* implicit */int) ((signed char) ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0 - 3]))))) ? (((((/* implicit */int) var_11)) / (((/* implicit */int) var_6)))) : (((((/* implicit */int) var_3)) - (((/* implicit */int) arr_0 [i_0]))))));
        var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0])))) <= (((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) var_1)) + (64)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
            var_17 *= ((/* implicit */unsigned char) (((((+(((/* implicit */int) (signed char)-123)))) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0 - 1])) - (17660)))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 - 2] [i_0])) ? (((/* implicit */int) var_8)) : (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) arr_6 [i_0])))))) : (((((/* implicit */_Bool) 3945061285675692683LL)) ? (-3945061285675692667LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-112)))))));
                var_19 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) (unsigned short)54163)))));
                arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_5))) != ((~(((/* implicit */int) var_10))))));
                /* LoopSeq 3 */
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_3] |= ((/* implicit */int) var_10);
                    var_20 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) + (2147483647))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_10)))) - (18465)))));
                }
                for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) (signed char)109)) - (94)))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (short)13056)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (2147483647)))));
                    arr_14 [i_4] [i_4] [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0 - 2] [i_0 - 2] [i_0]);
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_4] [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) (unsigned short)17835)))))));
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    arr_17 [i_0] [i_0] [i_0] [i_5] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_9 [i_0] [i_2] [i_1] [i_0])))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)21672))) & (3945061285675692679LL)))));
                    arr_18 [i_0] [i_1] [i_2] [i_0 - 2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2])) / (((/* implicit */int) arr_0 [i_0])))))));
                    var_23 = ((/* implicit */signed char) ((arr_15 [i_0 + 2] [i_0] [i_0 + 2] [i_2] [i_5]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1018378004U)) ? ((-2147483647 - 1)) : (2147483647))))));
                }
            }
            for (signed char i_6 = 1; i_6 < 10; i_6 += 2) 
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_22 [i_0])))) ? (((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (unsigned short)65506)) : (((/* implicit */int) (signed char)127)))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_6] [i_0] [i_6])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_0]))))));
                arr_23 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_6])) >> (((arr_9 [i_0 + 1] [i_0 + 1] [i_6] [i_0 + 1]) + (705269899)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_21 [i_6])))) : (((((/* implicit */int) arr_8 [i_1] [i_1] [i_6 + 1] [i_1])) ^ (arr_9 [i_0] [i_0] [i_0] [i_6])))));
            }
        }
    }
    for (signed char i_7 = 3; i_7 < 10; i_7 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_8 = 3; i_8 < 10; i_8 += 1) 
        {
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    var_25 = ((/* implicit */signed char) ((long long int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_8])) ? (((/* implicit */int) arr_4 [i_7] [i_7] [i_7 - 3] [i_7 - 3])) : (((/* implicit */int) var_1))))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (arr_22 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_0) : (arr_12 [i_7 + 2] [i_7] [i_7 + 2] [i_9] [i_7] [i_7]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_12 [i_7] [i_8] [i_9] [i_11] [i_10] [i_11]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_7] [i_7] [i_9] [i_7])))))) ? (((var_3) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) arr_26 [i_10] [i_11])))) : (((((/* implicit */int) arr_35 [i_7] [i_7] [i_7] [i_7])) / (arr_31 [i_7] [i_7])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_11] [i_11])) * (((/* implicit */int) arr_16 [i_7] [i_9]))))) ? (((/* implicit */unsigned long long int) arr_36 [i_7] [i_11] [i_7] [i_10] [i_11])) : (((arr_15 [i_7] [i_7] [i_9] [i_10] [i_9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7] [i_7])))))))));
                                arr_38 [i_7] [i_7] [i_9] [i_10] [i_11] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) arr_31 [i_9] [i_9])) : (arr_30 [i_7] [i_8]))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_7] [i_7 + 1] [i_9])) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) arr_21 [i_11]))))))) ? (((var_7) | (((/* implicit */int) arr_0 [i_7])))) : ((+(((/* implicit */int) ((signed char) var_0)))))));
                            }
                        } 
                    } 
                    arr_39 [i_7] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (arr_9 [i_8] [i_8] [i_8] [i_8])))) : (((arr_13 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_9] [i_9] [i_9]) + (((/* implicit */unsigned long long int) arr_22 [i_7])))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((signed char) arr_24 [i_7 + 1] [i_7])))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_36 [i_7] [i_7] [i_7] [i_7] [i_7 - 1])) + (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) -4747829927316149087LL)) : (2165762129011456146ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_7 + 1])) && (((/* implicit */_Bool) arr_32 [i_7] [i_7] [i_7 + 2] [i_7]))))) - (((/* implicit */int) var_5)))))));
        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((arr_30 [i_7 - 1] [i_7 - 3]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [i_7] [i_7 + 1] [i_7]))) : (arr_30 [i_7 - 3] [i_7])))) ? ((+(((/* implicit */int) arr_25 [i_7])))) : (((var_3) ? (var_7) : (arr_9 [i_7] [i_7] [i_7 + 2] [i_7])))))))))));
        var_29 = ((/* implicit */signed char) (-(((/* implicit */int) arr_24 [i_7] [i_7]))));
    }
}
