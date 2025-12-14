/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106332
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_10 ^= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)225))));
                    var_11 *= ((/* implicit */short) ((unsigned long long int) ((unsigned short) 1623905829U)));
                }
                for (signed char i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                {
                    var_12 -= (-(((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_6)))) : (((/* implicit */int) var_1)))));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_2)), (var_4)))) ? (((/* implicit */int) ((short) (unsigned short)22769))) : (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [(unsigned short)21])))))) : (((long long int) ((_Bool) (_Bool)1)))));
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned char) max(((-2147483647 - 1)), (((/* implicit */int) ((unsigned short) (unsigned short)65535))))));
                }
                for (signed char i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                {
                    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)101)), (((short) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), ((unsigned short)65535)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_6 [(short)17] [i_1 + 1] [i_4]))))) : (max((var_8), (((/* implicit */unsigned long long int) 0LL)))))))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((long long int) max((1623905829U), (((/* implicit */unsigned int) ((short) arr_0 [(signed char)16])))))))));
                    arr_12 [i_0] [(unsigned short)7] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65528)) ? (0ULL) : (8644374725144052329ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)7))) ? (((long long int) arr_2 [i_0] [i_0] [i_4])) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2)) / (((/* implicit */int) (unsigned char)208))))))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_5 = 1; i_5 < 23; i_5 += 4) /* same iter space */
                {
                    arr_16 [i_0] [i_5] = ((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)101)));
                    arr_17 [i_5] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((-5315571932780570881LL) + (((/* implicit */long long int) 1623905839U)))) : (-1LL)));
                    arr_18 [(_Bool)1] [i_1] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65519)) << (((((((/* implicit */int) arr_0 [i_1])) + (72))) - (8))))))));
                }
                for (unsigned short i_6 = 1; i_6 < 23; i_6 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) ((int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (21U))));
                    arr_23 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32617)) ? (3351494592U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                }
                arr_24 [i_0] |= ((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)153)) >> (((((/* implicit */int) (unsigned short)65522)) - (65495)))))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((-7458388658570079675LL) + (7458388658570079686LL)))))) | (((unsigned int) (_Bool)1)))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_2))))));
                            arr_30 [i_0] = ((_Bool) ((short) (-(((/* implicit */int) arr_8 [(signed char)13])))));
                            arr_31 [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((int) arr_11 [i_0] [i_1] [(unsigned char)12] [i_1])))) ? (max((181654274U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [(unsigned char)8] [i_1] [(unsigned char)8] [(unsigned char)16] [i_1 + 1] [(unsigned char)16])) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) || (((var_0) || (((/* implicit */_Bool) var_2))))))))));
                            var_19 |= ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) arr_26 [i_1] [i_1 - 1] [i_1 - 1] [4LL])));
                        }
                    } 
                } 
                var_20 |= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((unsigned char) arr_1 [8] [2LL])))) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6817))) % (181654274U)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_9 = 2; i_9 < 17; i_9 += 1) 
    {
        arr_35 [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) arr_0 [i_9 - 2]))), (((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_9] [23U] [i_9] [i_9]))))))) ? (((/* implicit */unsigned long long int) ((int) var_7))) : (((unsigned long long int) (short)27420))));
        var_21 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)65280)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), ((_Bool)1))))) & ((~(14123387787919488869ULL)))))) ? (((unsigned int) arr_33 [i_9] [i_9 + 1])) : (((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 1045975745632042229ULL)) ? (((/* implicit */int) arr_13 [(unsigned short)22])) : (((/* implicit */int) var_1)))))))));
    }
}
