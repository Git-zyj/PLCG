/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127176
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
    var_11 = ((/* implicit */unsigned short) 375363243146657979LL);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        var_12 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -4306727434816958163LL)) ? (((/* implicit */int) (short)-26536)) : (((/* implicit */int) (short)14)))) != ((+(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 24; i_3 += 1) 
                {
                    {
                        arr_8 [i_3] [i_1 + 2] [i_1 + 2] [i_3 - 1] [i_3 - 1] [i_3] = ((short) (((~(arr_5 [i_0] [i_1] [i_2]))) & ((~(((/* implicit */int) var_1))))));
                        var_13 = ((/* implicit */_Bool) max((17346671722458375006ULL), (((((((/* implicit */_Bool) (short)-26551)) ? (7910299182707499488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 2]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12717)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 2; i_4 < 24; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    arr_15 [i_0] [i_0] [i_5] [i_0] = ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)26534)))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                arr_22 [i_7] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (4113357196U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (max((((/* implicit */int) var_10)), (747213287)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((2952102772U) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) 261896815U)) ? (((/* implicit */int) arr_21 [i_0] [i_0])) : (((/* implicit */int) var_7))))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 2] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)189))))) + (((long long int) var_9))))));
                                var_14 += ((/* implicit */long long int) arr_0 [i_0]);
                                var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)41392)) <= (((/* implicit */int) (unsigned short)46855)))))));
                                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) var_10)))), (((((/* implicit */_Bool) (unsigned short)41392)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)42)))))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_4 + 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)46))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [(_Bool)1]))) : (max((4611686018427387903LL), (arr_12 [i_7] [i_7] [i_7] [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        var_18 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_8] [(_Bool)1] [i_8])) : (((/* implicit */int) (unsigned char)114)))))) & ((~(((/* implicit */int) arr_7 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) (unsigned char)212);
            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) arr_14 [i_8] [i_8] [(unsigned char)11])) : (((/* implicit */int) var_5))))))))));
        }
        for (short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(arr_3 [i_8] [i_10])))), (117440512U)));
            arr_30 [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) 488536363)), (7161560U)));
        }
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) 1980376888))), (((((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [i_8])) >> (((((/* implicit */int) var_7)) - (2772)))))))) ? (((/* implicit */int) max((arr_24 [i_8]), (arr_24 [i_8])))) : (((/* implicit */int) ((signed char) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))));
    }
    /* LoopNest 2 */
    for (long long int i_11 = 2; i_11 < 18; i_11 += 1) 
    {
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        for (short i_15 = 3; i_15 < 18; i_15 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)16262)) >> ((((+(((/* implicit */int) (signed char)-95)))) + (117)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned short)52834), (var_9))))))) : (((long long int) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */unsigned long long int) 562949953421311LL)) : (9747799472301404877ULL))))));
                                arr_44 [(short)1] [i_12] [i_13] [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)64599), ((unsigned short)23328))))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) : (var_6)))))) ? (((unsigned int) (short)1022)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)201)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))))))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))) ^ ((-(var_4)))))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((0LL) / (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-1028))))))))))));
                                var_26 = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) arr_12 [11LL] [11LL] [i_13] [i_14])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_11 - 1]), (arr_33 [i_11]))))) : (4362862139015168LL)))));
                            }
                        } 
                    } 
                } 
                arr_45 [i_12] = ((/* implicit */long long int) min(((unsigned char)255), (((/* implicit */unsigned char) max(((signed char)-94), (((/* implicit */signed char) (_Bool)1)))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)12724))));
}
