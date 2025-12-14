/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103609
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (2147483629)))) ? (((var_1) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_19)))))) : (((/* implicit */long long int) 4294967295U))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((11233203195419084107ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (var_12) : (min((min((var_12), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32763)) ^ (1781073382))))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_13 [i_1] [i_1] [2U] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_10 [i_1] [i_3]))))) > (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_2 - 1]))))));
                    arr_14 [i_1] [(short)3] [5U] [i_3] = ((/* implicit */unsigned short) (+(1781073382)));
                    arr_15 [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned long long int) (+((+(4294967271U)))));
                }
            } 
        } 
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((((/* implicit */_Bool) max((arr_8 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16102))) < (1363424701U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 24ULL)) ? (4294967288U) : (2931542594U)))) ? (((((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])) ^ (-4))) : (min((1781073388), (var_6))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((16822083244913826064ULL) * (((/* implicit */unsigned long long int) 552865007)))))));
            var_22 *= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_11 [i_1] [i_4] [i_1])))) * (((((/* implicit */int) arr_1 [i_4])) | (552864990)))));
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((arr_12 [i_1] [i_1] [i_1] [i_4 + 1]) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) ((unsigned char) arr_8 [i_1] [i_1] [i_1]))))))));
        }
        for (signed char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
        {
            arr_20 [i_5] [i_5] [i_1] = max((((/* implicit */long long int) arr_5 [i_1])), (((long long int) arr_12 [i_1] [i_5] [i_1] [i_1])));
            var_24 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [4LL]))))), (((/* implicit */unsigned long long int) var_2))));
            arr_21 [4] [i_1] = (((!((!(((/* implicit */_Bool) arr_7 [i_1])))))) ? (((/* implicit */unsigned long long int) (-(arr_19 [i_1] [i_5])))) : (17100187689647107219ULL));
        }
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) (signed char)-4);
            arr_24 [i_1] [i_1] = ((/* implicit */short) 1363424701U);
            /* LoopSeq 4 */
            for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                arr_27 [i_7] [i_6] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned char)231)) ? (16514753027971042792ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned long long int) min((arr_18 [i_7] [i_6] [i_1]), (((/* implicit */unsigned int) var_2))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) 4294967295U))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (9U) : (((/* implicit */unsigned int) 612058560))))) | (((16874248042419406750ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9 + 1]))))))))));
                            arr_32 [2] [i_6] [i_7] [2] [i_7] [i_8] [2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_9 + 1])) ? (((/* implicit */int) arr_11 [i_9 + 1] [i_9 - 1] [i_9 - 1])) : (arr_26 [i_9 - 1] [i_9] [i_9 + 1] [i_9 - 1]))) ^ (max((min((var_10), (((/* implicit */int) var_14)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                            arr_33 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((arr_22 [i_9 - 1] [i_9 + 1] [i_9 - 1]), (((/* implicit */unsigned char) arr_11 [(_Bool)1] [(_Bool)1] [i_7]))))), (((unsigned int) arr_26 [i_1] [i_1] [(signed char)2] [i_1]))));
                        }
                    } 
                } 
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_36 [i_1] [i_10] [i_6] [i_10] = ((/* implicit */int) arr_18 [i_1] [i_1] [i_10]);
                var_28 -= ((/* implicit */int) (-(var_8)));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_40 [i_1] [i_1] [i_6] [i_11] = min((((((_Bool) var_12)) ? (var_9) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [2U])) != (((/* implicit */int) var_17))))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) 2931542612U)) && (((/* implicit */_Bool) (signed char)-7))))))));
                arr_41 [i_6] [i_6] [i_6] [i_11] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_3)) & (((/* implicit */int) arr_4 [i_6]))))));
                arr_42 [i_11] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3)))) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -225588442)) ^ (var_1)))))))) <= (((arr_39 [(signed char)3] [i_11] [(unsigned char)1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                /* LoopSeq 1 */
                for (signed char i_12 = 1; i_12 < 7; i_12 += 2) 
                {
                    var_29 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_43 [i_6] [i_12 + 1] [i_12] [i_12])) ? (((/* implicit */int) (unsigned short)21241)) : (((/* implicit */int) arr_31 [(signed char)6] [i_12 + 4] [i_12 + 3] [i_12 + 3])))), (((/* implicit */int) (_Bool)1))));
                    var_30 = ((/* implicit */unsigned char) (-(-225588413)));
                    arr_47 [i_11] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)17703)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (var_12) : (((/* implicit */unsigned long long int) arr_18 [i_11] [i_11] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [(signed char)7] [i_6])) > (((/* implicit */int) (signed char)-92))))) : (((((/* implicit */_Bool) 1572496031290144866ULL)) ? (var_13) : (((/* implicit */int) arr_34 [i_11])))))))));
                    arr_48 [i_12 + 2] [i_11] [7] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)10]))) & (((725839864U) << (((((/* implicit */int) arr_5 [i_12])) + (74))))))) | (((/* implicit */unsigned int) arr_26 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 2]))));
                    var_31 *= ((/* implicit */unsigned long long int) arr_0 [i_11]);
                }
                arr_49 [6U] [i_6] [i_11] = ((/* implicit */long long int) (~(min(((+(330814419645930112ULL))), (1572496031290144852ULL)))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1]))) ^ (var_15))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_10 [i_6] [i_13]), (((/* implicit */signed char) var_14)))))) : (((18446744073709551584ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    for (unsigned char i_15 = 2; i_15 < 10; i_15 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) min((min(((-(((/* implicit */int) arr_34 [i_1])))), ((+(2002639231))))), ((+(((/* implicit */int) arr_10 [(signed char)2] [i_15 - 2]))))));
                            arr_60 [i_1] [i_1] [i_1] [(short)0] [(short)10] [(short)0] [i_1] = ((/* implicit */int) min((0LL), (((/* implicit */long long int) min((-225588442), (((/* implicit */int) min(((unsigned short)45223), (((/* implicit */unsigned short) var_14))))))))));
                        }
                    } 
                } 
                arr_61 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_1] [(short)8] [i_1] [i_1] [i_1])) ? (((var_10) << (((((((/* implicit */int) var_0)) + (98))) - (14))))) : (arr_38 [i_1] [i_1] [i_1])))) | (((unsigned long long int) arr_25 [i_13] [i_6] [i_1]))));
            }
        }
        var_34 = ((/* implicit */int) (-(max((max((((/* implicit */unsigned long long int) (unsigned char)16)), (arr_8 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_38 [i_1] [i_1] [i_1])), (arr_55 [i_1] [2U] [i_1] [i_1] [i_1]))))))));
    }
    /* LoopNest 3 */
    for (int i_16 = 1; i_16 < 19; i_16 += 2) 
    {
        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            for (signed char i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_19 = 1; i_19 < 21; i_19 += 4) 
                    {
                        arr_76 [i_16 + 1] [i_16] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) -1781073404))))))) ? (((((/* implicit */_Bool) arr_67 [i_16] [i_18] [i_19 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)103)), (arr_72 [(signed char)3] [i_17] [i_16 + 1] [i_17] [i_16 + 1]))))) : (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_16 - 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_62 [i_16 + 1])))))));
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) var_19))));
                    }
                    for (long long int i_20 = 3; i_20 < 18; i_20 += 2) /* same iter space */
                    {
                        arr_79 [i_16] [i_16] [i_17] [(signed char)16] [i_20] = ((/* implicit */signed char) -2147483636);
                        arr_80 [i_16] [i_16] [i_16] [i_20] [i_20 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) 1781073397)) ? (((/* implicit */int) (short)-21703)) : (((/* implicit */int) (signed char)-60))));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */int) (unsigned short)20301)), (var_6))) <= (((/* implicit */int) (unsigned char)229)))))) < (min((((/* implicit */unsigned long long int) (unsigned short)65529)), ((-(8229025559349684840ULL)))))));
                    }
                    /* vectorizable */
                    for (long long int i_21 = 3; i_21 < 18; i_21 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) + (var_7)))) + ((+(0LL)))));
                        var_38 = ((/* implicit */int) (signed char)91);
                        var_39 = ((/* implicit */signed char) ((1978633568) | (1781073404)));
                        var_40 = ((/* implicit */signed char) ((((((/* implicit */int) arr_77 [i_16 + 1] [i_21 + 3] [i_21] [i_21])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                    }
                    var_41 = max((((((((/* implicit */int) arr_83 [i_16] [i_16 + 2] [i_16 + 1] [i_16 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_83 [(unsigned char)4] [i_16 + 2] [i_17] [i_18])) + (32))))), ((-(((/* implicit */int) arr_83 [i_16] [i_16] [i_16 + 1] [i_16 - 1])))));
                }
            } 
        } 
    } 
}
