/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18333
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0 + 3] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (arr_4 [i_0 + 1]))), (((/* implicit */unsigned long long int) var_2)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 1]))) : (var_6)))));
                        arr_10 [i_2] [i_1] [i_2] [i_2] [i_3 - 4] [i_2] = ((/* implicit */short) arr_6 [i_0] [i_1] [i_2] [i_3]);
                    }
                } 
            } 
            arr_11 [i_1] [i_0] [i_1] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_4 [i_1]) : (arr_3 [i_0 + 1] [i_0 + 3] [i_0 + 3])))) || (((/* implicit */_Bool) min((arr_8 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1] [i_0])) > (((/* implicit */int) (unsigned char)0))))) <= (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (11521587359748463825ULL)))) ? (((arr_1 [i_0] [i_1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_0] [i_0])) ? (-1794508144) : (((/* implicit */int) (unsigned char)5))))))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
        {
            arr_14 [i_0] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_4 [i_0])))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        var_18 *= ((/* implicit */short) ((arr_16 [i_0] [i_4] [i_0] [i_0]) >= (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                        var_19 |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1]))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)255))))) ? (arr_8 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))))));
            arr_19 [i_0 + 3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0 - 1])) & (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_18 [i_0] [i_0] [i_7] [i_7])), ((+(((/* implicit */int) arr_23 [i_0] [i_9]))))))), ((+(min((arr_17 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0] [i_9]))))))));
                        arr_26 [i_0] [i_0] [i_0] [i_7] [i_9] = ((/* implicit */unsigned char) ((((int) ((unsigned long long int) arr_8 [i_7] [i_7] [i_8] [i_9]))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)0)))) > ((~(var_12))))))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) arr_4 [i_7])) ? ((((-(var_11))) << (((min((4294967295U), (((/* implicit */unsigned int) arr_20 [i_7])))) - (129U))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_7] [i_7])))))))));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8] [i_9]))) <= (8941400022178197339LL)))) >> (((((/* implicit */int) arr_22 [i_0] [i_0] [i_0 + 3] [i_8 + 1])) - (225)))))) ? (min((((/* implicit */long long int) 4294967295U)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_9]))) : (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7] [i_7] [i_0])))));
                    }
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                    {
                        arr_31 [i_7] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_17 [i_0] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 + 3] [i_7] [i_10]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)255), (var_4))))))), (((/* implicit */unsigned long long int) arr_30 [i_8 + 2] [i_0 + 1] [i_0 + 3] [i_0 + 1] [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            var_24 = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */long long int) 4294967295U)))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((arr_4 [i_8 + 2]) > (((/* implicit */unsigned long long int) arr_29 [i_0]))))))));
                            arr_34 [i_0] [i_0] [i_7] [i_8] [i_10] [i_10] [i_0] = ((/* implicit */unsigned int) ((789437955364940060LL) / (((/* implicit */long long int) (-(max((arr_9 [i_0 + 1] [i_0] [i_0] [i_10]), (((/* implicit */int) (unsigned char)245)))))))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) - (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */unsigned long long int) arr_25 [i_10] [i_7] [i_10])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))))))))));
                        }
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            arr_37 [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_0 + 1] [i_8 + 2] [i_8 + 1]))));
                            arr_38 [i_0] [i_0] [i_0 - 1] [i_10] [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)1))))) ? (((((/* implicit */int) (unsigned char)244)) + (arr_32 [i_0] [i_0] [i_10] [i_12]))) : (((/* implicit */int) arr_18 [i_0 + 2] [i_7] [i_0 + 2] [i_12]))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) 4294967269U))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_10] [i_7] [i_0 + 2] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (var_16))))));
                            var_28 ^= ((/* implicit */unsigned long long int) (~(arr_36 [i_8 + 2] [i_8] [i_8 - 1] [i_10] [i_8 + 2] [i_8])));
                        }
                    }
                    var_29 += ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_8 + 1] [i_8 + 1] [i_8])) ? (((/* implicit */int) arr_12 [i_8 + 1] [i_8] [i_8])) : (arr_9 [i_8 + 2] [i_8] [i_8] [i_8]))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_13 = 2; i_13 < 23; i_13 += 2) 
                    {
                        arr_41 [i_0] [i_0] [i_0 + 3] [i_7] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned char) (unsigned short)3);
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (((~(var_12))) <= (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)109)))))))) % ((~(((((/* implicit */_Bool) arr_8 [i_7] [i_8 - 1] [i_8] [i_8 - 1])) ? (arr_33 [i_0] [i_7] [i_0] [i_13 - 2] [i_0]) : (((/* implicit */int) arr_7 [i_0] [i_7] [i_0] [i_13]))))))));
                        var_31 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_8 [i_13] [i_0] [i_0 - 1] [i_0 + 3]) : (((/* implicit */unsigned long long int) arr_32 [i_0] [i_8 - 1] [i_8 - 1] [i_8 + 2]))))) ? (arr_32 [i_8] [i_8 + 2] [i_13] [i_13 + 1]) : (((arr_32 [i_0 - 1] [i_8 + 2] [i_8 + 1] [i_8 + 2]) ^ (arr_32 [i_8] [i_8 - 1] [i_13] [i_8])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        var_32 &= ((/* implicit */unsigned short) var_3);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
                        {
                            var_33 = ((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) (unsigned char)228)) - (214))));
                            var_34 &= ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0 + 2] [i_14] [i_15])))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
                        {
                            arr_52 [i_16] [i_7] [i_16] [i_14] [i_7] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(5322816028493046558ULL)))) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) arr_44 [i_0 + 2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (unsigned short)29518))))));
                            var_35 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_22 [i_14] [i_8 + 2] [i_7] [i_0 + 2])) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned short)44838))))));
                            arr_53 [i_7] [i_8] [i_14] [i_8] [i_0 - 1] [i_0 - 1] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_0] [i_7] [i_8] [i_16])) : (((/* implicit */int) (unsigned char)243))))) ? (arr_36 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7] [i_16] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_16] [i_14] [i_8 + 1] [i_7] [i_0])) && (((/* implicit */_Bool) arr_18 [i_8 + 2] [i_7] [i_8] [i_14])))))));
                            arr_54 [i_0] [i_14] [i_8 + 1] [i_7] [i_16] [i_8 + 2] = ((/* implicit */unsigned long long int) arr_16 [i_16] [i_0 + 1] [i_8] [i_0 + 1]);
                            var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_14] [i_0 + 1] [i_0])) ? (1234854358398373179ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0 + 2] [i_8 + 1] [i_8 + 2]))))))));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                        {
                            var_37 = ((((/* implicit */_Bool) (~(4894092385029854287ULL)))) ? (arr_8 [i_7] [i_8 - 1] [i_8 + 1] [i_8 + 2]) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (arr_17 [i_0] [i_0]))));
                            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1870451896833143802LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_2)))))) || (((var_1) <= (((/* implicit */long long int) arr_9 [i_0] [i_7] [i_8] [i_17]))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        var_39 = (-(arr_60 [i_0 + 1] [i_0 + 2]));
                        arr_61 [i_0] [i_7] [i_0] [i_18] [i_8 + 2] [i_7] = var_15;
                        var_40 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                    }
                }
            } 
        } 
    }
    var_41 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (var_14));
    var_42 |= (-(((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned long long int) (+(var_12)))) : (8822896016644220638ULL))));
}
