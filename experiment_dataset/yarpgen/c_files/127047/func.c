/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127047
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3703066278U)))))));
        var_15 = arr_0 [i_0] [i_0];
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) var_6);
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) arr_6 [i_1]))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (short)28569)) <= (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */signed char) ((var_11) ^ (arr_16 [i_2 - 1] [(unsigned char)0])));
                            var_20 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_8))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            arr_20 [i_1] [i_3] [i_3] [i_4] [i_3] [(short)5] [(short)5] = ((/* implicit */unsigned char) ((arr_4 [i_1] [i_2 + 1]) % ((~(((/* implicit */int) var_14))))));
                            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) - (1631167245U)));
                        }
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */short) (-(var_13)));
                            var_23 = ((/* implicit */unsigned long long int) ((_Bool) var_14));
                            var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (short)-15797)) : (((/* implicit */int) (_Bool)0))));
                            var_25 ^= ((/* implicit */long long int) arr_9 [i_1] [i_1]);
                        }
                        arr_24 [(signed char)4] [i_1] [(signed char)4] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_1] [i_4])) ? (arr_16 [i_1] [i_2 + 2]) : (arr_16 [i_2 + 2] [i_1])));
                    }
                }
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_9 = 3; i_9 < 15; i_9 += 4) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((14387171036511616136ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9])))))) || (((/* implicit */_Bool) arr_0 [i_9 + 1] [i_9 + 1]))));
            var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61587)) ? (((/* implicit */unsigned int) var_11)) : (var_9))))));
        }
        for (unsigned short i_10 = 4; i_10 < 12; i_10 += 2) 
        {
            arr_33 [i_8] = ((/* implicit */unsigned short) (+(((((var_11) + (2147483647))) << (((((var_12) + (2065238761))) - (18)))))));
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    {
                        var_28 = ((/* implicit */int) var_1);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_13 = 2; i_13 < 13; i_13 += 4) 
                        {
                            var_29 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_35 [i_13 + 1] [i_10 - 1] [i_8]))));
                            var_30 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_37 [i_13 - 1]))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-78)) ^ (-324369667)));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_10 + 2] [i_10 + 4] [i_13 + 3])) && (((/* implicit */_Bool) ((short) var_7)))));
                        }
                        for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
                        {
                            arr_42 [i_14] [i_12] [i_11] [i_8] [i_8] = ((/* implicit */unsigned int) var_5);
                            var_33 ^= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-14)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)-10381)))));
                        }
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((0U) % (((/* implicit */unsigned int) -1309381841))))) ? (((/* implicit */int) min((arr_0 [i_10 + 4] [i_10 + 4]), (var_3)))) : ((+(958857466))))))));
                    }
                } 
            } 
        }
        arr_43 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 10483921411630400485ULL)))))) != (((/* implicit */int) arr_41 [i_8] [i_8] [(unsigned short)14] [i_8] [i_8] [i_8] [(signed char)12]))));
        var_35 = var_0;
        var_36 = ((/* implicit */unsigned char) (+(((((var_7) ? (arr_35 [i_8] [i_8] [i_8]) : (arr_35 [i_8] [i_8] [i_8]))) << (((((/* implicit */int) var_3)) - (36033)))))));
        arr_44 [(_Bool)1] [i_8] = ((/* implicit */signed char) var_12);
    }
    var_37 ^= ((/* implicit */signed char) var_14);
    var_38 = (!(((/* implicit */_Bool) var_10)));
    var_39 = ((/* implicit */unsigned long long int) var_5);
}
