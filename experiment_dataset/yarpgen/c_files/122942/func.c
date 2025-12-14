/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122942
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
    var_13 = ((unsigned short) ((((2147483631) - (((/* implicit */int) (unsigned short)63240)))) - (min((((/* implicit */int) var_8)), (2147483647)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_5 [(signed char)7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) * (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_4 [i_1] [(unsigned char)11]))));
        }
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (unsigned int i_3 = 4; i_3 < 12; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((unsigned int) arr_4 [i_2] [i_3 + 3])))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        for (short i_5 = 2; i_5 < 13; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((long long int) ((arr_14 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_0] [i_0] [i_4 + 1]) - (((/* implicit */int) (short)-22304)))));
                                arr_17 [i_0] [i_2] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) ((short) ((signed char) -2147483637)));
                                var_17 = ((/* implicit */long long int) ((signed char) min((((/* implicit */int) arr_4 [i_5] [(unsigned short)10])), (((((/* implicit */_Bool) (short)29603)) ? (((/* implicit */int) (short)-19923)) : (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
                    {
                        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)252)) ? (((/* implicit */int) (short)-15614)) : (((/* implicit */int) (short)23221))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)187))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_3 - 1] [i_6])) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned short)65535))))) ^ (((((/* implicit */_Bool) (unsigned short)65533)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
                        arr_20 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) ((int) arr_13 [i_2] [i_3]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_6] [i_3 - 1]))))) : (((long long int) arr_2 [i_0] [i_0])))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(short)10] [i_0] [i_3] [i_6])) << (((var_12) - (10872152)))))) ? ((~(((/* implicit */int) arr_18 [i_0 - 1])))) : (((((/* implicit */_Bool) 1171312711)) ? (arr_14 [i_0] [(signed char)7] [i_0] [i_0] [i_0] [i_0]) : (arr_2 [i_0 - 1] [i_0]))))) + (65461)))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
                    {
                        arr_23 [i_0] [(signed char)4] [i_7] [i_7] [i_0] [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_3 - 1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_3 + 3] [i_0]))));
                        arr_24 [i_0] [i_2] [i_0] [i_3 - 1] [i_7] [i_7] = ((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 + 1]);
                    }
                }
            } 
        } 
        arr_25 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */int) (short)-22296)) % (((/* implicit */int) (short)23232)))));
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 14; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 1; i_9 < 13; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                {
                    arr_34 [i_8] [i_9 - 1] [i_9] [i_10] = ((/* implicit */unsigned int) ((unsigned short) arr_14 [i_8] [i_8] [(signed char)8] [i_8] [i_9 + 2] [i_9]));
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        var_19 = (+(((/* implicit */int) arr_9 [i_8 - 1] [i_8 + 1] [i_8 + 1])));
                        arr_37 [i_8] [i_8] [i_10] [i_11] = arr_21 [i_11] [i_8] [0] [i_8];
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_8 - 1] [10LL] [i_11] [i_11])) ? (((/* implicit */int) arr_26 [i_10] [i_8])) : (((/* implicit */int) arr_26 [i_8] [i_8]))));
                        arr_38 [i_8] [8] &= ((/* implicit */short) 405210688);
                    }
                    for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_8 - 1] [i_8]))));
                        var_22 = ((/* implicit */int) max((var_22), ((~(((/* implicit */int) arr_35 [i_9 + 1] [i_9] [i_8 - 1] [i_12]))))));
                        var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_36 [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_9 - 1] [i_9 + 2])) + (2147483647))) << (((((/* implicit */int) arr_13 [i_8 - 1] [i_8 + 1])) - (44983)))));
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            var_24 ^= ((long long int) arr_1 [(unsigned short)14]);
                            var_25 |= ((/* implicit */int) arr_39 [i_13] [i_12] [i_10] [i_9 + 2] [i_8] [i_8]);
                            arr_43 [i_8] [(_Bool)0] [14U] [i_12] [i_13] [i_13] &= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) -1)) : (453312359U)));
                        }
                    }
                }
            } 
        } 
        var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8 + 1] [i_8 + 1] [i_8 + 1])) ? (arr_6 [i_8 - 1] [i_8 - 1] [i_8 + 1]) : (arr_6 [i_8 - 1] [i_8 + 1] [i_8 + 1])));
        arr_44 [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)19945))));
        var_27 ^= ((/* implicit */signed char) ((short) 1725794214));
    }
    var_28 = ((/* implicit */unsigned int) (+(var_12)));
    var_29 -= ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_11)) : (var_3));
    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_4))));
}
