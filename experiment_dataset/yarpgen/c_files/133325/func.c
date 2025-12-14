/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133325
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
    var_18 &= ((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (short)-12500)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        var_19 = ((arr_1 [i_0]) ? (((/* implicit */long long int) ((2147483647) | (arr_2 [i_0] [i_0])))) : (123002702591299015LL));
                        arr_8 [(signed char)11] [(signed char)11] [i_1] [i_1] [i_0] [4LL] = ((/* implicit */short) (!(((/* implicit */_Bool) 787014367))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) min((185235060112723356LL), (var_13))))) ? (min((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0] [(short)16])) ? (((/* implicit */long long int) arr_9 [i_2] [i_0])) : (185235060112723356LL))))) : (max((((/* implicit */long long int) ((((/* implicit */int) (short)-8120)) | (-1797504297)))), ((+(185235060112723356LL)))))));
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_21 = (~(max((arr_3 [i_0]), (arr_3 [i_0]))));
                            var_22 = ((/* implicit */unsigned short) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((_Bool) 1797504285))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-48)))) < (((/* implicit */int) ((unsigned char) (_Bool)1))))))));
                            arr_14 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_4]);
                            arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 3) /* same iter space */
                        {
                            var_23 |= ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) var_1))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) -613121565)))))));
                            var_24 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_4] [(unsigned short)5] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_6]))) : (1099511627712LL)))), (((((/* implicit */_Bool) var_8)) ? (18051791485918191887ULL) : (((/* implicit */unsigned long long int) var_3))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 2; i_7 < 19; i_7 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_12 [i_7] [i_7] [i_4] [i_0] [i_1] [i_0]))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (short)-22623))));
                            arr_20 [i_4] |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
                            arr_21 [i_0] [i_1] [i_2] [i_7 - 2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1797504319)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-22624))) | (3225971226068679124LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-22608)))));
                        }
                        arr_22 [i_0] [(_Bool)1] [i_0] [i_2] [17ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0])) * (((/* implicit */int) (short)-5457))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) max((arr_7 [i_0] [i_1] [(signed char)12] [i_4]), ((short)22608))))))) * (min((((/* implicit */unsigned int) arr_0 [i_0])), (4294967294U)))));
                        var_27 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 7ULL))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-5468)) : (((/* implicit */int) var_11)))), (((((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)19] [i_2] [i_2] [i_0])) >> (((((/* implicit */int) arr_16 [i_0] [4ULL] [4ULL] [i_1] [i_0] [i_0])) - (8106))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) 2395565370U))) : ((~(((/* implicit */int) (short)5))))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 7ULL))) ? (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-5468)) : (((/* implicit */int) var_11)))), (((((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)19] [i_2] [i_2] [i_0])) >> (((((((/* implicit */int) arr_16 [i_0] [4ULL] [4ULL] [i_1] [i_0] [i_0])) - (8106))) - (163))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) 2395565370U))) : ((~(((/* implicit */int) (short)5)))))))));
                        var_28 = ((/* implicit */long long int) 30720);
                    }
                    var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)134)) - (((/* implicit */int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_8] [(short)7] = ((/* implicit */_Bool) -1LL);
                                arr_30 [i_8] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)4960)))) : (((/* implicit */int) ((short) var_1))))), ((-(1991442823)))));
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((3ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(short)10] [i_1] [i_2] [(unsigned short)7] [(unsigned short)0] [(unsigned short)7])))))) ? (((/* implicit */int) max((((/* implicit */signed char) var_2)), (arr_5 [i_2] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_12 [i_9] [i_8] [i_2] [(_Bool)1] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_2] [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_10 = 2; i_10 < 16; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            {
                                var_31 &= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_2))))) >= (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-108))))) && ((_Bool)0))))));
                                var_32 += ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned short) max((arr_33 [i_1] [i_1] [i_10] [2LL] [2LL] [i_1]), (var_3))))) : (((/* implicit */int) (signed char)-23))));
                                var_33 &= ((/* implicit */unsigned long long int) ((_Bool) min((var_5), (((/* implicit */short) arr_6 [i_2] [i_10 + 1] [i_2] [i_10] [i_11 + 1])))));
                            }
                        } 
                    } 
                    var_34 &= ((/* implicit */short) var_16);
                }
            } 
        } 
    } 
}
