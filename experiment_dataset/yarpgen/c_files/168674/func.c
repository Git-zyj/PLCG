/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168674
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
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_2 [i_0] [(unsigned short)6]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [2ULL])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_15)))) < (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6)))))))) : ((~(((var_15) ? (var_10) : (((/* implicit */unsigned long long int) arr_0 [(signed char)8]))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) min((min((((/* implicit */unsigned int) var_14)), (var_9))), (((/* implicit */unsigned int) ((_Bool) var_3)))));
                    var_20 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (~(arr_0 [i_0])))), (((((/* implicit */unsigned long long int) var_7)) & (var_0))))), (((/* implicit */unsigned long long int) min((var_8), (arr_3 [i_0 - 1] [i_0] [6LL]))))));
                    arr_7 [i_0] [i_0] [i_1] [(unsigned char)8] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6517236528933093477LL)) ? (-186731663) : (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) max((var_12), (var_11)))), (min((var_0), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                }
            } 
        } 
        var_21 = (+(min((((/* implicit */unsigned long long int) max(((unsigned short)34201), (((/* implicit */unsigned short) (_Bool)1))))), (min((((/* implicit */unsigned long long int) var_8)), (var_10))))));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) arr_1 [i_0])), (var_8))), (max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_4)) : (arr_3 [i_5] [i_0] [i_0])))))));
                        var_22 += ((/* implicit */short) var_3);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        arr_20 [(short)4] [i_3] [i_0] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (var_4))))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_9))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (arr_11 [i_0 - 1])));
                    }
                    for (long long int i_7 = 1; i_7 < 8; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_26 [i_0] [i_7] [i_4] [i_7] [i_8] [i_3] [i_7] = ((/* implicit */short) ((int) var_0));
                            arr_27 [i_0 + 2] [i_0] [i_4] [i_4] [i_7] [i_8] [i_8] = ((/* implicit */short) var_1);
                        }
                        arr_28 [2U] [i_0] [i_4] [i_7] = var_15;
                        arr_29 [i_0] [i_3] [i_4] [(_Bool)1] [i_0] [i_7 - 1] = ((/* implicit */unsigned long long int) var_9);
                    }
                    var_25 -= ((/* implicit */signed char) var_9);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 2; i_10 < 8; i_10 += 1) 
                        {
                            arr_38 [i_0] [i_10] [i_9] [i_4] [(unsigned char)9] [i_3] [i_0] = ((/* implicit */signed char) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 703549825U))))))))));
                            var_27 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_3]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_13))))) : (var_4)));
                            arr_39 [i_0] [i_3] [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                        }
                        for (unsigned short i_11 = 3; i_11 < 9; i_11 += 3) 
                        {
                            arr_42 [(unsigned char)3] [(unsigned short)9] [i_0] [i_11] = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) < (var_11))));
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))));
                            arr_43 [i_4] [i_0] [i_4] [i_4] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
                            var_29 = ((/* implicit */long long int) ((unsigned short) ((unsigned char) var_3)));
                        }
                        arr_44 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_36 [i_0 + 3] [i_0 + 3] [i_0] [i_0]))));
                    }
                    for (unsigned char i_12 = 1; i_12 < 9; i_12 += 1) 
                    {
                        var_30 -= ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_4 [i_0 + 1] [i_12 - 1] [i_12])), (arr_31 [i_0 + 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_12) : (var_2)))));
                        var_31 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [7ULL] [i_4] [i_4] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_18 [i_0 - 1] [(_Bool)1] [i_4] [i_12] [i_12] [i_4])))) < (min((((/* implicit */unsigned long long int) arr_22 [i_0] [0U] [i_4] [i_4] [(unsigned short)0])), (arr_46 [i_3])))))), ((~(((arr_4 [i_0] [(short)0] [i_4]) ? (var_0) : (((/* implicit */unsigned long long int) var_4))))))));
                        var_32 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [(unsigned short)4] [i_3] [(unsigned char)1] [(unsigned short)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_3] [i_3] [9ULL] [2]))) : (var_9)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))))));
                    }
                    /* vectorizable */
                    for (short i_13 = 2; i_13 < 9; i_13 += 1) /* same iter space */
                    {
                        arr_50 [i_0 + 2] [i_3] [(short)8] |= ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)56374)) ? (3380936003U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9162))))));
                        arr_51 [i_0] [i_0] [i_4] [9] [i_13] [(unsigned char)2] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_33 [i_0 + 2] [i_0] [i_0] [1LL] [i_0 + 2] [i_0]))));
                    }
                    for (short i_14 = 2; i_14 < 9; i_14 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_16)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_9)) : (var_10))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))))))))))));
                        var_34 = (~(min((((((/* implicit */_Bool) arr_34 [i_0 - 1] [i_3] [i_0 - 1] [i_0] [8])) ? (((/* implicit */long long int) var_7)) : (var_12))), (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))));
                    }
                    arr_56 [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_4)) : (var_11))))))) : (var_7)));
    /* LoopNest 2 */
    for (short i_15 = 0; i_15 < 10; i_15 += 1) 
    {
        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            {
                var_36 &= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_1))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (var_11)))))))));
                /* LoopSeq 1 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                    {
                        for (long long int i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) var_11))));
                                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) var_7)) : (var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((var_9), (((/* implicit */unsigned int) var_17)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 1; i_20 < 8; i_20 += 3) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_39 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) max((((/* implicit */int) var_14)), (arr_66 [i_15] [i_15] [i_17])))) * (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_15] [i_20] [i_15]))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                                var_40 = ((/* implicit */unsigned char) var_16);
                                var_41 &= ((/* implicit */short) arr_5 [i_15]);
                            }
                        } 
                    } 
                    arr_72 [i_15] [i_16] [i_15] = ((/* implicit */unsigned int) arr_2 [9LL] [i_16]);
                }
                arr_73 [i_15] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_46 [i_15]) : (var_0)))) ? (arr_21 [i_15] [i_15] [7U] [i_16] [i_16]) : (((/* implicit */unsigned long long int) (~(var_9)))))), (((/* implicit */unsigned long long int) arr_68 [(unsigned short)1] [i_15] [i_15] [i_15] [i_16] [2LL]))));
            }
        } 
    } 
    var_42 *= ((/* implicit */signed char) min((((/* implicit */long long int) (~(((unsigned int) var_1))))), (((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((var_12), (var_11)))))));
}
