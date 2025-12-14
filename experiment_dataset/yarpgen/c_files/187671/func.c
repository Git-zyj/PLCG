/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187671
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)129)))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) min(((unsigned char)0), ((unsigned char)129)))), (var_11)))) ^ (((((((/* implicit */int) (unsigned char)111)) & (((/* implicit */int) (unsigned char)140)))) & (((/* implicit */int) max(((unsigned char)249), (((/* implicit */unsigned char) var_2)))))))));
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((-2281391429976050030LL), (((/* implicit */long long int) (unsigned char)44)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)30322))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) ((arr_5 [i_4 + 1]) <= ((+(arr_13 [i_0 - 1] [i_1] [i_0 - 1] [(unsigned char)7] [i_0 - 1] [i_4] [i_4])))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((9804720625538269463ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))))))));
                            var_23 = ((/* implicit */unsigned char) (!(((arr_9 [i_0] [i_0 + 3] [i_0 - 1] [i_0] [i_0] [i_0]) < (((/* implicit */int) (unsigned char)87))))));
                            arr_14 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20158))) > (11633893814900804423ULL)));
                        }
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))));
                            arr_17 [i_3] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0] [i_0 + 3] [i_0] [i_0 + 2] [i_0 + 2]))));
                            arr_18 [i_5] [i_0 - 2] [(unsigned char)4] [i_1] = ((/* implicit */long long int) ((unsigned int) (_Bool)1));
                        }
                        var_25 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)138))));
                    }
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 - 2])) || (((/* implicit */_Bool) arr_5 [i_0 - 2]))));
            }
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_29 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(unsigned char)10] [i_0] [i_6] [i_8] [i_0] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117))) : (arr_11 [i_0] [i_6] [3LL] [i_8 + 1] [i_8 + 1])))) ? (((var_8) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6] [(unsigned short)4])) ? (((((/* implicit */int) var_1)) % (((/* implicit */int) (short)-20158)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)119)))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)146)) ? (9804720625538269448ULL) : (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_0] [i_6] [i_0 + 3]))));
                        var_30 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (short)20157)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)255)))));
                    }
                    for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        arr_34 [i_0] [i_0] [(_Bool)1] [i_0] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_31 ^= ((/* implicit */signed char) ((arr_5 [i_11]) / (arr_5 [i_0])));
                    }
                    var_32 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (short)-32707)) : (((/* implicit */int) (unsigned char)119))))));
                    arr_35 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)113)) ? (((long long int) var_3)) : (((/* implicit */long long int) var_13))));
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */int) (short)26911)) % (((((/* implicit */int) var_1)) << (((/* implicit */int) (_Bool)1)))))))));
                }
                for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    arr_39 [i_0] [8LL] [i_8] [i_12] &= ((/* implicit */_Bool) arr_13 [i_0 + 3] [(unsigned short)10] [i_8] [i_12] [i_8] [i_8] [i_0 - 1]);
                    var_34 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)44416)) - (((/* implicit */int) (short)-20150))))) || (((/* implicit */_Bool) -9223372036854775800LL))));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-21346)) + (((/* implicit */int) (signed char)-107))));
                }
                for (signed char i_13 = 4; i_13 < 9; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        var_36 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (unsigned char)131))) || (((/* implicit */_Bool) arr_22 [(signed char)2] [i_13 + 2] [i_14]))));
                        var_37 = ((/* implicit */_Bool) ((long long int) (short)20158));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_6] [i_13 + 2] [i_13] [i_13])) || (((/* implicit */_Bool) arr_28 [i_13] [i_13 - 1] [i_13 + 2] [i_13] [i_13 - 3]))));
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_0 + 1] [i_8 + 1] [i_8 + 1] [i_0 + 1] [i_13 + 3])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        arr_48 [i_6] [i_6] = ((/* implicit */short) ((arr_23 [i_6]) || (((/* implicit */_Bool) var_12))));
                        var_40 = ((/* implicit */unsigned long long int) var_10);
                        arr_49 [i_0 - 2] [i_6] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) var_5);
                        arr_50 [i_0 + 3] [i_0 - 2] [i_0] [i_0 + 3] [i_0] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)61582))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_41 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_17] [i_8 + 1] [i_6] [i_0 - 2])) ? (arr_37 [i_13 - 1] [i_8 + 1] [i_8 + 1] [i_0 - 1] [i_0]) : (arr_37 [i_13 + 1] [i_8 + 1] [i_8 + 1] [i_0 - 1] [i_0])));
                        var_42 *= ((/* implicit */long long int) (-(((/* implicit */int) arr_51 [i_8 + 1] [i_8 + 1] [(short)4] [i_8] [i_8]))));
                        arr_55 [i_0] [i_6] [i_8] [i_0] [i_17] [i_6] = ((/* implicit */long long int) (unsigned char)97);
                        var_43 = ((((/* implicit */int) arr_0 [i_8 + 1] [i_6])) << (((arr_36 [i_0 + 1]) - (5360158528747481816ULL))));
                        arr_56 [i_6] [(unsigned char)4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) arr_37 [i_0 + 1] [(signed char)4] [i_8 + 1] [i_13 - 4] [i_17])) : (arr_22 [i_0] [i_8 + 1] [i_13 - 3])));
                    }
                }
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) 
                {
                    for (long long int i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        {
                            arr_63 [i_6] [8LL] [i_8 + 1] [i_18] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_6]))));
                            var_44 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1073741824))));
                        }
                    } 
                } 
            }
            var_45 ^= ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_1))))));
        }
        var_46 = ((/* implicit */unsigned int) ((_Bool) arr_42 [i_0] [6ULL] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]));
    }
    for (unsigned char i_20 = 2; i_20 < 9; i_20 += 1) /* same iter space */
    {
        var_47 ^= ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-45)) + (((/* implicit */int) (unsigned short)61582)))) - (((/* implicit */int) (short)-21222))));
        var_48 ^= ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_23 [8ULL])))) == (((/* implicit */int) min((((/* implicit */signed char) arr_23 [(_Bool)1])), (var_1))))));
        var_49 = ((/* implicit */unsigned char) (((-(((long long int) (_Bool)1)))) != (((/* implicit */long long int) min((((((/* implicit */_Bool) 5811676805836651918LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) var_17))))))));
    }
}
