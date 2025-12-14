/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182888
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
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) (((_Bool)1) || (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) && (((/* implicit */_Bool) (signed char)4))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned short) arr_1 [i_1]);
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-7895)) && (((/* implicit */_Bool) (short)-7895)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)38969))))) ? (((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) % ((~(((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) var_9))))) >= (max((9223371899415822336LL), (((/* implicit */long long int) arr_1 [i_0 + 1]))))))))))));
        }
        for (int i_2 = 2; i_2 < 7; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) >> (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))));
            var_16 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 2])) - (((/* implicit */int) arr_2 [i_0]))))) || (((/* implicit */_Bool) var_8)))) ? (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)49844)) : (((/* implicit */int) (short)-7895)))) * ((~(((/* implicit */int) (short)-7895)))))) : (((/* implicit */int) arr_5 [i_0 - 1]))));
            arr_6 [i_2] = ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) (unsigned short)65280))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)2469))));
        }
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((-7662283246559732061LL) % (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)3584)) == (((/* implicit */int) (signed char)-91))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)204)))) > (((/* implicit */int) (unsigned char)119)))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_3])) + (max(((-(((/* implicit */int) (signed char)-98)))), (((/* implicit */int) ((unsigned short) var_2)))))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) arr_8 [i_0] [(short)2]);
                        var_19 |= ((/* implicit */unsigned char) var_2);
                        var_20 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_8 [i_3 + 1] [i_3 + 1])))));
                        arr_16 [(signed char)7] [5] [(signed char)7] [i_4] [(unsigned short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0 + 3])) || (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_8 [i_3] [(_Bool)0])))), (((/* implicit */int) (signed char)90)))))));
                        arr_17 [i_0] |= ((/* implicit */unsigned short) arr_2 [i_5]);
                    }
                } 
            } 
            arr_18 [i_3 + 1] = ((/* implicit */unsigned char) arr_9 [i_0] [i_3] [i_3]);
            arr_19 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) var_11)), (((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_3 [i_3] [i_3] [i_0 + 3])) : (((/* implicit */int) arr_5 [i_0 - 2]))))))));
            /* LoopSeq 4 */
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            arr_26 [(unsigned char)4] [(unsigned char)4] [i_6] [i_6] [i_6] [(unsigned char)4] [i_6] = ((((/* implicit */int) (short)19632)) & (((/* implicit */int) ((((/* implicit */int) var_8)) <= (-1466520406)))));
                            var_21 = ((/* implicit */long long int) ((short) min((((arr_13 [(_Bool)0] [i_0] [i_0] [i_7] [i_0] [0ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0 + 2] [i_6] [i_7] [(_Bool)1]))) : (var_1))), (((/* implicit */unsigned long long int) (signed char)91)))));
                            arr_27 [i_8] [i_6] [i_6] [i_3] [i_3] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_8 [i_0 + 1] [i_3 + 1]), (arr_8 [i_0 - 1] [i_3 + 1])))) - (((/* implicit */int) min(((unsigned char)102), (((/* implicit */unsigned char) arr_8 [i_0 - 1] [i_3 + 1])))))));
                            arr_28 [i_0] [i_3] [i_3 + 1] [i_6] [i_7] [i_3 + 1] = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7895)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) (signed char)-1))));
                    arr_33 [(unsigned short)9] [i_3] [6ULL] [6ULL] [i_3 + 1] [(unsigned short)7] |= ((/* implicit */unsigned long long int) ((((2960610070U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95))))) ? ((+(((/* implicit */int) (short)1662)))) : (((/* implicit */int) arr_31 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 - 1]))));
                    var_23 += ((/* implicit */signed char) min((9990085735481042474ULL), (((/* implicit */unsigned long long int) arr_13 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 2]))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    arr_38 [i_0] [i_0] [i_10] [(unsigned short)5] [i_0] = ((/* implicit */_Bool) ((long long int) arr_32 [9] [i_10] [i_6] [i_0 + 3] [i_0 + 3] [i_0 + 3]));
                    arr_39 [i_0] [i_3 + 1] [i_10] [(unsigned short)6] [i_0] = ((/* implicit */int) arr_0 [i_3] [(unsigned short)7]);
                    var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (131071ULL))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44805)) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0])))))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) arr_0 [i_0] [i_6])))))))) ? (((/* implicit */int) arr_2 [(unsigned char)6])) : (((((/* implicit */int) ((unsigned char) var_6))) >> ((((~(5747014540492832535ULL))) - (12699729533216719076ULL)))))));
                }
                for (short i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_11] [i_0]))));
                        var_27 |= ((/* implicit */_Bool) (unsigned char)87);
                        arr_45 [i_11] [i_3 + 1] [i_6] [i_11] [i_12] [(short)0] = ((/* implicit */int) arr_23 [i_12] [i_12] [i_12] [i_12]);
                    }
                    var_28 = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_34 [(short)0] [(short)0] [i_11] [i_6] [i_11])), ((unsigned short)29414))))) - ((+(489748263316642641ULL)))))));
                    /* LoopSeq 2 */
                    for (int i_13 = 1; i_13 < 8; i_13 += 1) 
                    {
                        arr_48 [(short)5] [i_3 + 1] [i_3] [i_3] [i_3] [i_11] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_11] [i_6] [i_3] [i_0]))) >= (((min((((/* implicit */unsigned long long int) (signed char)-96)), (4749566846517024236ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (arr_32 [i_0] [i_3 + 1] [(signed char)2] [5] [i_11] [i_13]))))))));
                        var_29 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))) == (min((min((3393285851U), (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) arr_24 [i_3 + 1] [i_0 + 1] [i_0 + 1]))))));
                    }
                    for (int i_14 = 1; i_14 < 6; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((int) ((((((/* implicit */_Bool) arr_40 [i_0 + 1] [i_0] [i_11] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_10)))) ^ (((((/* implicit */int) arr_35 [(short)6] [i_3 + 1] [i_11] [i_3 + 1])) & (((/* implicit */int) (unsigned short)65280)))))));
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((unsigned short) ((((((/* implicit */int) (signed char)-49)) & (((/* implicit */int) arr_50 [i_0] [i_0] [i_0] [i_6] [i_11] [(short)1] [i_0])))) * (((/* implicit */int) arr_13 [i_14 + 4] [i_14 + 1] [i_14 + 3] [i_14 + 2] [i_14 - 1] [i_14 + 3]))))))));
                        arr_51 [i_3 + 1] [i_6] [i_3 + 1] [i_3] |= var_9;
                    }
                }
                arr_52 [i_0] [i_0] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) 430093214)) ? (((/* implicit */unsigned long long int) 656080384)) : (12699729533216719080ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) % (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_6] [i_0] [i_0])), (5747014540492832536ULL)))) ? (((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))))));
            }
            for (int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                arr_56 [i_15] [i_3 + 1] [8] |= ((/* implicit */signed char) arr_4 [i_0]);
                arr_57 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_0 + 3] [i_3 + 1] [(signed char)3] [9LL]))) | (max((max((((/* implicit */unsigned long long int) arr_50 [i_0] [i_0] [i_0] [(_Bool)1] [i_3 + 1] [i_15] [i_15])), (arr_20 [9] [i_15] [(_Bool)1] [i_0 - 1]))), (((/* implicit */unsigned long long int) arr_31 [i_0 + 1] [i_0 - 1] [i_3 + 1] [i_3 + 1]))))));
                arr_58 [i_0 + 2] [i_15] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)60)) | (((/* implicit */int) arr_55 [i_0] [i_3] [i_3] [i_15])))) << (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                /* LoopSeq 1 */
                for (unsigned short i_16 = 2; i_16 < 9; i_16 += 1) 
                {
                    arr_61 [i_0] [i_0 - 2] [i_3] [i_15] [i_0 - 2] [i_16 + 1] = ((/* implicit */_Bool) (((_Bool)1) ? (-656080384) : (((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (short)22783)) : (((/* implicit */int) (short)960))))));
                    arr_62 [i_0] [i_3] [i_0] [i_0] [i_3] [i_16] |= ((/* implicit */unsigned char) arr_25 [i_0] [i_16 - 2]);
                    arr_63 [i_0] [5LL] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (2147483629)))) : (((/* implicit */int) arr_13 [i_0] [i_3] [i_0] [i_0] [(unsigned short)4] [i_16 - 1])))) <= (((((/* implicit */int) ((signed char) (unsigned char)241))) % (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1))))))));
                }
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_18 = 1; i_18 < 9; i_18 += 1) 
                {
                    arr_68 [i_17] = ((/* implicit */signed char) ((((/* implicit */int) (short)-22783)) == (((/* implicit */int) (_Bool)1))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_21 [i_3] [i_17] [i_18 - 1]) - (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) arr_43 [i_0] [i_0 + 1] [(_Bool)1] [i_17] [i_3 + 1] [i_18 + 1])))) : ((((+(((/* implicit */int) arr_7 [i_0 + 3])))) + ((((_Bool)1) ? (arr_21 [(signed char)6] [i_3] [(unsigned char)7]) : (((/* implicit */int) (signed char)57))))))));
                }
                for (short i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    arr_72 [i_19] [i_3] [i_17] [i_19] [i_0] &= ((/* implicit */unsigned short) arr_32 [i_19] [i_0] [i_17] [i_3] [i_3] [i_0]);
                    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((short)-22802), (((/* implicit */short) (_Bool)1)))))));
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) min((((/* implicit */signed char) arr_67 [i_19] [i_17] [i_3] [i_3 + 1] [(_Bool)1] [4ULL])), ((signed char)-99))))));
                    var_35 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_59 [i_0 - 1] [i_0 + 3] [i_0 + 2] [6])) ? (arr_59 [i_0 + 3] [i_3 + 1] [i_0 - 1] [i_19]) : (arr_59 [i_3 + 1] [i_3 + 1] [i_17] [i_3])))));
                }
                arr_73 [i_17] [i_0 + 2] [i_3] [i_17] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0 + 3] [i_17])) && (((/* implicit */_Bool) arr_5 [(unsigned short)1])))) ? (((65535) ^ (((/* implicit */int) arr_40 [i_0] [i_0] [i_17] [i_0])))) : (((((/* implicit */int) arr_71 [i_0] [i_0 + 3] [i_0] [i_0] [i_0 + 3])) + (((/* implicit */int) arr_5 [(_Bool)0]))))));
                arr_74 [i_0 - 2] [i_17] [(short)6] = ((/* implicit */signed char) ((((((/* implicit */int) arr_41 [i_17])) >= (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_55 [7LL] [7LL] [i_17] [2])))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) || (((_Bool) arr_1 [i_0])))))));
                arr_75 [i_0] [i_3] &= arr_60 [i_0];
            }
            for (short i_20 = 1; i_20 < 8; i_20 += 1) 
            {
                var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)29210))))) / (arr_32 [i_0] [i_0 - 2] [(_Bool)1] [8LL] [i_0] [8LL]))))));
                /* LoopSeq 1 */
                for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    arr_81 [i_20] [(unsigned char)8] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)15))));
                    var_37 ^= ((/* implicit */unsigned short) min((((/* implicit */int) var_4)), ((((+(((/* implicit */int) (unsigned char)240)))) + (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_41 [i_0]))))))));
                }
                var_38 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_78 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_20])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) var_10)))))) >> (((/* implicit */int) (signed char)16))));
            }
        }
    }
    /* LoopNest 2 */
    for (long long int i_22 = 0; i_22 < 25; i_22 += 1) 
    {
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            {
                arr_88 [i_22] [i_22] = ((/* implicit */_Bool) ((((long long int) arr_86 [i_22])) | (((/* implicit */long long int) (~(arr_86 [i_22]))))));
                arr_89 [i_22] [(_Bool)1] = ((/* implicit */_Bool) arr_84 [i_22]);
                arr_90 [i_23] [(signed char)4] [i_22] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_82 [i_22]) == (((/* implicit */int) arr_85 [i_22] [i_22]))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21300)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (_Bool)1))))), (((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
            }
        } 
    } 
}
