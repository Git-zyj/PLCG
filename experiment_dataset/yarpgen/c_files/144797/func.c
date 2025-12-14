/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144797
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_12 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))) - (arr_2 [i_0] [i_0])))) ? (max((((/* implicit */int) arr_3 [i_0] [(_Bool)1])), (arr_5 [i_0] [i_1]))) : (arr_5 [i_0] [i_1])))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    arr_11 [(unsigned short)0] [i_1] [0U] [(short)7] = ((/* implicit */signed char) max((((((/* implicit */int) var_0)) + (arr_7 [i_0] [i_1] [(unsigned char)8] [i_0]))), (((/* implicit */int) ((arr_7 [i_0] [(unsigned char)8] [i_0] [i_0]) <= (arr_7 [i_3] [i_2] [(unsigned char)5] [i_0]))))));
                    arr_12 [i_0] [i_1] [i_2] [(unsigned short)8] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_3] [i_3]))));
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) max((arr_2 [i_2] [i_3]), (((/* implicit */long long int) arr_8 [(unsigned char)5] [(unsigned char)8] [i_2] [i_2] [(unsigned char)5] [i_2])))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (arr_7 [2ULL] [i_0] [i_1] [i_0]) : (((/* implicit */int) arr_0 [i_0])))))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) arr_6 [i_0]);
                    var_14 &= ((/* implicit */_Bool) var_9);
                    var_15 -= ((/* implicit */unsigned char) arr_6 [(short)3]);
                }
                var_16 *= ((/* implicit */_Bool) ((short) (+(max((arr_2 [i_0] [8]), (((/* implicit */long long int) arr_3 [i_0] [i_0])))))));
                var_17 &= ((/* implicit */unsigned char) (+((-(arr_5 [i_2] [i_1])))));
            }
            for (int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                arr_18 [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [7LL] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) var_7))))) + ((~(8728630563929686513LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [2] [i_1] [i_5])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((var_7) ? (var_2) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_5] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0]))))))));
                arr_19 [(_Bool)1] [(_Bool)1] [i_5] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_5)), (min((((/* implicit */unsigned char) arr_16 [i_1] [i_1] [i_1])), (var_6)))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]))) ? (((unsigned long long int) arr_16 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(short)9] [(short)10] [(short)9] [(_Bool)0] [i_1] [i_5])) ? (((/* implicit */int) arr_3 [i_1] [i_5])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_5] [i_0] [i_5]))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_5] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_16 [4U] [i_1] [i_0])))))))));
                arr_20 [i_5] [i_5] [(unsigned short)7] [(unsigned short)8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(max((var_1), (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [10LL] [(unsigned char)2] [i_0])))))))));
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_18 = ((/* implicit */int) arr_4 [3] [i_6]);
                    arr_23 [i_0] [i_0] [(unsigned char)10] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_5);
                }
                var_19 -= ((/* implicit */short) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_0 [i_1]))));
            }
            arr_24 [i_0] [i_1] [i_0] = ((/* implicit */short) (+(((long long int) arr_7 [(short)1] [i_1] [i_1] [i_1]))));
        }
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [5LL] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) (((-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(unsigned short)10] [i_0])))) ^ (((/* implicit */int) ((_Bool) arr_4 [7LL] [i_0]))))))));
    }
    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_26 [i_7]))) ? (((/* implicit */int) ((unsigned char) max((arr_25 [i_7] [i_7]), (arr_26 [i_7]))))) : (((/* implicit */int) arr_26 [i_7]))));
        var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_0)) ? (((long long int) arr_25 [i_7] [i_7])) : (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) arr_25 [i_7] [(unsigned short)7])) : (((/* implicit */int) arr_26 [i_7]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) arr_26 [i_7])))))));
    }
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((var_10) ^ (((/* implicit */int) var_6)))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_3)), (((short) var_11)))))) : (max((max((((/* implicit */unsigned int) var_0)), (var_1))), (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
    {
        for (short i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            {
                var_24 += ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_27 [2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_32 [18U] [i_9] [i_8])))), (((/* implicit */int) arr_27 [i_8])))) & (max((((var_10) & (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */int) arr_32 [(_Bool)1] [i_9] [i_8])) == (((/* implicit */int) arr_30 [i_9] [i_8])))))))));
                /* LoopSeq 1 */
                for (short i_10 = 3; i_10 < 20; i_10 += 3) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 22; i_11 += 4) 
                    {
                        arr_38 [19ULL] [19ULL] [19ULL] [19ULL] [(short)3] [i_11] = ((/* implicit */signed char) ((((((/* implicit */int) arr_33 [i_8] [i_10])) & (((/* implicit */int) var_8)))) & (((/* implicit */int) arr_32 [i_10 - 1] [i_10] [i_11 - 1]))));
                        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_8] [i_10 - 2] [i_11 + 1] [i_11 - 1] [i_11 - 1])) + (((/* implicit */int) arr_32 [16ULL] [i_10 + 3] [i_11 + 1]))));
                        arr_39 [i_8] [i_8] [17] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) arr_27 [i_8]))))) ? (((/* implicit */int) arr_32 [i_10 + 2] [i_11 - 1] [i_11 - 1])) : ((~(((/* implicit */int) (unsigned char)248))))));
                        var_26 |= ((/* implicit */short) ((unsigned short) var_9));
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        arr_42 [i_12] [22U] = ((/* implicit */_Bool) arr_31 [i_10 + 1]);
                        var_27 -= ((/* implicit */short) var_6);
                        var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_10 - 2])) ? (((/* implicit */int) arr_36 [i_8] [i_9] [i_10 - 1] [i_9] [i_8])) : (((/* implicit */int) arr_41 [i_8] [i_8] [i_8] [i_10 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_13])) <= (((/* implicit */int) ((_Bool) arr_44 [i_8] [i_8] [i_8] [i_8] [19LL] [i_8])))));
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            var_30 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_8] [i_9] [(short)5] [i_9]))) <= (arr_47 [(unsigned char)8] [(unsigned char)8] [(unsigned short)1] [i_13] [i_14] [i_9])));
                            arr_49 [i_9] [(signed char)6] [i_13] [i_13] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_33 [i_8] [i_13]))))));
                            var_31 = ((((_Bool) var_0)) ? (((var_7) ? (arr_46 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(short)5] [(short)5]))))) : (arr_47 [i_14] [(signed char)14] [i_9] [i_10] [i_9] [12LL]));
                            arr_50 [i_8] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_0))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_10] [i_14])) == (((/* implicit */int) var_8))))))));
                        }
                    }
                    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        var_32 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_48 [(unsigned char)7] [i_9] [i_9] [i_9] [4LL]))) ? (((/* implicit */int) ((unsigned short) arr_47 [i_8] [(signed char)19] [i_10] [(_Bool)1] [i_10] [i_9]))) : (((/* implicit */int) ((arr_45 [i_8]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_15] [i_9] [i_15] [i_8]))))))))) ? (((/* implicit */int) max((arr_33 [i_10 - 2] [i_10 - 1]), (arr_33 [i_10 + 2] [i_10 + 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_48 [i_8] [i_8] [(short)13] [13LL] [i_8])) <= (((var_8) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_45 [i_15]), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_29 [i_15] [(short)11])), (arr_40 [i_15] [i_8])))) : (((((/* implicit */_Bool) arr_52 [i_15])) ? (((/* implicit */int) arr_34 [i_8] [i_15])) : (((/* implicit */int) arr_35 [i_8] [i_9] [i_10]))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_47 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) - (((((/* implicit */_Bool) arr_48 [i_8] [i_15] [i_10] [i_15] [i_9])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8] [i_15])))))))));
                        var_34 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)107)), (((((/* implicit */_Bool) 2147221504)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_33 [i_15] [i_8]))))));
                        var_35 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_27 [i_8]))))) ? (((long long int) arr_41 [(short)19] [i_9] [i_10 - 3] [i_9])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_48 [4LL] [4LL] [4LL] [i_10] [i_15])) <= (((/* implicit */int) arr_27 [i_8])))))))))));
                        var_36 ^= arr_32 [i_10 - 1] [i_10] [i_10 - 1];
                    }
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_10 - 1] [i_10 + 2])) ? (((((/* implicit */_Bool) arr_46 [i_10 - 2] [i_10 - 3])) ? (arr_46 [i_10 + 2] [i_10 + 2]) : (arr_46 [i_10 + 2] [i_10 + 2]))) : (max((arr_46 [i_10 - 3] [i_10 + 2]), (arr_46 [i_10 - 2] [i_10 + 3])))));
                    var_38 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_41 [i_8] [i_9] [i_9] [i_10])) : (((/* implicit */int) max((((/* implicit */short) var_5)), (arr_31 [i_8]))))))));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        arr_57 [i_10 + 2] [i_10 + 2] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_48 [(short)2] [(short)2] [(unsigned short)5] [(short)2] [(_Bool)1])) ? (((/* implicit */int) arr_28 [i_8] [i_9])) : (((/* implicit */int) arr_40 [i_16] [i_9]))))))) ? (((((/* implicit */_Bool) ((14336U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) var_6)) - (((/* implicit */int) arr_54 [(short)21] [(short)0] [i_10] [i_10 + 3] [i_10])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_51 [i_8] [i_9] [i_9] [i_8])) : (((/* implicit */int) var_0)))))) : (((((/* implicit */int) arr_36 [(_Bool)1] [i_10 + 2] [i_10 + 2] [i_10 + 3] [i_10 + 3])) + (((/* implicit */int) arr_37 [i_8]))))));
                        var_39 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (max((arr_56 [i_8] [i_9] [i_9] [i_10] [i_10]), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))))));
                        arr_58 [i_8] [i_9] [4LL] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)59362))))) ? (((((/* implicit */_Bool) 5429608897965628783LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)4)))) : (((((/* implicit */_Bool) arr_40 [i_10] [(_Bool)1])) ? (((/* implicit */int) arr_33 [i_10 - 3] [i_16])) : (((/* implicit */int) arr_40 [i_8] [i_9]))))))));
                    }
                }
            }
        } 
    } 
    var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((+(var_10))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))));
    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) var_9))));
}
