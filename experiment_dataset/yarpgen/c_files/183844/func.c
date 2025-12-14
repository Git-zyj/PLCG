/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183844
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))) | (max((var_14), (((/* implicit */unsigned long long int) (unsigned short)7655))))))));
                        var_17 = ((/* implicit */signed char) (unsigned char)30);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)57880)) % (((/* implicit */int) (unsigned short)57880))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 1; i_5 < 15; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
                            var_19 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_1 + 1] [i_1] [i_2] [i_5 + 1])) ? (arr_9 [i_4] [i_0] [i_1 + 1] [4ULL] [i_1 + 1] [i_5 + 1]) : (arr_9 [i_4] [(short)10] [i_1 + 1] [i_4] [i_2] [i_5 + 1]))));
                        }
                        for (signed char i_6 = 1; i_6 < 15; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (arr_8 [i_0] [i_1] [i_0] [(unsigned char)14] [i_6] [12ULL]) : (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)10412)))), (arr_16 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1])))));
                            var_21 = ((/* implicit */signed char) ((unsigned long long int) ((max((arr_4 [i_0] [i_0]), (18446744073709551608ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 + 2] [i_4])) ^ (((/* implicit */int) var_5))))))));
                            arr_18 [i_0] [i_0] [i_0] [i_4] [10ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_2 [i_1 + 1] [i_0 - 2]), (var_0)))) % (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-39)), (var_13))))));
                        }
                        arr_19 [i_0] [i_2] [i_2] [i_1 + 2] [i_0 + 3] [i_0] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) arr_5 [i_0] [i_1] [(signed char)4] [i_0]))));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 1) 
                    {
                        var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [(unsigned char)9] [i_2] [11LL])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (((((/* implicit */int) (unsigned char)252)) + (((/* implicit */int) var_1))))))) : (max((((/* implicit */unsigned long long int) (unsigned short)57910)), (var_14)))));
                        var_23 |= ((((/* implicit */_Bool) (+((~(arr_17 [8ULL] [(unsigned char)4] [(unsigned char)10] [(_Bool)1] [i_2] [i_7] [i_7 - 1])))))) ? (((((unsigned long long int) var_6)) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 3] [i_0] [i_0 + 2] [i_0 + 1] [(signed char)3] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_0] [10ULL])) : ((+(((/* implicit */int) var_0))))))));
                        var_24 = ((/* implicit */unsigned char) (+((-(var_11)))));
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 4; i_8 < 14; i_8 += 2) 
                        {
                            var_25 += ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_27 [i_8] [i_8] [i_8] [i_8] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))))));
                            arr_28 [(unsigned char)6] [i_1] [i_1] [i_0] [i_8] = ((/* implicit */unsigned char) arr_25 [i_8 + 1] [7ULL] [10ULL] [i_1] [i_0 + 3]);
                            var_26 = ((short) min((arr_9 [i_0] [i_1 + 1] [i_1 + 2] [i_1] [9ULL] [i_1 + 2]), (arr_9 [i_0] [i_0 - 2] [i_1 + 1] [i_2] [i_7 + 3] [(_Bool)1])));
                            var_27 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_27 [i_0 - 3] [i_0] [i_2] [i_0] [i_8])) % (((/* implicit */int) var_12)))), (((/* implicit */int) ((_Bool) (unsigned short)55123)))))), ((-(var_6)))));
                            arr_29 [i_0 + 1] [i_0] [i_0] [(unsigned short)9] = ((/* implicit */unsigned char) (unsigned short)7655);
                        }
                        for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned short) min((arr_7 [i_1 - 1] [i_2] [i_0]), (arr_7 [8ULL] [i_7 + 1] [i_0]))));
                            var_29 ^= max((((/* implicit */unsigned char) (signed char)-53)), ((unsigned char)66));
                        }
                        for (signed char i_10 = 3; i_10 < 15; i_10 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned short) (~(9265671136795888334ULL)));
                            var_31 |= ((/* implicit */signed char) ((unsigned long long int) (!(((-6LL) == (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            var_32 = ((/* implicit */signed char) (unsigned short)7630);
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_2] [i_0] [i_0 + 2] [i_7 + 1])) % (((/* implicit */int) var_12)))))));
                            var_34 += ((/* implicit */unsigned short) (_Bool)0);
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [i_0])) ^ (((/* implicit */int) var_5))))));
                        arr_42 [i_0] [(unsigned short)13] [i_0] [7ULL] = ((/* implicit */unsigned short) ((arr_0 [i_0] [i_0]) >> (((((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2])) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57880)) >> (((((/* implicit */int) (unsigned char)190)) - (161)))))))) - (16081496904298528719ULL)))));
                        arr_43 [14ULL] [8ULL] [i_1 - 1] [i_2] [i_2] [(unsigned char)8] &= (-(((max((((/* implicit */unsigned long long int) var_10)), (9381482398452193415ULL))) >> (((((var_14) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) - (16081496904298528786ULL))))));
                    }
                    for (short i_13 = 3; i_13 < 13; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((arr_30 [i_0] [i_0] [i_0] [(unsigned short)2] [i_2] [i_13]) << (((min((((/* implicit */int) ((unsigned char) (signed char)105))), ((~(((/* implicit */int) (signed char)-106)))))) - (68))))))));
                        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (9265671136795888355ULL))))));
                    }
                    for (unsigned short i_14 = 3; i_14 < 15; i_14 += 3) 
                    {
                        arr_48 [i_0] [i_0] [i_0] [i_14] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_2 [i_14 - 2] [i_1 + 1]))))));
                        arr_49 [i_0] [i_0 + 3] [i_0] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */short) var_14);
                        var_38 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) arr_34 [i_14])) / (((/* implicit */int) var_8)))), ((~(((/* implicit */int) var_12)))))) & (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)7687)) ? (10887460073599508760ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        var_39 = ((/* implicit */unsigned char) (((-(7ULL))) >> (((/* implicit */int) ((_Bool) var_15)))));
                        var_40 = ((/* implicit */long long int) max((((unsigned long long int) ((((/* implicit */_Bool) 17955661741792421205ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_14 - 1] [i_0] [i_0] [i_0]))) : (var_6)))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_5)))))))));
                    }
                    for (long long int i_15 = 3; i_15 < 12; i_15 += 1) 
                    {
                        arr_52 [i_15 - 3] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_15)) | (((/* implicit */int) arr_51 [(unsigned char)2] [i_1 - 1] [i_0] [i_0 - 2])))) >> (((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-19109)))) + (19115)))));
                        var_41 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)206))));
                        var_42 = ((/* implicit */long long int) ((((unsigned long long int) var_2)) + (((unsigned long long int) arr_38 [(unsigned char)10] [i_1 + 1] [i_2] [i_2] [(unsigned char)10] [i_15]))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (long long int i_17 = 1; i_17 < 12; i_17 += 4) 
                        {
                            {
                                arr_57 [i_0] [i_0] [i_1 + 1] [(_Bool)1] [i_17 + 3] [i_17 + 2] [i_17 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)244)) << (((((/* implicit */int) (unsigned char)231)) - (208)))));
                                arr_58 [i_0] [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [0ULL] = ((/* implicit */unsigned short) 2ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 1) 
    {
        for (unsigned short i_19 = 1; i_19 < 10; i_19 += 3) 
        {
            {
                var_43 = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                var_44 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_19] [i_19] [i_19] [i_19 + 1] [i_19 - 1] [i_19 - 1] [(short)6])) || (((/* implicit */_Bool) arr_1 [i_18])))))));
                var_45 += ((/* implicit */unsigned char) max(((((+(var_6))) * (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (((((_Bool) 8582332705947651185ULL)) ? (((arr_35 [i_18] [i_18] [i_18] [i_18] [i_19 + 1] [i_18]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (arr_41 [i_18] [i_18] [i_19 - 1] [i_19 - 1] [i_19 + 1] [(unsigned char)2])))))));
                /* LoopSeq 1 */
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 1; i_21 < 9; i_21 += 2) 
                    {
                        for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 3) 
                        {
                            {
                                var_46 = ((/* implicit */_Bool) arr_21 [i_18]);
                                arr_73 [i_18] [i_18] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_18] [11ULL] [(unsigned char)4] [i_18]))));
                            }
                        } 
                    } 
                    var_47 = ((max((((/* implicit */unsigned long long int) arr_61 [(signed char)6] [i_18])), (min((((/* implicit */unsigned long long int) arr_34 [i_18])), (var_3))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                    var_48 |= max((arr_6 [4LL] [i_20] [2LL]), (arr_6 [i_19] [i_20] [i_19 + 1]));
                    var_49 += ((/* implicit */unsigned char) (((~((~(arr_45 [i_20] [i_19] [i_19 + 1] [i_19] [i_19 + 1]))))) >> ((((-(arr_70 [i_20] [i_20] [(unsigned char)2] [(unsigned char)2]))) - (5946234727334533693LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 1; i_23 < 10; i_23 += 2) 
                    {
                        for (unsigned char i_24 = 1; i_24 < 9; i_24 += 2) 
                        {
                            {
                                arr_80 [i_24] [(unsigned short)7] [i_18] = ((/* implicit */unsigned char) min(((((((-(((/* implicit */int) (unsigned short)7640)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_2)) ? (arr_59 [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))))) + (6476603235525114787LL))))), (((/* implicit */int) (unsigned char)76))));
                                var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)158)) || (arr_22 [i_24 - 1]))))))))));
                                var_51 = ((/* implicit */unsigned char) arr_14 [i_18] [i_18] [i_18] [i_18]);
                                arr_81 [i_18] [i_19 + 1] [i_20] [(unsigned char)4] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) arr_75 [i_24 - 1] [i_23] [i_18] [5ULL] [i_18])) : (((/* implicit */int) (unsigned char)107)))) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)93)) || (((/* implicit */_Bool) (unsigned short)2486)))))))) ? (((((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_18])))));
                            }
                        } 
                    } 
                }
                arr_82 [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))) * (5040930491737812944ULL))), (18446744073709551608ULL)));
            }
        } 
    } 
    var_52 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (((unsigned long long int) ((((/* implicit */int) var_15)) == (((/* implicit */int) var_8))))));
}
