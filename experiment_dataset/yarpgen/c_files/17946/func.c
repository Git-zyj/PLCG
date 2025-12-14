/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17946
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
    var_19 = (-(((/* implicit */int) ((788747290736471587ULL) != (((/* implicit */unsigned long long int) 0LL))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_18)) != (max((((/* implicit */unsigned long long int) ((unsigned int) -1LL))), (var_0)))));
                var_20 = ((/* implicit */long long int) var_10);
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_21 = -13LL;
                        arr_16 [i_1] [i_1 + 2] [i_2] [i_2] [19ULL] = (+(((/* implicit */int) (unsigned short)60738)));
                    }
                    arr_17 [20] |= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0)))))) >= (((unsigned long long int) arr_14 [(short)8] [i_1 + 4])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                arr_23 [i_4] [i_4] [i_1] [i_4] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) (-(arr_1 [i_0 + 2])));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_5))));
                                arr_24 [i_0] [i_1] [i_0] [i_1] [i_1] = ((unsigned int) arr_1 [i_0 + 2]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (-1211647771))));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 2; i_7 < 20; i_7 += 1) 
                    {
                        arr_32 [i_0 + 3] [(signed char)17] [i_1] [(signed char)17] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)60752)) : (((/* implicit */int) var_11))))))) % (983040U)));
                        arr_33 [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((int) 4293984255U))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (((1152921504606846975LL) % (((/* implicit */long long int) 3245514551U))))))));
                    }
                    var_24 = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (2ULL) : (((/* implicit */unsigned long long int) var_9)))) << (((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_3 [i_0 + 3] [i_1] [i_6 + 1])) - (4308)))))))) ? ((~(max((var_2), (((/* implicit */unsigned int) var_17)))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_16))))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (2ULL) : (((/* implicit */unsigned long long int) var_9)))) << (((((/* implicit */int) var_11)) >> (((((((/* implicit */int) arr_3 [i_0 + 3] [i_1] [i_6 + 1])) - (4308))) - (23563)))))))) ? ((~(max((var_2), (((/* implicit */unsigned int) var_17)))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_16)))))))));
                    var_25 = ((/* implicit */unsigned int) ((signed char) min(((!(((/* implicit */_Bool) arr_31 [i_0] [i_6] [i_1] [i_1] [i_1] [i_0])))), (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_11)))))));
                }
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) max(((+(1152912708513824768ULL))), (arr_0 [i_0 + 2])));
                        var_27 -= ((/* implicit */unsigned int) max((arr_8 [(_Bool)1] [i_1] [i_8] [i_9]), (((/* implicit */long long int) ((max((arr_21 [i_9] [i_9] [i_8]), (((/* implicit */unsigned long long int) arr_30 [i_0] [13ULL] [i_1] [i_8] [i_9])))) >= (((/* implicit */unsigned long long int) -13LL)))))));
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_2))));
                    }
                    for (unsigned int i_10 = 2; i_10 < 21; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
                        var_30 = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) < ((~(((((/* implicit */int) (_Bool)0)) >> (((1929613292U) - (1929613261U)))))))));
                    }
                    for (unsigned short i_11 = 2; i_11 < 21; i_11 += 4) 
                    {
                        var_31 = ((((int) (short)-19915)) / ((+((+(419140691))))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_17)) + (2147483647))) >> (((1049452744U) - (1049452717U)))))) ? ((-(var_9))) : ((+(((var_5) + (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_8])))))))));
                        arr_46 [i_1] = ((/* implicit */signed char) ((var_3) + (((/* implicit */int) arr_43 [12ULL] [i_1] [i_1 - 1]))));
                        arr_47 [i_0] [i_1] [i_1] [i_8] [i_8] [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) arr_5 [i_0] [i_1]))));
                    }
                    var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-1)) * (((/* implicit */int) (signed char)122))))) + (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384))) : (2ULL))))))));
                    var_34 = ((/* implicit */unsigned long long int) ((_Bool) (~(max((((/* implicit */unsigned long long int) var_11)), (17293831365195726847ULL))))));
                }
                var_35 = ((/* implicit */int) arr_36 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_12 = 2; i_12 < 19; i_12 += 1) 
                {
                    var_36 = ((/* implicit */long long int) 983040U);
                    var_37 = var_2;
                    var_38 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_1 - 1] [i_12 - 2] [i_12])) ? (arr_42 [i_1 + 3] [i_12 - 2] [15U]) : (((/* implicit */unsigned long long int) 1925603699))));
                    var_39 &= ((/* implicit */long long int) arr_44 [i_0 + 2] [i_1 + 2] [i_12 + 1]);
                }
                /* vectorizable */
                for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_13] [i_13])) % (var_6))))));
                    arr_53 [i_0 + 2] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(615614056756994233LL)));
                }
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    arr_56 [i_14] &= ((/* implicit */int) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4362862139015168ULL)))) : (9223372036854775807LL))), (((((/* implicit */_Bool) (unsigned char)161)) ? (arr_26 [i_0 - 2]) : (((((/* implicit */_Bool) arr_40 [i_0] [i_1] [i_14])) ? (arr_8 [i_1] [9LL] [9LL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_14])))))))));
                    var_41 = ((/* implicit */_Bool) ((((arr_40 [i_0 - 1] [i_1] [i_1]) <= (arr_40 [i_14] [i_1 + 1] [i_0]))) ? (((/* implicit */long long int) ((1925603699) >> (((-259861296973232539LL) + (259861296973232568LL)))))) : (((((arr_40 [i_0] [i_1] [i_0]) + (9223372036854775807LL))) << (((((var_4) + (1441620230))) - (54)))))));
                    var_42 = ((/* implicit */signed char) arr_29 [i_1] [i_1] [i_14]);
                }
            }
        } 
    } 
}
