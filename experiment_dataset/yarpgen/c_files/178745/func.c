/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178745
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-2147483647 - 1))) & (4294967286U)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : (var_1)));
                        var_21 = ((/* implicit */int) (+(((arr_4 [i_1] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25)))))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_18))))) + (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) arr_0 [i_0])))))))));
                        var_23 = ((/* implicit */long long int) ((unsigned short) arr_5 [i_0] [i_1]));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) (signed char)72)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (-2147483629)))));
        var_25 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [(unsigned char)21]);
    }
    var_26 = ((/* implicit */unsigned long long int) var_2);
    var_27 = ((/* implicit */long long int) (~((-(((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */unsigned int) -2147483625)) == (3136263822U)))) << (((((/* implicit */int) max((arr_2 [i_4] [i_4] [i_4]), (arr_2 [i_4] [i_4] [i_4])))) + (106))))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                {
                    var_29 -= ((/* implicit */unsigned long long int) (+(min((var_3), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4776607186790270278ULL)) ? (((/* implicit */int) (signed char)87)) : (2147483636))))))));
                    var_30 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_12 [i_4])), (var_14))))))), ((~(((9953095273905514474ULL) - (15165245214585687254ULL)))))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)7502))));
        var_32 = ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-32760))) % (arr_3 [i_4] [15ULL] [15ULL]))) | (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
    }
    /* LoopSeq 3 */
    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 1) 
        {
            var_33 = ((/* implicit */unsigned long long int) max((var_33), (var_7)));
            arr_23 [i_7] [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_22 [i_7] [(signed char)5] [i_8]), (((/* implicit */unsigned long long int) arr_9 [i_7] [i_8 - 1])))))))), (var_14)));
            arr_24 [i_7] [i_7] = ((/* implicit */unsigned int) arr_22 [0LL] [i_8] [i_8]);
        }
        for (unsigned short i_9 = 2; i_9 < 21; i_9 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_10 = 2; i_10 < 21; i_10 += 2) 
            {
                var_34 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32760))));
                var_35 = ((/* implicit */signed char) ((1417439930) + (((/* implicit */int) (unsigned short)35504))));
            }
            for (short i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                var_36 = ((/* implicit */signed char) ((var_6) ^ (((arr_3 [i_7] [i_9 - 1] [i_11]) << (((((/* implicit */int) arr_27 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 - 2])) - (17144)))))));
                arr_32 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) arr_19 [i_7] [i_7]);
            }
            for (int i_12 = 1; i_12 < 22; i_12 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    arr_38 [i_13] [i_7] [i_7] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 7968777436013698871LL)))))));
                    var_37 = arr_25 [i_7];
                    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) var_16))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_14 = 1; i_14 < 22; i_14 += 3) 
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (arr_28 [i_7] [i_9 + 1] [i_9 + 2] [i_9]) : (arr_28 [i_7] [i_9 - 2] [i_9 + 1] [(unsigned char)18])));
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_35 [i_14] [i_7] [i_12]))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) 4293918720U)) : (arr_26 [(unsigned short)21]))) : (((/* implicit */unsigned long long int) (~((-2147483647 - 1)))))));
                    }
                    for (unsigned short i_15 = 1; i_15 < 22; i_15 += 4) 
                    {
                        arr_44 [7] [i_7] [(signed char)15] = ((/* implicit */signed char) ((unsigned long long int) (unsigned short)48483));
                        var_41 = ((/* implicit */signed char) max((((/* implicit */long long int) -2147483625)), (((((((/* implicit */long long int) ((/* implicit */int) var_0))) & (arr_33 [i_7] [i_7] [i_13] [i_7]))) / (((/* implicit */long long int) (+(arr_0 [i_7]))))))));
                        var_42 |= ((/* implicit */unsigned long long int) max((2147483636), (((/* implicit */int) (unsigned short)44794))));
                        var_43 *= ((/* implicit */signed char) var_15);
                        var_44 = ((/* implicit */unsigned short) ((2147483612) | (2147483624)));
                    }
                    var_45 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_1 [i_7] [(signed char)6])), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23559)) ? (((/* implicit */int) var_8)) : (var_2)))), (min((9223231299366420480ULL), (((/* implicit */unsigned long long int) var_14))))))));
                }
                for (int i_16 = 2; i_16 < 19; i_16 += 2) 
                {
                    var_46 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 9223231299366420480ULL)) ? (((/* implicit */int) arr_35 [i_9] [i_16] [i_9])) : (arr_5 [i_9 - 1] [i_16])))));
                    var_47 = (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(signed char)8] [i_9 - 2] [i_9] [(signed char)8] [i_12 + 1] [i_16 + 1]))) <= (var_15)))));
                    var_48 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_9 [i_7] [i_7])), (max((((/* implicit */long long int) 2536351628U)), ((-(arr_33 [(signed char)0] [i_16] [i_16] [i_16])))))));
                }
                for (signed char i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    var_49 = ((/* implicit */unsigned char) arr_9 [i_9 + 2] [i_12 + 1]);
                    var_50 = min((((/* implicit */unsigned long long int) (short)25065)), (9223231299366420467ULL));
                }
                for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) (signed char)8))))) ? (((((/* implicit */unsigned long long int) max((arr_1 [i_9] [i_9]), (var_13)))) + (min((1729382256910270464ULL), (2147475456ULL))))) : (((unsigned long long int) var_10))));
                    arr_52 [i_7] [i_7] [i_7] [i_9] [i_12] [i_18] = ((/* implicit */int) var_3);
                    arr_53 [i_7] = ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) ((arr_5 [(unsigned short)7] [i_7]) % (-306067890)))), ((~(arr_29 [i_7] [i_7] [i_7] [i_7]))))) : ((-(var_17))));
                }
                arr_54 [1U] [i_7] [i_12 + 1] = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) arr_8 [i_7] [i_9 - 2] [i_7])))));
            }
            var_52 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_35 [i_9] [i_7] [i_9 + 1])), (((((/* implicit */_Bool) arr_46 [i_9] [i_9 - 2] [i_9 + 1] [i_9 - 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_35 [20LL] [i_7] [i_9 + 1]))))));
            var_53 |= var_9;
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 23; i_19 += 1) 
            {
                for (signed char i_20 = 4; i_20 < 22; i_20 += 4) 
                {
                    {
                        var_54 = ((/* implicit */unsigned long long int) max((var_54), (max((((((/* implicit */_Bool) ((arr_4 [i_7] [(short)9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7] [i_7] [i_7] [i_7]))))), (((/* implicit */unsigned long long int) var_0))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_21 = 2; i_21 < 20; i_21 += 1) 
                        {
                            var_55 = ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_35 [i_21 - 1] [i_7] [i_20 - 3]), (var_11)))), ((-(var_2)))));
                            var_56 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) == ((-(((/* implicit */int) arr_9 [i_7] [(unsigned char)7]))))))), (var_0)));
                        }
                        for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 3) 
                        {
                            var_57 = ((/* implicit */signed char) arr_4 [i_20 + 1] [i_9 - 2]);
                            arr_66 [(unsigned char)21] [i_9] [i_9] [(unsigned short)21] [i_7] = ((/* implicit */short) arr_28 [i_7] [i_7] [i_7] [(unsigned char)15]);
                        }
                    }
                } 
            } 
        }
        var_58 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)128))));
    }
    for (short i_23 = 1; i_23 < 15; i_23 += 1) 
    {
        arr_69 [i_23] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)8))))) ? (arr_3 [i_23 + 2] [i_23 - 1] [i_23 - 1]) : (((/* implicit */unsigned int) min((var_2), (((/* implicit */int) var_5))))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_23] [i_23] [i_23])))));
        var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) min((((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) != (((/* implicit */int) (signed char)64)))))))), (((/* implicit */unsigned long long int) var_0)))))));
        var_60 |= max((((/* implicit */unsigned long long int) arr_56 [i_23] [i_23] [(signed char)0] [(short)19])), ((+(var_17))));
    }
    for (int i_24 = 1; i_24 < 18; i_24 += 3) 
    {
        arr_73 [i_24] [i_24] = ((((/* implicit */_Bool) arr_20 [i_24])) ? (max((((/* implicit */int) ((arr_4 [i_24] [i_24]) <= (((/* implicit */unsigned long long int) var_13))))), ((+(((/* implicit */int) var_11)))))) : (((/* implicit */int) ((arr_25 [4ULL]) == (((/* implicit */int) arr_35 [i_24 - 1] [(unsigned short)4] [i_24 + 1]))))));
        arr_74 [15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_24 + 2] [i_24] [i_24 - 1] [i_24 - 1] [(unsigned char)14] [(unsigned short)18])) - (((/* implicit */int) arr_39 [i_24 + 2] [i_24] [i_24 + 1] [i_24 - 1] [i_24 - 1] [i_24 + 1]))))) ? (((((/* implicit */unsigned long long int) -964253362)) | (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 + 2] [i_24 - 1] [i_24 - 1])))));
        arr_75 [i_24] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_30 [i_24 + 1] [(signed char)8] [(unsigned short)2] [i_24 + 1])) : (((/* implicit */int) ((signed char) var_13))))));
    }
}
