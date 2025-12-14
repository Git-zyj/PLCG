/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140405
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned char) var_7);
            var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) var_2)))), (((((/* implicit */unsigned long long int) ((((-5541514899149202058LL) + (9223372036854775807LL))) << (((var_11) - (1688693241)))))) - (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(unsigned char)7])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_4 [i_0] [i_0] [(short)3])))))));
        }
        for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) /* same iter space */
        {
            arr_7 [(unsigned short)2] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_2 - 2]);
            var_19 = ((/* implicit */unsigned int) ((min((3628883759U), (((/* implicit */unsigned int) arr_3 [i_2 + 2])))) < (((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_2 - 1]), (arr_3 [i_2 + 1])))))));
        }
        var_20 = ((/* implicit */signed char) max(((~(arr_6 [i_0] [(unsigned char)9] [i_0]))), (((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned char)182), (((/* implicit */unsigned char) (_Bool)1))))))))));
        var_21 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_1 [6ULL])), (((((/* implicit */_Bool) (unsigned char)182)) ? (((unsigned long long int) arr_3 [(unsigned char)6])) : (arr_2 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (signed char i_4 = 4; i_4 < 9; i_4 += 4) 
            {
                for (signed char i_5 = 1; i_5 < 7; i_5 += 2) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((arr_6 [i_0] [2ULL] [i_0]) ^ (((/* implicit */long long int) arr_5 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15500550222398075296ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (3934150780U))) : (min((((/* implicit */unsigned int) (unsigned char)70)), (12U)))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_5 + 1] [i_5 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5 + 2] [i_5 + 2] [i_0]))) : (arr_4 [i_0] [i_5 + 1] [i_5 - 1])))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_23 = ((((/* implicit */int) arr_16 [6U] [i_4 - 2] [i_4 - 3] [i_5 + 2])) * (((/* implicit */int) ((short) arr_16 [i_3] [i_3] [i_4 + 1] [i_5 - 1]))));
                            arr_19 [(short)2] [(short)2] [7] [i_5 - 1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) 0))), (((((((/* implicit */_Bool) arr_15 [9U] [i_3] [i_0] [i_5 + 1] [i_6])) ? (arr_13 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [(unsigned char)1] [i_0] [i_5 + 1] [i_6]))))) + (((/* implicit */unsigned int) arr_1 [i_0]))))));
                        }
                        arr_20 [i_0] [i_3] [i_3] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) arr_14 [i_5 + 1] [i_5 + 1] [i_0] [i_0] [i_5 + 3])) ? (arr_14 [i_5 + 1] [i_5 + 1] [i_0] [i_5 + 2] [i_5]) : (arr_14 [i_5 + 1] [i_5 + 1] [i_0] [i_5] [i_5 - 1]))));
                        var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned char) ((0LL) < (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_3] [i_4 - 4] [8U])))))), ((unsigned char)182))))));
                        var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max(((short)4869), (((/* implicit */short) arr_11 [i_5 + 2] [i_5 + 1] [i_5] [i_5 + 1]))))), (max((arr_4 [i_0] [i_5 + 2] [i_5]), (((/* implicit */unsigned long long int) arr_10 [i_4 - 4] [i_0] [i_4 + 1]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            arr_32 [i_7] [i_7] [4LL] [i_10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_1 [i_7])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_23 [i_7])))))) : (((unsigned long long int) ((_Bool) var_8)))));
                            arr_33 [i_7] [i_7] [(short)0] [i_10] [i_11] = (i_7 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_10 [i_7] [i_7] [i_10])))) << (((((/* implicit */int) ((short) arr_10 [i_9] [i_7] [i_11]))) - (11602)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_10 [i_7] [i_7] [i_10])))) << (((((((/* implicit */int) ((short) arr_10 [i_9] [i_7] [i_11]))) - (11602))) - (20338))))));
                        }
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_15 [i_7] [i_7] [i_7] [(_Bool)1] [i_7])))) <= (var_8)))) < ((-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (var_3))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_12 = 1; i_12 < 9; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    {
                        arr_43 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 1]))) : (var_2)))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) arr_11 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 - 1]))))));
                        var_27 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((arr_37 [i_7] [i_12 + 1] [i_13] [5LL]) + (8609730725686622178LL)))))), ((+(5ULL))))), (((/* implicit */unsigned long long int) arr_1 [i_7]))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        arr_44 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) arr_28 [i_7])) / (var_2)))))) && (((/* implicit */_Bool) ((unsigned long long int) ((18446744073709551615ULL) * (6726246987787648840ULL)))))));
    }
    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_16 = 4; i_16 < 8; i_16 += 1) 
        {
            for (short i_17 = 3; i_17 < 8; i_17 += 1) 
            {
                {
                    arr_53 [i_17] = ((/* implicit */long long int) ((int) arr_47 [6] [6] [i_17]));
                    var_29 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_23 [i_17])) : (((/* implicit */int) (unsigned short)41516))))))));
                    arr_54 [i_15] [i_15] [i_17] [5ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_47 [i_16] [i_16 - 4] [i_16 + 1])), (var_1))))));
                    arr_55 [i_15] [i_17] = ((/* implicit */signed char) arr_26 [i_15] [i_16 - 1] [i_17 + 1] [i_17 - 2]);
                }
            } 
        } 
        arr_56 [(unsigned char)1] = ((/* implicit */long long int) arr_41 [(signed char)8] [i_15]);
        var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) 11720497085921902775ULL))) | (max((((/* implicit */unsigned int) var_14)), (arr_5 [(_Bool)0])))))), (30ULL)));
        var_31 = ((((((/* implicit */int) ((short) var_6))) + (2147483647))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (17))));
    }
    for (short i_18 = 1; i_18 < 11; i_18 += 1) 
    {
        arr_59 [i_18 + 1] = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_18 + 3]))))), (((((/* implicit */_Bool) arr_58 [i_18 + 3])) ? (((/* implicit */int) arr_57 [i_18 + 3] [i_18 + 4])) : (((/* implicit */int) arr_58 [i_18 + 3])))));
        arr_60 [i_18] [14LL] = ((/* implicit */short) (+(1)));
    }
    /* LoopNest 2 */
    for (unsigned char i_19 = 1; i_19 < 14; i_19 += 1) 
    {
        for (unsigned char i_20 = 0; i_20 < 15; i_20 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_21 = 0; i_21 < 15; i_21 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_22 = 1; i_22 < 11; i_22 += 2) 
                    {
                        for (unsigned long long int i_23 = 1; i_23 < 13; i_23 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */short) arr_69 [i_19 - 1] [(unsigned short)7] [i_21] [3]);
                                var_33 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_57 [i_19 + 1] [i_22 + 2])) & (((/* implicit */int) arr_57 [i_19 + 1] [i_22 + 1])))) >> (((/* implicit */int) arr_57 [i_19 + 1] [i_22 - 1]))));
                                var_34 -= ((/* implicit */unsigned char) ((short) min((((/* implicit */int) ((unsigned short) 18446744073709551612ULL))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_57 [i_20] [8U])) : (((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_20] [i_21])) ? (arr_68 [i_19] [i_19] [i_19] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_21])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_72 [i_19 + 1] [(unsigned char)13]))))))), (var_6))))));
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (((+(arr_67 [i_19 - 1] [i_20] [i_21]))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (17701483643006745878ULL)))))))) : (min(((~(arr_72 [i_19] [i_21]))), (((/* implicit */unsigned long long int) arr_64 [3U] [i_20] [i_21]))))));
                }
                arr_73 [i_19 + 1] [i_19 + 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_64 [i_19 + 1] [i_19 - 1] [i_19 + 1])) && (((/* implicit */_Bool) min((arr_65 [i_19]), (((/* implicit */unsigned int) (signed char)-28))))))) ? (((((((/* implicit */int) (signed char)-7)) + (2147483647))) << (((arr_72 [i_19 + 1] [i_19 + 1]) - (7318142618339557678ULL))))) : (((/* implicit */int) arr_58 [i_19]))));
                var_37 = ((/* implicit */signed char) min(((~(((/* implicit */int) max((var_9), (((/* implicit */short) var_15))))))), (((/* implicit */int) ((min((((/* implicit */int) arr_70 [i_19 - 1] [i_19 + 1] [i_19] [i_19 - 1])), (var_11))) <= (((/* implicit */int) ((unsigned short) arr_57 [i_19] [(unsigned char)11]))))))));
            }
        } 
    } 
}
