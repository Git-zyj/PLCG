/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13525
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
    var_16 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) ((0ULL) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (max((arr_1 [i_0] [(_Bool)1]), (((/* implicit */long long int) var_0)))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_3 [i_0 - 3] [i_1 - 1] [i_1]), (arr_3 [(unsigned short)2] [i_1 - 2] [i_1]))))));
                        arr_10 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) var_11);
                        var_19 |= ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) var_2)) / (arr_0 [i_0 - 3])))));
                        var_20 = ((/* implicit */_Bool) ((unsigned short) ((_Bool) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_14))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        arr_14 [i_0] [1ULL] [i_0] = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) -1453866331)) / (var_13)))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_0 - 1] [i_4] [i_1 - 2] [i_4])) / (((/* implicit */int) arr_13 [i_4] [i_4] [i_1 + 1] [(_Bool)1])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 1) 
                        {
                            var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (arr_4 [i_0] [i_1] [i_1 + 1]))) : (((16777216) | (((/* implicit */int) arr_15 [i_5] [i_4] [i_2] [i_2] [i_1 + 1] [i_0] [i_0]))))));
                            var_23 = ((/* implicit */signed char) ((((_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0 - 2] [i_5])));
                        }
                        var_24 = ((/* implicit */signed char) ((var_2) <= (((/* implicit */int) arr_15 [i_4] [i_4] [i_1 - 1] [i_1] [i_1 + 1] [3U] [i_0 - 1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_22 [i_6] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1])) ? (arr_19 [i_6 + 1] [i_1 - 2] [i_1] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (arr_1 [i_0 - 3] [i_1 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_0] [3]) : (((/* implicit */long long int) var_1))))) ? (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_7] [i_6] [i_6]))) : (var_14))) : (((/* implicit */unsigned int) ((var_12) ? (var_2) : (((/* implicit */int) (signed char)-122)))))))))))));
                                arr_23 [i_7] [i_2] [i_6] [6] [i_7] [7LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 16711381680564756950ULL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)128)) ? (min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_11 [i_0] [i_1])))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_26 &= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 25; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_9 = 3; i_9 < 22; i_9 += 2) 
        {
            for (unsigned short i_10 = 2; i_10 < 23; i_10 += 4) 
            {
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    {
                        var_27 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_27 [i_9 + 1] [i_9])), (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9 + 1] [i_9 + 1] [i_9 + 3] [i_9 - 2] [i_9] [i_10 - 1])))))));
                        var_28 = ((/* implicit */_Bool) arr_32 [i_8]);
                        arr_35 [i_11] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */short) 1237469617);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_38 [(unsigned short)24] [i_12] = ((/* implicit */_Bool) max((max((((/* implicit */short) arr_26 [i_8])), (arr_25 [i_12]))), (((/* implicit */short) ((((/* implicit */unsigned long long int) arr_24 [i_8])) < (var_13))))));
            var_29 *= ((max((var_15), (((/* implicit */unsigned long long int) arr_27 [i_8] [i_8])))) << (((/* implicit */int) ((_Bool) (unsigned short)63047))));
        }
        for (unsigned char i_13 = 3; i_13 < 21; i_13 += 1) 
        {
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((_Bool) ((((((/* implicit */_Bool) var_13)) ? (arr_36 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25611))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(unsigned short)21])))))))));
            arr_42 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((6036747736920121058ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_13 + 4]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1453866331)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) (_Bool)1)) : (((var_2) - (((/* implicit */int) (short)18678))))))));
            var_31 -= ((/* implicit */unsigned int) var_2);
            arr_43 [i_13] = ((/* implicit */unsigned short) (_Bool)1);
        }
    }
    for (unsigned char i_14 = 3; i_14 < 15; i_14 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (int i_16 = 3; i_16 < 15; i_16 += 1) 
            {
                {
                    arr_51 [i_16] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) ? (((arr_30 [i_14 - 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (9007199254736896ULL) : (9007199254736908ULL)))) ? (((/* implicit */int) arr_40 [i_16 - 2] [i_14 - 3])) : (((((/* implicit */int) arr_33 [i_14] [i_14] [i_14] [i_14 - 1] [i_14] [i_14])) ^ (-1453866332))))))));
                    arr_52 [i_14] [i_15] [i_14] = ((/* implicit */unsigned char) arr_29 [i_14]);
                    arr_53 [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_27 [i_14] [i_14]), (arr_27 [i_16 - 2] [i_14 - 1])))) ? (max((var_10), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_15] [i_14])))))));
                    var_32 = ((/* implicit */unsigned short) (+(((((/* implicit */int) max((var_7), (var_7)))) & (min((var_8), (((/* implicit */int) (unsigned short)21403))))))));
                    arr_54 [i_14] [(unsigned short)16] [i_16 - 3] [i_14] = ((/* implicit */long long int) var_11);
                }
            } 
        } 
        arr_55 [i_14] = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)18678))))), (max((var_3), (((/* implicit */unsigned long long int) (_Bool)0)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
        {
            for (signed char i_18 = 1; i_18 < 16; i_18 += 3) 
            {
                {
                    arr_61 [i_14] [i_17] [i_14 - 2] [i_14] = ((/* implicit */long long int) (+(var_14)));
                    var_33 -= ((/* implicit */unsigned int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-18686)) : (((/* implicit */int) arr_27 [i_18 + 1] [i_17])))));
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((((/* implicit */_Bool) ((unsigned int) arr_46 [(unsigned short)6]))) ? (var_15) : (max((((/* implicit */unsigned long long int) var_4)), (arr_30 [i_14]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_11)))))))));
                    arr_62 [i_18] [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((unsigned int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (7035343304805266055ULL))), (((/* implicit */unsigned long long int) min((6291456U), (((/* implicit */unsigned int) (_Bool)1))))))));
                }
            } 
        } 
    }
    for (unsigned char i_19 = 3; i_19 < 15; i_19 += 3) /* same iter space */
    {
        arr_66 [(signed char)15] = ((/* implicit */unsigned char) var_12);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_20 = 1; i_20 < 16; i_20 += 3) 
        {
            var_35 ^= ((/* implicit */unsigned short) ((((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [(unsigned short)2] [i_20] [i_20]))))) << (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)106))))));
            var_36 *= ((/* implicit */unsigned int) ((long long int) var_15));
        }
    }
    var_37 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(max((((/* implicit */int) var_11)), (var_8)))))) - (max((max((var_13), (((/* implicit */unsigned long long int) var_8)))), (max((((/* implicit */unsigned long long int) var_5)), (var_13)))))));
    var_38 = ((/* implicit */long long int) ((unsigned long long int) var_6));
}
