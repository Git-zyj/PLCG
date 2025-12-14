/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128547
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) min((((arr_2 [i_0]) << ((((((_Bool)1) ? (arr_1 [i_0] [(unsigned short)21]) : (((/* implicit */long long int) -483765596)))) + (1211887082475443474LL))))), (min((max((((/* implicit */unsigned long long int) arr_5 [i_0])), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) max((arr_0 [(unsigned short)2]), (arr_3 [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_0] [i_3] [i_0] [i_1] [i_0] |= ((/* implicit */unsigned short) min((((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1] [i_0])), (((((/* implicit */int) var_5)) << (((min((arr_9 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_4])))) - (138ULL)))))));
                                arr_14 [i_0] [i_3] [i_2] [(unsigned short)8] [i_4] = ((/* implicit */long long int) min(((unsigned char)89), (((/* implicit */unsigned char) arr_0 [i_0]))));
                                arr_15 [i_0] [i_3] [i_0] = ((/* implicit */long long int) arr_2 [i_2]);
                                var_21 += ((/* implicit */short) ((((/* implicit */_Bool) max((arr_8 [i_0] [(short)8] [i_2]), (arr_8 [i_0] [i_0] [i_0])))) ? (max((8LL), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((8LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_11 [(short)13])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_0 [i_5]))))))))))));
        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_5] [i_5])) >> (((((/* implicit */int) arr_4 [i_5] [i_5])) - (31)))))) ? (min((((((/* implicit */_Bool) arr_3 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_5] [i_5])))))) : (min((((/* implicit */unsigned long long int) min((var_3), (var_4)))), ((~(arr_7 [i_5] [i_5])))))));
    }
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        var_24 = ((/* implicit */short) min((var_1), (((/* implicit */int) var_16))));
        arr_20 [i_6] = ((/* implicit */short) max((0), (max((((/* implicit */int) var_2)), (min((((/* implicit */int) var_4)), (var_1)))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_22 [i_7])), (-4624702515585172822LL)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) var_4)) - (35727)))))) : (arr_7 [3LL] [i_7]))) >= (((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((var_17) - (17802339974619874406ULL)))))));
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            var_25 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((arr_12 [i_7] [9ULL] [i_7] [i_7] [i_7] [i_8] [(short)12]) >> (((/* implicit */int) (unsigned char)25))))) && (((/* implicit */_Bool) arr_5 [i_7])))))));
            arr_29 [i_7] [i_7] = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_0 [(short)20])))), (((/* implicit */int) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_10 [i_7] [i_7] [i_8] [i_8] [i_8])), ((unsigned char)27)))), (var_18))))));
        }
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) % (arr_9 [i_7] [i_7] [i_7] [i_7]))), (((/* implicit */unsigned long long int) (unsigned short)41349)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) var_2))))))))))));
        var_27 = ((/* implicit */_Bool) var_3);
        var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 401941559U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_19)))), (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_18 [i_7])))));
    }
    var_29 = ((/* implicit */int) -4624702515585172822LL);
    var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)110)) << (((((/* implicit */int) var_0)) - (115)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (15ULL)))))));
    /* LoopSeq 1 */
    for (short i_9 = 1; i_9 < 11; i_9 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (unsigned int i_12 = 3; i_12 < 10; i_12 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_13 = 4; i_13 < 12; i_13 += 1) 
                        {
                            arr_42 [i_11] [i_11] [i_11] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31864)) && (min((((((/* implicit */_Bool) -9LL)) && (((/* implicit */_Bool) arr_8 [i_11] [i_10] [i_10])))), (((((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_9] [i_13])) != (((/* implicit */int) var_0))))))));
                            arr_43 [i_10] [i_10] [i_12] [i_10] [i_13] = (((-(((/* implicit */int) (short)6271)))) != (max((((/* implicit */int) arr_27 [i_12 - 2])), (((((/* implicit */int) var_2)) % (((/* implicit */int) var_4)))))));
                            arr_44 [i_9] [i_9] [(unsigned char)12] [i_11] [i_12] [i_13] = ((/* implicit */long long int) var_10);
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) max((arr_23 [(unsigned char)3] [i_11]), (((/* implicit */unsigned char) (_Bool)1)))))))) ? (((((/* implicit */_Bool) max((arr_22 [i_9]), (((/* implicit */unsigned int) arr_11 [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */short) var_15)))))) : ((-(-388967204113716065LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_11] [0LL] [i_11]))))))));
                            var_32 *= ((/* implicit */unsigned long long int) ((max((((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_28 [3ULL] [i_14]))))), ((-(((/* implicit */int) var_5)))))) % (((/* implicit */int) ((((/* implicit */int) min((arr_38 [i_14] [i_11] [i_10]), (((/* implicit */unsigned char) var_0))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_2))))))))));
                            arr_48 [i_9] [i_12] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_31 [i_9 + 2] [i_9 + 1])))) && (((/* implicit */_Bool) var_10))));
                        }
                        for (long long int i_15 = 4; i_15 < 10; i_15 += 1) /* same iter space */
                        {
                            var_33 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)237)))), (((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_15)) - (64)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-1))))), (max((((/* implicit */unsigned long long int) var_15)), (arr_49 [i_9 + 1])))))));
                            var_34 = ((/* implicit */_Bool) 18446744073709551615ULL);
                            arr_51 [i_15] [i_10] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((min((arr_35 [i_9] [i_10] [i_11] [(unsigned short)4]), (((/* implicit */int) arr_50 [i_9 + 2] [i_10] [(_Bool)0] [i_15])))) == (((/* implicit */int) arr_28 [i_9] [i_9]))))) <= (max((((/* implicit */int) (unsigned char)248)), (((((/* implicit */_Bool) arr_46 [i_9 + 1] [i_10] [i_11] [i_12] [i_15] [i_11] [i_9])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12))))))));
                            arr_52 [i_15] = (signed char)53;
                        }
                        /* vectorizable */
                        for (long long int i_16 = 4; i_16 < 10; i_16 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                            arr_55 [i_16] [i_10] [i_10] [i_11] [i_12 + 1] [i_16 + 3] = ((/* implicit */short) ((((((/* implicit */int) arr_50 [i_9] [8LL] [i_11] [i_16])) & (((/* implicit */int) var_8)))) >> ((((+(((/* implicit */int) (unsigned char)120)))) - (103)))));
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || ((_Bool)1)));
                            arr_56 [(unsigned short)11] [i_10] [i_11] [i_16] = (~(((((/* implicit */_Bool) -251499911)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_7 [i_9] [i_10]))));
                        }
                        var_37 = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_9] [i_12]))))), ((~(max((((/* implicit */unsigned long long int) arr_54 [i_9] [i_9 - 1] [i_11] [i_11] [i_12])), (var_17))))));
                        var_38 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_9 + 2] [i_12 - 1] [i_11])) ? (min((min((var_1), (var_1))), (((/* implicit */int) max((var_9), (((/* implicit */short) arr_21 [i_9] [(signed char)0]))))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)49)) || (((/* implicit */_Bool) (unsigned short)41364)))))))));
                        /* LoopSeq 2 */
                        for (signed char i_17 = 0; i_17 < 13; i_17 += 1) 
                        {
                            var_39 = (_Bool)1;
                            var_40 = ((/* implicit */unsigned char) ((signed char) min((((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_9]))) : (var_14))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_26 [i_9] [i_10]))))))));
                            var_41 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [(unsigned char)8])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)53))))) ? ((~(((/* implicit */int) (unsigned char)18)))) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) arr_47 [i_9 + 2] [(unsigned char)0] [(signed char)11])) ? (((/* implicit */int) arr_47 [i_9] [i_9] [i_9])) : (((/* implicit */int) (unsigned short)24186)))) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_4))))) ? (min((var_1), (((/* implicit */int) var_5)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)5)), (var_11))))))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 13; i_18 += 3) 
                        {
                            arr_65 [i_9] [i_10] [(unsigned char)5] [(unsigned char)5] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_64 [11] [i_10] [(short)9] [i_10] [i_10]))) : (((arr_45 [i_11] [i_11] [(signed char)10]) >> (((((/* implicit */int) (unsigned short)38170)) - (38150)))))))) ? (((((((((/* implicit */int) var_13)) % (((/* implicit */int) var_3)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_27 [i_18])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2)))) - (94))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_18))))), ((-(((/* implicit */int) arr_36 [i_10] [i_12] [i_18]))))))));
                            var_42 &= ((/* implicit */signed char) var_19);
                        }
                    }
                } 
            } 
        } 
        arr_66 [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (var_1)))) || (((/* implicit */_Bool) min((7LL), (((/* implicit */long long int) 50331648U))))))) ? (((/* implicit */int) max((max(((unsigned short)2047), (((/* implicit */unsigned short) var_2)))), (var_18)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_4))))));
        arr_67 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_41 [i_9] [(short)8] [i_9] [i_9] [i_9 + 2])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_9]))))))) ? (min((((/* implicit */unsigned long long int) (~(var_1)))), (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)19)))));
        var_43 *= ((/* implicit */unsigned char) var_6);
    }
}
