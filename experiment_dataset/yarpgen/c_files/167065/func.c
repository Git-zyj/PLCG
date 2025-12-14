/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167065
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
    var_15 = ((/* implicit */int) (short)-12860);
    var_16 -= ((/* implicit */_Bool) var_10);
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((var_10), (var_13))))));
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)200))))));
        }
        for (unsigned char i_2 = 4; i_2 < 13; i_2 += 4) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                var_18 = ((/* implicit */_Bool) 1792852809);
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)117))) : (arr_6 [i_2 + 1] [i_3 - 2] [i_3])));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((signed char) arr_5 [i_2] [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */int) (short)-32744)) | (((/* implicit */int) var_0))));
                        var_21 = ((((/* implicit */_Bool) 1013599977541401072ULL)) ? (((/* implicit */int) var_5)) : (-1507539291));
                        var_22 = ((/* implicit */long long int) (short)-32760);
                        var_23 -= ((/* implicit */unsigned long long int) var_0);
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_7))));
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                    arr_20 [i_2] &= ((/* implicit */unsigned short) 4294967274U);
                    var_26 -= ((/* implicit */int) var_2);
                }
            }
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                var_27 = arr_7 [i_0] [i_2 + 1] [i_7];
                arr_23 [i_0] [i_2] [i_7] = ((/* implicit */unsigned long long int) var_12);
                var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 22U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)161))));
                var_29 = -1585394188;
            }
            /* vectorizable */
            for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                arr_26 [i_8] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)18608)) ^ (((/* implicit */int) (_Bool)1))));
                var_30 = ((/* implicit */unsigned long long int) (~(arr_6 [i_2] [i_2] [i_2 - 2])));
                /* LoopSeq 3 */
                for (int i_9 = 2; i_9 < 12; i_9 += 1) /* same iter space */
                {
                    arr_30 [i_9] = ((/* implicit */unsigned long long int) var_0);
                    var_31 += ((/* implicit */_Bool) var_0);
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */int) var_0)) == (((/* implicit */int) (unsigned char)12)))))));
                }
                for (int i_10 = 2; i_10 < 12; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (short)29836);
                        arr_36 [i_2] [i_10] [i_0] [i_2] [i_0] = ((/* implicit */short) (+(var_1)));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_9 [i_0] [i_8] [i_10]))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
                    {
                        arr_39 [i_12] [i_10 + 2] [i_8] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (var_6)));
                        arr_40 [i_12] [i_2 - 3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_38 [i_10 - 1] [i_2] [i_8] [i_10] [i_0 + 1]))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */short) var_12);
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) == (var_12)));
                    }
                    arr_43 [i_0] [i_0] [i_8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-12435)) ^ (((/* implicit */int) var_5))));
                    var_36 = ((/* implicit */short) 473520334U);
                }
                for (int i_14 = 2; i_14 < 12; i_14 += 1) /* same iter space */
                {
                    arr_47 [i_0] [i_2] [i_2] [i_2] [i_14] [i_14] = (signed char)108;
                    /* LoopSeq 2 */
                    for (int i_15 = 3; i_15 < 13; i_15 += 4) 
                    {
                        arr_50 [i_0] [i_0 - 1] [i_0] [i_15] [i_0] [i_0 - 1] = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 1404694386U)) ? (3885925545579665086ULL) : (((/* implicit */unsigned long long int) 1994605361U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_3) : (((/* implicit */int) (_Bool)1))))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_8)) ^ (arr_46 [i_15] [i_14] [i_8] [i_0 + 1])));
                        var_38 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */_Bool) 5905880413812238610ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))));
                        arr_51 [i_15] = ((/* implicit */int) 3591521453U);
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        arr_54 [i_0] [i_2] [i_8] [i_14] [i_8] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 8191U)))) ? (((((/* implicit */_Bool) (short)23287)) ? (4ULL) : (((/* implicit */unsigned long long int) -1426364688890481340LL)))) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                        var_39 = ((/* implicit */unsigned char) ((16747471927642414583ULL) & (((/* implicit */unsigned long long int) -8132186753463372739LL))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))));
                        var_41 += ((/* implicit */long long int) (unsigned short)9);
                    }
                }
                var_42 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_49 [i_8] [i_0 + 1] [i_2 - 2] [i_8] [i_2 - 4])) & (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1429))) : (3138028677U)))));
                arr_59 [i_8] [i_0] [i_8] = ((/* implicit */int) 1239055273U);
            }
            var_43 = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (unsigned char)160)), (314038918))), (((/* implicit */int) ((1734533499U) > (3416619050U))))));
            arr_60 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) 2591095380U);
            /* LoopSeq 1 */
            for (int i_18 = 2; i_18 < 11; i_18 += 3) 
            {
                var_44 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 1585345688519533378ULL)) ? (3015945024043091344ULL) : (((/* implicit */unsigned long long int) arr_58 [i_0] [i_0] [i_0] [i_2 - 4] [i_18])))), (((/* implicit */unsigned long long int) (short)15223))));
                var_45 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)-1)), (((7406834068786237905ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_18] [i_18 + 2] [i_2 - 3] [i_0 - 1])))))));
                var_46 = (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (signed char)31)) : (min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) 18081256776293090022ULL)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (unsigned char)60)))))));
                var_47 = ((/* implicit */short) ((5428852912629979774ULL) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)22626)))))));
            }
            arr_65 [i_0] [i_2] [i_0] = ((/* implicit */int) 8LL);
        }
        /* vectorizable */
        for (long long int i_19 = 2; i_19 < 11; i_19 += 2) 
        {
            arr_69 [i_0] [i_19] [i_19] = ((/* implicit */int) (signed char)33);
            /* LoopNest 2 */
            for (short i_20 = 0; i_20 < 14; i_20 += 1) 
            {
                for (unsigned char i_21 = 0; i_21 < 14; i_21 += 1) 
                {
                    {
                        arr_77 [i_0] [i_19 - 2] [i_21] [i_21] = ((/* implicit */signed char) -1564041036);
                        /* LoopSeq 2 */
                        for (short i_22 = 0; i_22 < 14; i_22 += 3) 
                        {
                            arr_80 [i_21] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (2147483647) : (((/* implicit */int) (unsigned char)9)))) - ((+(((/* implicit */int) var_10))))));
                            var_48 *= ((/* implicit */unsigned long long int) 2314161231U);
                        }
                        for (unsigned long long int i_23 = 1; i_23 < 10; i_23 += 4) 
                        {
                            arr_84 [i_0] [i_21] [i_20] [i_21] [i_23 + 4] = ((/* implicit */signed char) (-((-(2097152)))));
                            var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (281474976710656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            arr_85 [i_0] [i_0] [i_19] [i_21] [i_23 + 1] [i_21] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-126)) - (((/* implicit */int) var_9))))) ? (var_3) : (var_3)));
                        }
                        arr_86 [i_0] [i_21] [i_21] [i_21] [i_0] [i_0] = ((/* implicit */signed char) (!((_Bool)1)));
                    }
                } 
            } 
            var_50 = ((/* implicit */unsigned char) ((448232084) - (((/* implicit */int) (short)-12442))));
        }
        for (short i_24 = 1; i_24 < 13; i_24 += 3) 
        {
            arr_90 [i_0] = ((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))) > (max((3905001739U), (((/* implicit */unsigned int) (short)2481))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_25 = 0; i_25 < 14; i_25 += 3) 
            {
                for (long long int i_26 = 0; i_26 < 14; i_26 += 1) 
                {
                    {
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 531207182739750493LL)) ? (((/* implicit */long long int) 3684565502U)) : (min((13LL), (((/* implicit */long long int) arr_53 [i_24 + 1] [i_24] [i_25] [i_26] [i_24]))))));
                        var_52 = ((/* implicit */int) max((var_52), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-10130)) ? (3275128302646806116ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) / (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) arr_83 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) -1777168050)) ? (((/* implicit */int) min((((/* implicit */signed char) arr_70 [i_25] [i_24] [i_0])), ((signed char)87)))) : (((/* implicit */int) (signed char)70))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (long long int i_27 = 2; i_27 < 12; i_27 += 1) 
        {
            for (signed char i_28 = 0; i_28 < 14; i_28 += 2) 
            {
                {
                    arr_104 [i_0] [i_0] [i_27 - 2] [i_28] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)15))));
                    arr_105 [i_0] [i_27] [i_28] [i_28] = ((/* implicit */unsigned char) max((7LL), (((/* implicit */long long int) ((((/* implicit */int) arr_61 [i_0] [i_27 - 1] [i_28] [i_27 + 2])) * (((((/* implicit */int) var_10)) | (((/* implicit */int) (unsigned char)1)))))))));
                }
            } 
        } 
        arr_106 [i_0] = ((/* implicit */unsigned int) max(((-(18446744073709551610ULL))), (((/* implicit */unsigned long long int) ((var_6) != (1597608953))))));
    }
    /* vectorizable */
    for (long long int i_29 = 1; i_29 < 13; i_29 += 3) /* same iter space */
    {
        arr_109 [i_29] = ((/* implicit */unsigned int) var_12);
        var_53 = ((/* implicit */unsigned int) 4482373719777344286ULL);
        arr_110 [i_29] = ((/* implicit */long long int) (~(((/* implicit */int) arr_70 [i_29 - 1] [i_29] [i_29 + 1]))));
        arr_111 [i_29] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((-7002946747532877655LL) >= (((/* implicit */long long int) 1987270763)))))));
        var_54 = ((/* implicit */unsigned char) var_8);
    }
}
