/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182967
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
    var_20 = ((/* implicit */int) var_19);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [(unsigned short)12] [i_0] = ((/* implicit */signed char) min((var_17), (((/* implicit */unsigned char) ((signed char) arr_2 [i_0])))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0]);
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-55)))) / (arr_9 [i_3] [i_1] [i_3] [i_3])))) ? ((+(max((((/* implicit */unsigned long long int) var_14)), (arr_6 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)81))))));
                            var_22 = ((/* implicit */unsigned short) var_3);
                            arr_18 [i_0] [(unsigned char)3] [i_2] = arr_11 [i_4] [(signed char)18] [i_1] [i_0];
                            var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [(short)11] [i_1] [i_2] [i_3]), (min((var_15), (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))) : (((unsigned long long int) ((var_6) ? (var_1) : (((/* implicit */int) (_Bool)0)))))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((int) arr_0 [i_0] [i_0])) > (((/* implicit */int) var_11)))))));
                            var_25 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_13 [16ULL] [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (arr_13 [(short)23] [i_5 - 1] [i_5 - 1] [17] [(_Bool)1] [i_5] [22U]) : (((/* implicit */int) var_18)))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) && ((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [i_5] [i_3] [i_0] [i_0] [(unsigned char)8] [i_0] [i_0])), (arr_10 [i_0] [i_1] [i_2] [i_5]))))))));
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_5 - 1])) % (((/* implicit */int) arr_1 [i_5 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) (_Bool)1))))) ? (var_13) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            arr_24 [9] [i_2] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)20351)), (((((/* implicit */int) arr_16 [i_2] [i_2] [(short)4] [i_2] [(short)4])) + (((/* implicit */int) arr_16 [i_0] [i_3] [i_2] [i_0] [i_0]))))));
                            var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [18LL] [i_6])) ? (arr_15 [i_0] [(signed char)8] [i_2] [i_3] [i_6] [i_1] [i_0]) : (2412953713260477205ULL)))) ? (((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) ((_Bool) var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (arr_13 [20LL] [i_1] [i_3] [(short)14] [i_6] [i_2] [(unsigned char)22])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-12625))))) : (((/* implicit */int) arr_20 [i_6] [i_6] [i_6]))))));
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_6] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((arr_2 [i_1]) ? (((/* implicit */int) arr_2 [i_6])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((short) arr_2 [i_3])))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [i_1])), (var_0)))) ? (arr_11 [i_6] [10LL] [6ULL] [6ULL]) : (((/* implicit */unsigned long long int) 4294967289U))));
                        }
                        for (long long int i_7 = 3; i_7 < 24; i_7 += 1) 
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */int) ((arr_13 [i_7 + 1] [i_7 - 3] [i_7 - 3] [i_7 - 2] [i_7 + 1] [i_7 - 3] [i_7 - 1]) > (arr_13 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])))) << (((((((/* implicit */_Bool) arr_6 [i_7 - 3])) ? (var_19) : (arr_6 [i_7 - 3]))) - (15477603531141760036ULL)))));
                            var_31 = ((/* implicit */int) ((((/* implicit */long long int) min((arr_13 [i_0] [i_7 - 1] [i_0] [(signed char)2] [14U] [i_3] [i_7]), (((/* implicit */int) var_18))))) % (((long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) : (14455214382127192380ULL))))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = max((max((((((/* implicit */_Bool) arr_19 [i_0] [(unsigned char)21] [(unsigned char)5] [0LL])) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) (!(var_7)))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_16 [i_7] [i_7 - 2] [(signed char)22] [i_7] [i_7]))));
                            arr_30 [i_0] [i_2] [i_3] [i_3] = ((/* implicit */int) var_9);
                            var_32 |= ((/* implicit */unsigned long long int) arr_1 [i_7 - 2]);
                        }
                        var_33 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                        arr_31 [i_2] &= ((/* implicit */short) max((((/* implicit */int) (unsigned short)62116)), ((~(((/* implicit */int) (signed char)4))))));
                    }
                } 
            } 
        } 
        arr_32 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) (unsigned short)60625)) : (((/* implicit */int) ((unsigned short) var_8)))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            arr_39 [i_9] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_21 [i_8]))))));
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) arr_33 [i_12]);
                            var_35 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) % (arr_6 [i_11 - 1]))) != ((+(0ULL)))));
                            var_36 = (+(((arr_11 [i_8] [i_8] [i_8] [i_8]) + (arr_11 [i_8] [i_8] [i_8] [i_8]))));
                            var_37 -= ((/* implicit */short) min((((((/* implicit */_Bool) arr_23 [i_11 - 1] [(signed char)20] [i_11 - 1] [i_11 - 1] [i_11 - 1])) || (((/* implicit */_Bool) arr_23 [i_11 - 1] [i_11] [i_11] [i_11 - 1] [i_11 - 1])))), (((arr_26 [i_8] [i_8] [i_8] [(_Bool)1] [i_8] [i_8] [(unsigned short)8]) || (((/* implicit */_Bool) ((arr_42 [i_9] [i_9] [i_12]) + (((/* implicit */unsigned long long int) arr_13 [i_10] [(unsigned short)11] [(signed char)19] [i_11] [i_12] [(_Bool)1] [i_12])))))))));
                            var_38 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_20 [(short)5] [i_10] [i_11 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) : (arr_6 [i_11 - 1]))) ^ (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) arr_20 [i_12] [i_12] [i_11 - 1])))))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_42 [i_8] [i_9] [i_8])) ? (arr_43 [i_8] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */int) var_14)))))) >> (((((((/* implicit */int) ((unsigned char) (unsigned short)56502))) << ((((((~(((/* implicit */int) arr_40 [i_10] [i_9] [i_8] [i_8])))) + (26))) - (13))))) - (745457)))));
            }
            for (long long int i_13 = 1; i_13 < 17; i_13 += 4) 
            {
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)49)) % ((-(((/* implicit */int) var_2))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_13] [i_9] [i_9] [i_8]))) : (min((min((((/* implicit */long long int) (short)7)), (arr_47 [i_8] [11ULL] [i_9] [(_Bool)1] [i_13]))), (((/* implicit */long long int) ((((/* implicit */int) var_18)) < (((/* implicit */int) (signed char)-55)))))))));
                var_41 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_11 [i_8] [i_9] [i_9] [i_8]), (15983040976309326240ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_13] [i_13 + 2] [i_13 - 1] [i_13 + 1]))) : (((((/* implicit */_Bool) var_15)) ? (arr_42 [i_8] [(_Bool)0] [i_13]) : (1174514570785410721ULL)))))) ? ((~(min((((/* implicit */unsigned int) (_Bool)1)), (3418245895U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (((((/* implicit */_Bool) 16033790360449074411ULL)) ? (((/* implicit */long long int) arr_10 [i_8] [i_8] [i_9] [11ULL])) : (4024207039698690462LL))))))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_15 = 3; i_15 < 18; i_15 += 1) 
                {
                    var_42 = ((unsigned short) (+(72057594037927680ULL)));
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)41)) ? (arr_5 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_19 [i_8] [i_8] [4ULL] [i_8]))))));
                    arr_54 [i_8] [i_8] [6U] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((arr_9 [(unsigned char)6] [i_14] [(unsigned char)6] [i_14]) << (((arr_35 [i_8]) + (604389905)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_15] [i_14] [i_9] [i_8])) ? (((/* implicit */int) arr_40 [i_8] [i_9] [i_14] [i_15])) : (((/* implicit */int) (signed char)15))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        var_44 *= ((/* implicit */unsigned int) max(((~(((/* implicit */int) ((signed char) 512ULL))))), (((/* implicit */int) ((unsigned char) ((arr_0 [4ULL] [i_16]) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_28 [i_8] [i_8]))))))));
                        var_45 = ((/* implicit */signed char) min(((+(arr_35 [i_8]))), (((/* implicit */int) ((unsigned short) ((int) var_0))))));
                        arr_57 [i_8] [(_Bool)1] [i_14] [i_15] [i_16] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_28 [i_8] [i_9]))))), (((arr_23 [i_8] [i_9] [i_8] [i_15] [i_16]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_15 + 2])) - (((/* implicit */int) arr_46 [i_15 + 1] [i_15] [i_15 - 1] [i_15])))))));
                        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) (signed char)85))));
                    }
                    for (long long int i_17 = 1; i_17 < 18; i_17 += 1) 
                    {
                        var_47 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (arr_23 [i_17 + 2] [i_17] [14ULL] [i_17] [i_17])))), (min((arr_42 [i_15 + 2] [i_15 - 2] [i_15]), (((/* implicit */unsigned long long int) ((7) ^ (0))))))));
                        arr_61 [(unsigned char)10] [i_15] [i_14] [15ULL] [12ULL] [8] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_58 [5ULL] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [i_8] [(signed char)10] [i_8])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_18 = 1; i_18 < 16; i_18 += 1) 
                    {
                        var_48 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_18 + 2] [i_15 + 1] [1ULL] [i_8])) ? (((/* implicit */int) arr_58 [10] [i_18] [i_18] [(signed char)3] [i_18 + 4])) : (((/* implicit */int) var_12))));
                        var_49 = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                    }
                }
                var_50 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 876721412U)) ? (((/* implicit */unsigned long long int) max((2728516201U), (((/* implicit */unsigned int) (unsigned char)153))))) : (min((var_15), (((/* implicit */unsigned long long int) (short)4460))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_50 [i_8] [i_9] [i_14] [i_9]))) ? (arr_33 [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_9])) ? (((/* implicit */int) arr_26 [i_8] [i_8] [i_9] [i_9] [i_9] [i_14] [i_14])) : (((/* implicit */int) var_11)))))))));
                var_51 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (var_19))))))), (((unsigned long long int) arr_46 [i_8] [(signed char)15] [i_14] [i_14]))));
            }
        }
        /* vectorizable */
        for (long long int i_19 = 3; i_19 < 18; i_19 += 1) 
        {
            var_52 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_40 [(signed char)0] [i_19 - 3] [i_19 - 3] [(_Bool)1]))))) != (((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_19] [i_19] [(_Bool)1])) ? (((/* implicit */long long int) var_0)) : (arr_66 [i_19])))));
            /* LoopSeq 2 */
            for (short i_20 = 1; i_20 < 19; i_20 += 3) 
            {
                var_53 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_20] [i_20 - 1] [i_20]))) != (arr_70 [i_20] [i_20 - 1] [(unsigned short)3] [i_20 + 1])));
                var_54 = ((/* implicit */unsigned char) (~(arr_64 [i_19] [i_19 - 2] [i_19])));
            }
            for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                arr_73 [i_8] [(_Bool)1] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_55 [i_19 - 2] [(signed char)16] [(unsigned char)11] [i_19 - 3] [i_19] [i_19] [(unsigned short)4])) ^ (((/* implicit */int) arr_55 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 2] [6U] [(signed char)19] [i_19 - 2]))));
                /* LoopNest 2 */
                for (int i_22 = 4; i_22 < 16; i_22 += 1) 
                {
                    for (int i_23 = 1; i_23 < 19; i_23 += 3) 
                    {
                        {
                            var_55 = (+(var_4));
                            arr_80 [i_8] [i_8] [i_23] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((unsigned long long int) (short)32746));
                            var_56 = ((/* implicit */unsigned long long int) min((var_56), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_79 [i_8] [(unsigned char)14])))) + (arr_11 [i_22 + 4] [i_22 + 4] [i_22 - 4] [i_22 - 4])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 20; i_24 += 2) 
                {
                    for (int i_25 = 0; i_25 < 20; i_25 += 4) 
                    {
                        {
                            var_57 = ((/* implicit */long long int) ((((/* implicit */long long int) arr_10 [i_19 + 2] [i_19 + 2] [i_19 + 2] [i_19 - 1])) < (((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_8] [(unsigned short)17] [i_21] [i_24]))) + (arr_66 [(_Bool)1])))));
                            var_58 = ((/* implicit */unsigned char) ((_Bool) arr_53 [(unsigned char)3] [i_19] [(unsigned char)3] [i_19 - 2]));
                            arr_87 [i_8] [(short)4] [4U] = ((/* implicit */unsigned long long int) (signed char)-1);
                        }
                    } 
                } 
            }
        }
        /* LoopNest 3 */
        for (unsigned char i_26 = 1; i_26 < 18; i_26 += 2) 
        {
            for (int i_27 = 0; i_27 < 20; i_27 += 4) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    {
                        var_59 -= var_7;
                        var_60 -= arr_26 [(unsigned char)12] [14U] [(_Bool)1] [18ULL] [i_27] [(unsigned char)20] [i_28];
                    }
                } 
            } 
        } 
        arr_94 [i_8] = ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_51 [i_8] [i_8] [14U])) != (((/* implicit */int) min((arr_45 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned short) (unsigned char)181))))))));
    }
    for (unsigned char i_29 = 0; i_29 < 11; i_29 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_30 = 0; i_30 < 11; i_30 += 3) 
        {
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                {
                    var_61 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_76 [i_30] [(unsigned char)9] [(short)1] [i_29])) >= (((/* implicit */int) arr_44 [i_29] [i_30]))))), (min((((/* implicit */long long int) (unsigned char)74)), (arr_60 [i_29] [i_30] [i_30] [i_31] [i_31])))));
                    /* LoopNest 2 */
                    for (int i_32 = 0; i_32 < 11; i_32 += 4) 
                    {
                        for (unsigned short i_33 = 4; i_33 < 10; i_33 += 2) 
                        {
                            {
                                var_62 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_58 [i_29] [i_30] [i_31] [(unsigned short)4] [i_30]))));
                                var_63 = ((/* implicit */unsigned short) ((long long int) (~((+(var_5))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_64 = ((/* implicit */signed char) max((var_64), (((/* implicit */signed char) (_Bool)1))));
    }
}
