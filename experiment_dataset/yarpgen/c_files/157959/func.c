/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157959
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
    var_16 = ((/* implicit */int) (+((~(var_0)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_17 *= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (_Bool)0)) >> (min((var_10), (((/* implicit */unsigned long long int) (unsigned char)26)))))));
        var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), ((~(arr_0 [(_Bool)1] [i_0 + 1])))));
        arr_2 [5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 - 1])) : (arr_0 [i_0 + 1] [(signed char)2]))) % (((/* implicit */unsigned long long int) ((int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) : (((unsigned long long int) var_1))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_1)), (arr_4 [i_1])))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (arr_6 [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (unsigned char)26))))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (((int) var_1)) : (((/* implicit */int) arr_3 [i_1] [i_1])))) == (((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_3 [i_1] [4U]))) > ((-(((/* implicit */int) (unsigned char)22)))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */int) (unsigned char)23);
        var_19 += ((/* implicit */unsigned char) (~(min((var_10), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))))));
        var_20 += ((((/* implicit */_Bool) (~(((unsigned int) (signed char)64))))) ? (((/* implicit */int) var_4)) : (949108558));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 21; i_4 += 1) 
            {
                {
                    var_21 &= ((/* implicit */short) max(((-(((/* implicit */int) (unsigned char)28)))), (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_10 [i_2 - 1] [i_4 + 2]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 1) 
                    {
                        arr_21 [22] [i_3] [16U] [i_5] [i_5] &= ((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (var_0)));
                        var_22 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_4] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_5] [i_4 + 2] [i_3] [i_2])))));
                        var_23 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5 - 1] [i_3] [i_2 - 1] [i_3] [i_2])) ? (arr_19 [i_5 - 1] [i_3] [i_2 - 1] [i_3] [i_2]) : (((/* implicit */int) var_12))))) ^ (((((/* implicit */_Bool) arr_19 [i_5 - 1] [i_3] [i_2 - 1] [i_3] [i_2])) ? (((/* implicit */unsigned int) arr_19 [i_5 - 2] [i_3] [i_2 - 1] [i_3] [i_2 - 1])) : (var_15))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)229))));
                        var_25 = ((/* implicit */unsigned long long int) var_11);
                        arr_26 [10] |= ((/* implicit */unsigned char) 67108863U);
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */int) 4227858430U);
                            var_27 += ((/* implicit */unsigned int) ((short) arr_22 [21] [12] [i_2 - 1]));
                            var_28 = ((/* implicit */unsigned short) (-(((2636708722U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38)))))));
                        }
                        for (int i_8 = 2; i_8 < 22; i_8 += 4) 
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_20 [(unsigned short)16] [i_3] [i_4 + 1] [i_8 + 1])) - (67108863U)))) ? (var_0) : (((/* implicit */long long int) arr_29 [i_8 - 1] [i_8] [i_3] [i_8]))));
                            arr_33 [i_3] [i_3] [i_3] [i_3] [i_6] [i_8 + 1] [i_8] = ((/* implicit */unsigned int) (~(arr_29 [i_2 - 1] [i_4 + 2] [i_3] [i_6])));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)224)) ? (2648777037U) : (((/* implicit */unsigned int) -1635253014))));
                            arr_34 [i_3] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */int) arr_13 [i_3] [i_4 + 3]);
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 3) 
                    {
                        var_31 += ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [10] [10] [i_4] [i_9 + 1] [i_3] [(unsigned char)16])) && (((/* implicit */_Bool) arr_27 [i_2] [i_3] [i_4 - 1] [i_9 + 3] [i_4 + 1] [16]))))), ((~(min((((/* implicit */int) var_1)), (var_11)))))));
                        arr_39 [i_3] [i_4 + 2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)27)), ((unsigned short)65535))))));
                    }
                }
            } 
        } 
        arr_40 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)28)) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_2])) : (arr_19 [i_2] [6] [i_2] [6] [i_2])))) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65507))))))) - (37774)))));
        arr_41 [i_2 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_19 [i_2] [i_2] [i_2] [(unsigned char)22] [i_2]))))));
        arr_42 [i_2 - 1] |= ((/* implicit */int) (unsigned short)1336);
        var_32 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_14 [18ULL] [i_2 - 1] [i_2] [i_2])))) >> (((((unsigned int) min((var_9), (((/* implicit */int) (unsigned short)1336))))) - (1326U)))));
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
    {
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_15)))) ? (3566303375U) : (((/* implicit */unsigned int) ((int) var_11)))));
        var_34 -= ((/* implicit */unsigned int) arr_11 [i_10]);
        /* LoopSeq 1 */
        for (int i_11 = 1; i_11 < 16; i_11 += 1) 
        {
            arr_47 [i_10] [i_10] [i_10] = ((/* implicit */int) ((((arr_24 [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 1]) + (9223372036854775807LL))) << (((788224089) - (788224089)))));
            arr_48 [i_10] = ((/* implicit */unsigned short) ((long long int) arr_36 [i_11] [i_11] [i_11 + 1] [i_11 - 1]));
        }
        var_35 ^= ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_35 [i_10] [i_10] [1LL] [1LL]))))));
    }
    var_36 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) | (((unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 67108874U)))))));
}
