/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153745
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) max((((min((((/* implicit */unsigned long long int) (unsigned short)1820)), (6534429972710632051ULL))) - (min((((/* implicit */unsigned long long int) arr_0 [(signed char)2] [i_1])), (arr_8 [i_0] [i_0]))))), (max((((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66))))), (((((/* implicit */unsigned long long int) 9223372036854775807LL)) | (var_1)))))));
                        arr_14 [(unsigned char)17] [(unsigned char)2] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) max((max((((((/* implicit */int) (signed char)-66)) & (((/* implicit */int) var_11)))), (max((arr_0 [i_2] [i_0]), (arr_0 [i_1] [i_0]))))), (((/* implicit */int) min((((1796710293) > (arr_9 [i_3 - 2] [(signed char)17] [i_2] [i_1] [i_1] [i_0]))), (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            arr_17 [i_0] [i_0] = ((/* implicit */int) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (arr_8 [i_0] [i_4]))), (((/* implicit */unsigned long long int) ((var_5) > (((/* implicit */int) (signed char)66))))))), (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_7 [i_0] [(unsigned char)5] [i_4])) + (2147483647))) >> (((1796710293) - (1796710287))))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_4] [i_0])) && (((/* implicit */_Bool) var_3))))))))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_5 [i_0]) && (((/* implicit */_Bool) (signed char)36))))) != (((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) arr_10 [i_0]))))))))) - (min((min((arr_3 [i_4] [i_4] [i_0]), (((/* implicit */unsigned long long int) var_5)))), (min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)42))))))));
        }
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (short i_6 = 1; i_6 < 16; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) max((max((min((arr_3 [i_5] [i_6] [i_7]), (((/* implicit */unsigned long long int) (_Bool)0)))), (max((var_1), (arr_24 [i_0] [8U] [i_7] [i_0]))))), (((min((5620699142596686577ULL), (((/* implicit */unsigned long long int) var_16)))) & (((/* implicit */unsigned long long int) min((((/* implicit */int) var_15)), (var_3))))))));
                            var_21 = (i_5 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((min((var_9), (((/* implicit */unsigned int) (unsigned short)57213)))), (((/* implicit */unsigned int) ((var_9) < (((/* implicit */unsigned int) var_5)))))))) != (((((var_7) + (var_1))) << (((((((/* implicit */int) arr_18 [i_5] [i_6] [i_5])) << (((var_5) - (1067040676))))) - (3502785)))))))) : (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((min((var_9), (((/* implicit */unsigned int) (unsigned short)57213)))), (((/* implicit */unsigned int) ((var_9) < (((/* implicit */unsigned int) var_5)))))))) != (((((var_7) + (var_1))) << (((((((((((/* implicit */int) arr_18 [i_5] [i_6] [i_5])) + (2147483647))) << (((((var_5) - (1067040676))) - (8))))) - (3502785))) - (2143969236))))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned int) ((max((max((((/* implicit */unsigned long long int) (unsigned short)8313)), (arr_8 [1ULL] [i_0]))), (((/* implicit */unsigned long long int) ((var_5) ^ (((/* implicit */int) arr_28 [i_5]))))))) % (((/* implicit */unsigned long long int) max((((/* implicit */int) (((-2147483647 - 1)) >= (((/* implicit */int) arr_22 [17ULL]))))), (max((arr_10 [i_5]), (((/* implicit */int) arr_4 [i_5] [i_0] [i_0])))))))));
        }
        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            arr_32 [i_9] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) ((var_18) - (((/* implicit */int) var_11))))), (((var_8) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))))))) > (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [10])) && (((/* implicit */_Bool) (unsigned short)37740))))), (max((3828981890U), (((/* implicit */unsigned int) var_6))))))));
            var_23 = ((/* implicit */unsigned short) min((min((((arr_6 [13LL] [14ULL] [7ULL] [2ULL]) - (((/* implicit */int) var_11)))), (((((/* implicit */int) var_16)) - (((/* implicit */int) (short)19414)))))), (((((/* implicit */int) min((arr_26 [(unsigned short)2] [i_9] [i_9] [(unsigned short)2]), (((/* implicit */unsigned char) (_Bool)1))))) - (min((((/* implicit */int) (_Bool)0)), (var_4)))))));
            arr_33 [(unsigned char)7] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((0) % (((/* implicit */int) var_0)))), (((((/* implicit */int) var_15)) - (((/* implicit */int) arr_5 [i_9]))))))), (min((min((((/* implicit */long long int) arr_23 [16] [i_9] [i_9] [i_9])), (-1706843663680816059LL))), (((/* implicit */long long int) max((var_9), (var_9))))))));
        }
        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            arr_37 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_26 [i_0] [i_10] [i_10] [i_10])), (var_5)))) % (max((((/* implicit */unsigned long long int) arr_30 [i_0] [i_10] [11ULL])), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_29 [i_0] [i_10] [i_0])), (var_8))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_25 [i_10] [i_0] [i_10]))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 17; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((-1706843663680816058LL) % (((/* implicit */long long int) -2055947197))))) * (((((/* implicit */unsigned long long int) 6)) / (var_13)))));
                            arr_44 [i_12] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_18 [i_12] [i_10] [i_12])) ^ (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) % (((/* implicit */int) ((12826044931112865038ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_11] [i_10] [i_11] [i_11]))))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) var_3))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_12] [i_12])) && (((/* implicit */_Bool) var_12)))))));
                        }
                    } 
                } 
                arr_45 [(unsigned char)8] [i_10] [(unsigned char)8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_21 [i_0] [i_10] [i_11])))) || (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_1 [i_10]))))));
            }
            for (int i_14 = 0; i_14 < 19; i_14 += 2) 
            {
                var_26 = ((/* implicit */unsigned short) ((min((((var_10) - (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) min(((unsigned char)193), (var_6)))))) & (((min((((/* implicit */unsigned long long int) var_18)), (27ULL))) ^ (((/* implicit */unsigned long long int) ((0LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)77))))))))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (arr_25 [i_10] [i_10] [i_10]))))) / (max((var_9), (((/* implicit */unsigned int) arr_11 [i_10] [i_10] [i_10] [(signed char)7] [i_0]))))))) / (max((max((((/* implicit */unsigned long long int) var_9)), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [i_0] [i_0] [i_0])) / (((/* implicit */int) (unsigned char)193)))))))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] [4LL]))) <= (var_13))), (((arr_3 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_10] [i_10] [i_10]))))))))) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_10] [i_0]))) * (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_9))))))));
            }
        }
    }
    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
    {
        arr_54 [i_15] = ((/* implicit */unsigned char) ((((min((arr_0 [i_15] [i_15]), (-1283317752))) % (((/* implicit */int) min(((unsigned short)27094), (((/* implicit */unsigned short) arr_25 [i_15] [i_15] [i_15]))))))) > (min((((((/* implicit */int) arr_39 [i_15] [4ULL] [i_15] [i_15])) % (((/* implicit */int) (short)-32243)))), (((/* implicit */int) max(((unsigned short)0), (arr_48 [i_15]))))))));
        var_29 = ((/* implicit */short) min((min((((/* implicit */long long int) max((((/* implicit */short) arr_29 [i_15] [i_15] [2])), (var_15)))), (((((/* implicit */long long int) var_4)) % (-5293946148529350405LL))))), (((/* implicit */long long int) ((min((13240979336054699499ULL), (((/* implicit */unsigned long long int) var_4)))) < (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_53 [4])), (var_18)))))))));
        var_30 = ((/* implicit */int) ((min((min((5620699142596686577ULL), (((/* implicit */unsigned long long int) (unsigned char)195)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_15])) % (((/* implicit */int) (short)32767))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) >= (arr_16 [i_15] [i_15] [i_15])))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_15])) || (((/* implicit */_Bool) var_14)))))))))));
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            for (int i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        for (int i_19 = 0; i_19 < 12; i_19 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65524)) > (((/* implicit */int) arr_31 [i_18]))))) << (((min((var_1), (((/* implicit */unsigned long long int) var_9)))) - (2258933006ULL)))))), (((min((var_13), (((/* implicit */unsigned long long int) arr_10 [i_15])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_34 [i_16] [i_16])), (var_6)))))))));
                                arr_66 [i_19] [i_15] [i_17] [i_16] [i_15] [i_15] = ((/* implicit */signed char) max((min((((/* implicit */int) min((var_11), (arr_62 [i_15] [i_15] [(unsigned char)2] [(unsigned char)2])))), (min((((/* implicit */int) arr_36 [i_15])), (var_3))))), (((/* implicit */int) min((((((/* implicit */_Bool) arr_11 [i_15] [i_16] [i_17] [i_18] [(signed char)6])) && (((/* implicit */_Bool) -2098611307)))), (((986365175U) == (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) ((min((max((((/* implicit */int) arr_36 [i_17])), (-236260595))), (((/* implicit */int) max(((unsigned short)10747), ((unsigned short)35566)))))) + (min((((2098611307) >> (((((/* implicit */int) (unsigned short)27094)) - (27076))))), (((/* implicit */int) min(((unsigned short)4469), (((/* implicit */unsigned short) var_2)))))))));
                    arr_67 [i_15] = ((/* implicit */unsigned char) max((max((((((/* implicit */int) arr_27 [14LL] [14LL] [i_15] [i_15] [(unsigned char)13] [i_15] [i_15])) * (((/* implicit */int) var_15)))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-12)), ((unsigned short)38441)))))), (((/* implicit */int) ((min((arr_24 [i_17] [i_16] [i_15] [i_15]), (((/* implicit */unsigned long long int) arr_6 [i_15] [i_15] [i_16] [i_15])))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_17] [i_17] [16] [i_17] [i_17] [i_15] [i_17])) / (var_18)))))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_20 = 0; i_20 < 19; i_20 += 1) 
    {
        var_33 = min((((min((((/* implicit */unsigned long long int) var_8)), (var_13))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (1387614828842641430LL)))))), (((((/* implicit */unsigned long long int) max((var_18), (((/* implicit */int) var_16))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_20] [i_20] [(signed char)9] [i_20]))) * (8850948077340802051ULL))))));
        /* LoopNest 2 */
        for (unsigned short i_21 = 0; i_21 < 19; i_21 += 4) 
        {
            for (int i_22 = 0; i_22 < 19; i_22 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_23 = 0; i_23 < 19; i_23 += 4) 
                    {
                        for (int i_24 = 2; i_24 < 17; i_24 += 3) 
                        {
                            {
                                arr_83 [i_24] [i_24] [(unsigned short)9] [i_24] [i_22] [(short)8] [(short)8] = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)55)) > (((/* implicit */int) arr_77 [i_20] [i_21] [i_22] [15LL] [i_22]))))) < (((/* implicit */int) ((((/* implicit */int) (unsigned char)120)) < (((/* implicit */int) (signed char)(-127 - 1))))))))) < (((/* implicit */int) ((((var_2) || (((/* implicit */_Bool) (unsigned char)171)))) || (((((/* implicit */_Bool) 1387614828842641427LL)) || (((/* implicit */_Bool) arr_7 [i_20] [i_21] [i_21]))))))));
                                var_34 = max((((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_7 [i_21] [i_22] [i_24])) - (((/* implicit */int) (unsigned char)125)))), (((var_5) - (1314083651)))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_77 [i_24] [i_23] [(signed char)6] [(signed char)6] [(signed char)6])) || (((/* implicit */_Bool) var_14))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_20] [i_21] [5ULL] [i_22] [5ULL] [i_24]))) & (var_7))))));
                            }
                        } 
                    } 
                    arr_84 [i_20] [i_21] [i_21] [i_20] = ((/* implicit */int) min((min((min((arr_24 [10] [(signed char)5] [10] [i_22]), (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) ((((((var_17) - (((/* implicit */int) arr_26 [10U] [i_20] [i_21] [i_21])))) + (2147483647))) << (((max((arr_81 [i_20] [i_21] [i_22] [i_22] [(signed char)16]), (((/* implicit */unsigned long long int) (unsigned char)163)))) - (14293512647218069174ULL))))))));
                }
            } 
        } 
    }
}
