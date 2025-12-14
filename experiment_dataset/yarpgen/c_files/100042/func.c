/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100042
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_0] [i_0 + 1])), ((-(((/* implicit */int) var_9))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)65535)), (1072693248)))), (min((15496281189515753148ULL), (((/* implicit */unsigned long long int) var_9))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_9 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */_Bool) -1753247965338372697LL);
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) * (1753247965338372693LL))))));
                            arr_13 [i_0] [i_1] [9U] [i_1] = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_1] [i_3] [i_4]);
                        }
                        var_16 = ((/* implicit */unsigned short) ((((arr_5 [i_0 - 3] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0]))))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((_Bool) ((10523185782449210534ULL) >> (((9223372036854775807LL) - (9223372036854775774LL))))));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_3))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            arr_23 [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_0 - 2])) ? (-1669341800) : (((/* implicit */int) var_9))))));
                            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 2; i_8 < 19; i_8 += 3) 
                        {
                            arr_28 [i_1] [i_8] [i_5] [(signed char)5] [i_1] [i_1] = ((/* implicit */int) ((long long int) var_4));
                            var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (signed char)-111))));
                            var_21 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) : (((long long int) var_6)));
                            arr_29 [i_1] [i_5] [i_1] = (~(1182766724));
                        }
                        var_22 = ((/* implicit */long long int) arr_18 [i_0] [i_0 - 2] [(short)1] [i_0 - 2] [i_0 - 2]);
                        arr_30 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) var_12)))))) & (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40929))))))))));
                        arr_31 [18] [i_1] [i_1] [18] [i_5] [i_5] = ((/* implicit */unsigned char) (!((_Bool)1)));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), (var_8)))) : (arr_12 [i_0] [i_0 - 1])))) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((/* implicit */int) (short)21301)))));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_24 = ((/* implicit */short) var_6);
                        var_25 ^= ((/* implicit */long long int) ((unsigned char) var_5));
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_8))))))));
                    }
                    for (int i_10 = 2; i_10 < 19; i_10 += 2) 
                    {
                        var_27 -= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_0 - 1] [i_10 - 2] [i_2])) * (((/* implicit */int) (signed char)15)))) >> (((((/* implicit */int) (unsigned short)26053)) - (26022)))));
                        var_28 *= var_7;
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */_Bool) min(((unsigned short)65522), (((/* implicit */unsigned short) (signed char)79))));
    var_30 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
    {
        for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
        {
            {
                arr_40 [i_12] [i_12] [(signed char)2] |= ((/* implicit */signed char) ((short) (unsigned short)10));
                var_31 &= ((/* implicit */long long int) max((((/* implicit */unsigned short) max((arr_39 [i_12]), (arr_39 [i_12])))), (max((((/* implicit */unsigned short) arr_39 [i_12])), ((unsigned short)24603)))));
                arr_41 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) >> (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) arr_36 [i_11] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-757))) : (18446744073709551614ULL))) : (67108863ULL)));
                var_32 = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)65535));
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((13897326106927032596ULL), (((/* implicit */unsigned long long int) 402653184U)))) & (((/* implicit */unsigned long long int) 4107583213U))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1752746232)) ? (((/* implicit */int) (unsigned short)24779)) : (((/* implicit */int) arr_39 [i_11]))))))))) : (((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)65505)), ((-2147483647 - 1))))) % ((-(7598377795957608467LL)))))));
            }
        } 
    } 
}
