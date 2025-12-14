/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109986
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_17 = (!(((/* implicit */_Bool) (~(262143)))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) 6355164951666206387ULL))));
                                var_19 = ((/* implicit */unsigned long long int) (-((-(var_6)))));
                                var_20 = ((/* implicit */unsigned int) max((var_6), (((/* implicit */long long int) ((unsigned char) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4 + 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            arr_16 [i_0] [i_0] [i_2 + 2] [i_5] [(unsigned char)5] = ((/* implicit */signed char) ((long long int) arr_1 [i_2 - 2]));
                            arr_17 [i_0] [i_1] [i_1] [7U] [(_Bool)1] [i_6] [i_0] = ((/* implicit */_Bool) (+(2159637517817974793ULL)));
                        }
                        arr_18 [i_0] [i_1] [i_1] [(unsigned char)7] [i_1] = max((((((arr_14 [i_0] [i_0] [i_0] [i_0] [2U]) - (((/* implicit */long long int) -1431384824)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)160)) ? (2147483647) : (-1431384824)))))));
                        arr_19 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_5 - 1]))))) : (arr_14 [i_0] [i_2] [i_2] [i_5 + 1] [i_5])));
                        arr_20 [i_0] = ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_1]);
                    }
                    arr_21 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 1])), (262143)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_3))))) ? (((var_7) - (((/* implicit */unsigned int) arr_4 [i_2 - 1] [i_2 + 1] [i_2 + 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_2] [i_2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) == (var_6))))));
                }
                for (int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    var_21 = ((/* implicit */int) var_10);
                    arr_24 [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_22 [i_0])), (arr_14 [i_0] [i_1] [i_7] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (var_10)))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_1] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_9 [(_Bool)1] [i_1] [i_7] [i_7] [i_0]))))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 3; i_8 < 10; i_8 += 4) 
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((_Bool) var_4)) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_8] [i_8] [i_8 - 3])) ? (arr_14 [i_8] [i_8] [i_7] [i_8] [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (arr_14 [i_0] [i_0] [i_1] [i_1] [i_8 - 1])));
                        var_22 = var_6;
                        arr_28 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_9 [i_8 - 2] [i_8 - 1] [i_8 - 3] [i_8 + 1] [i_0])) ? (arr_9 [i_8 - 3] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_0]) : (arr_9 [i_8 - 2] [i_8 + 1] [i_8 + 1] [i_8 - 3] [i_0])))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_31 [i_0] [i_0] [i_7] [i_7] = ((/* implicit */_Bool) -6423359561722186908LL);
                        var_23 = ((/* implicit */unsigned char) arr_23 [i_0] [(unsigned char)10]);
                        var_24 = ((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]));
                    }
                }
                arr_32 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((long long int) (unsigned char)160)) : (var_10)));
                var_25 = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) max((9223372036854775807LL), (arr_2 [i_0] [i_0])))));
                arr_33 [i_0] [i_1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_14 [i_0] [i_0] [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_26 = max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (max((1ULL), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (var_0)))) ? (((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    for (long long int i_10 = 3; i_10 < 7; i_10 += 4) 
    {
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)64249)), (0U)))) : (((((/* implicit */_Bool) var_0)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))))))))))));
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) min((var_1), (((/* implicit */short) ((((/* implicit */int) var_9)) < ((-(((/* implicit */int) arr_30 [i_13] [i_13] [i_13] [i_13])))))))));
                        var_29 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_34 [i_10] [i_10])))) : (((long long int) 2446658871U))))), (((unsigned long long int) ((((((/* implicit */int) (short)-21245)) + (2147483647))) << (((((/* implicit */int) arr_37 [i_10 - 2] [i_11] [i_12])) - (59377))))))));
                        var_30 = ((((/* implicit */_Bool) (unsigned char)23)) ? (-5190930115009384671LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10] [(short)0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (arr_3 [i_12]) : (((/* implicit */int) (signed char)-29))))));
                        var_31 = (_Bool)1;
                    }
                } 
            } 
            var_32 = ((((((/* implicit */_Bool) arr_41 [i_10] [i_10] [i_10 - 3] [i_11])) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_10 + 3]))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) min((2918101603U), (((/* implicit */unsigned int) arr_38 [i_11] [8] [i_11]))))))) >> (((((unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10] [i_10] [i_11]))) : (-6865966998158787550LL)))) - (62802U))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */long long int) -262144)) : (var_10)))))))));
            /* LoopSeq 2 */
            for (unsigned int i_15 = 2; i_15 < 8; i_15 += 2) 
            {
                arr_51 [i_10] = ((/* implicit */long long int) (~(-1431384824)));
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_15] [i_15 + 2] [i_15 + 2] [i_15 + 1])) ? (((/* implicit */int) ((_Bool) (unsigned short)9886))) : (arr_25 [i_10] [i_14] [i_14] [i_15] [i_14])));
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    for (unsigned char i_17 = 4; i_17 < 6; i_17 += 2) 
                    {
                        {
                            var_35 *= ((/* implicit */_Bool) var_13);
                            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (signed char)32))));
                            arr_56 [i_10] [i_14] [(_Bool)1] [i_16] [i_16] [i_17 - 2] = ((/* implicit */int) ((unsigned int) 2918101603U));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 2) 
            {
                arr_60 [i_18] [i_14] = ((/* implicit */long long int) (short)29302);
                arr_61 [i_18] [i_10 - 2] = var_6;
                arr_62 [i_10 - 3] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 249627314U)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (short)(-32767 - 1)))));
            }
            var_37 *= (!(((/* implicit */_Bool) arr_48 [i_10])));
        }
        /* vectorizable */
        for (long long int i_19 = 0; i_19 < 10; i_19 += 2) /* same iter space */
        {
            arr_66 [i_10] = ((/* implicit */unsigned short) ((_Bool) arr_1 [i_10 - 1]));
            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2260438514U)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (unsigned short)45436))));
            var_39 = ((/* implicit */long long int) arr_3 [i_10]);
            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_25 [i_10] [i_19] [i_19] [i_19] [i_19])) ? (1514645788662479347ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_10]))))) | (((/* implicit */unsigned long long int) arr_38 [i_10] [i_19] [i_10 + 2])))))));
        }
    }
}
