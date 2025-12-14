/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146256
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
    var_15 = var_9;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)65533));
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32760)), ((unsigned short)65514)))) ? ((~(arr_4 [i_0] [i_1 - 1] [i_1 + 2]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */int) arr_2 [(short)7] [i_0] [i_0])) * (((/* implicit */int) arr_5 [i_1])))) : (((((arr_3 [i_0]) + (2147483647))) >> (((arr_3 [i_0]) + (765077991))))))))));
                        arr_9 [i_0] [i_0] [9LL] [i_3] [(signed char)7] = ((/* implicit */unsigned int) min((arr_5 [i_0]), (((((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2])) != (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [(signed char)7]))))));
                        arr_10 [(_Bool)1] [i_1 - 1] [6LL] [i_3] |= ((/* implicit */short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(unsigned short)10] [(unsigned short)10]))) : (1ULL))))) <= (((((/* implicit */_Bool) arr_6 [1U] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 1] [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_1 + 2] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_2 + 3] [i_1 + 1]))))))))));
                    }
                    for (short i_4 = 1; i_4 < 7; i_4 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */short) arr_0 [i_0]);
                        var_21 = ((((/* implicit */int) ((((/* implicit */_Bool) (~(1121501860331520LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))) : (var_10))))))) >= ((-(((var_6) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_0])))))));
                        var_22 += ((/* implicit */unsigned long long int) min(((-(arr_8 [i_4 + 4] [i_4 + 4] [(unsigned short)6] [i_4 + 4]))), (((/* implicit */unsigned int) ((unsigned short) arr_14 [(signed char)2] [i_4 + 4] [i_4] [(signed char)2] [i_4] [(signed char)2])))));
                    }
                    for (short i_5 = 1; i_5 < 7; i_5 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((short) (unsigned short)65523))))))));
                        arr_18 [i_0] = ((/* implicit */signed char) arr_12 [i_0] [i_0]);
                        var_24 |= ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [4] [4] [i_0] [i_1] [i_2 - 1] [i_2]))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_5))))), (((unsigned int) 9223372036854775806LL))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            var_25 = ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) != (((/* implicit */int) arr_2 [i_0] [i_2 + 1] [(unsigned short)2])));
                            arr_21 [i_0] [i_0] [(signed char)7] [i_5] [i_6] = ((/* implicit */unsigned int) arr_15 [5] [i_5 + 2] [i_5 + 2] [5] [i_1] [i_0]);
                        }
                        for (signed char i_7 = 3; i_7 < 9; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_0])) <= (((/* implicit */int) arr_11 [i_0]))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0])) || (((/* implicit */_Bool) arr_11 [i_0])))))));
                            var_27 += ((/* implicit */int) ((signed char) ((arr_14 [6] [i_5 - 1] [i_5 + 3] [i_5 + 4] [i_1 - 1] [6]) ^ (arr_14 [0U] [i_7 - 2] [i_7 - 2] [i_5 + 2] [i_1 - 1] [0U]))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) min(((~(arr_8 [(unsigned short)4] [i_5 + 2] [(unsigned short)4] [i_5 + 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))))));
                        }
                        for (unsigned short i_8 = 1; i_8 < 9; i_8 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */long long int) (~((~(((((/* implicit */int) (unsigned short)49152)) | (((/* implicit */int) (short)(-32767 - 1)))))))));
                            arr_27 [i_0] [i_1] [i_2] [8LL] [i_8 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(arr_4 [i_0] [i_1] [i_5 + 2])))))) ? ((~(((/* implicit */int) min((((/* implicit */unsigned short) (short)-32766)), (var_14)))))) : (((/* implicit */int) ((_Bool) (short)32767)))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 9; i_9 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned char)0)) : (arr_3 [i_9])))), (((/* implicit */unsigned long long int) ((_Bool) arr_17 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 1]))))))));
                            arr_30 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_2 - 1] [i_1 + 1]))))), (((signed char) arr_15 [i_0] [i_1] [9LL] [i_0] [i_9 - 1] [i_2]))))) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65512)) || (((/* implicit */_Bool) (unsigned short)0))))))));
                            arr_31 [i_0] [i_0] [i_2 - 1] [i_0] [i_0] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) (signed char)-27)))));
                        }
                        var_31 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_25 [i_0] [i_1 - 1] [7LL] [i_2 - 1] [i_5])))));
                    }
                    /* vectorizable */
                    for (short i_10 = 1; i_10 < 7; i_10 += 4) /* same iter space */
                    {
                        arr_34 [10U] [i_0] [i_2 - 1] [i_0] [i_0] = ((/* implicit */short) ((int) arr_22 [i_0] [i_1 - 1] [i_2 + 2] [i_10 - 1] [(unsigned short)3] [(_Bool)1]));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_10 + 1] [i_10] [(short)5] [i_10])) ? (((((/* implicit */int) var_4)) / (arr_3 [i_0]))) : (((((/* implicit */_Bool) arr_29 [i_10] [i_2] [i_2] [(_Bool)1] [7LL])) ? (((/* implicit */int) arr_19 [i_0] [i_0])) : (((/* implicit */int) arr_28 [i_10] [i_2] [i_1] [i_0])))))))));
                    }
                    var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_1] [i_2 + 2] [i_2] [i_2] [i_2] [i_1])))) == (((((/* implicit */_Bool) (unsigned short)12)) ? (((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)243)))) : (((/* implicit */int) (unsigned char)255))))));
                    var_34 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_24 [8LL] [(signed char)2] [i_1 + 1] [i_2 + 2])) ? (((/* implicit */int) arr_24 [i_0] [(_Bool)1] [i_1 + 1] [i_2 + 2])) : (((/* implicit */int) arr_24 [i_1] [(short)4] [i_1 + 1] [i_2 + 2])))) * (((/* implicit */int) arr_2 [i_1] [i_1 + 1] [i_1 + 1]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 1; i_11 < 7; i_11 += 4) 
                    {
                        var_35 = ((/* implicit */long long int) ((short) (_Bool)0));
                        var_36 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(arr_1 [i_0])))), (((signed char) arr_13 [i_1 + 2]))));
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) arr_19 [i_2 + 2] [i_1 + 2]))))))));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((unsigned long long int) (short)-32753)) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_1 + 1] [i_2 + 2] [i_2 + 2] [3ULL] [i_11 - 1] [i_11])) / (((/* implicit */int) arr_26 [i_1 + 2] [i_2] [i_2 - 1] [i_2] [i_11 + 4] [i_11])))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_38 = ((/* implicit */_Bool) ((min((arr_3 [i_1 + 2]), (arr_3 [i_1 + 2]))) ^ (((arr_3 [i_1 + 2]) & (arr_3 [i_1 - 1])))));
                        arr_42 [(unsigned char)2] [2U] |= ((/* implicit */_Bool) (-(min((((/* implicit */int) var_6)), (((((/* implicit */int) arr_40 [i_12])) / (((/* implicit */int) arr_24 [i_0] [(unsigned short)2] [i_2] [i_12]))))))));
                        arr_43 [i_0] = ((/* implicit */short) arr_20 [i_12] [(_Bool)1] [i_1 + 1] [i_1] [i_0]);
                    }
                    var_39 = ((/* implicit */int) ((unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) 2147483647)))));
                }
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_1 + 2] [i_0] [i_1 + 1] [(unsigned short)1] [i_0])) ? (((/* implicit */int) arr_22 [(unsigned short)2] [i_1] [i_1] [i_1 + 1] [i_1] [i_13])) : (((/* implicit */int) arr_26 [i_0] [i_0] [(_Bool)1] [i_1 + 2] [i_13] [i_1 - 1]))))) && (((/* implicit */_Bool) ((arr_12 [i_0] [i_1]) / (((/* implicit */int) arr_26 [i_0] [0LL] [(short)1] [i_1 + 1] [i_13] [i_0]))))))))));
                    arr_47 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (short)32760))))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 1) 
                        {
                            {
                                arr_54 [i_0] [i_1 + 1] [i_1] [(_Bool)1] [2LL] [i_14] [i_0] = ((/* implicit */unsigned char) min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) ((arr_38 [i_15 + 2] [i_1 + 1] [i_0] [i_0]) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_36 [i_0] [i_0] [i_13] [i_0])), (arr_16 [(unsigned short)5] [i_1] [i_13] [(unsigned short)5] [i_15])))))))));
                                var_41 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= ((~((-2147483647 - 1))))));
                            }
                        } 
                    } 
                    arr_55 [i_0] [i_0] = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
                    var_42 += ((/* implicit */short) (((((-(arr_39 [(short)6] [(short)6] [(unsigned short)6] [(short)6]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)20)) << (((arr_50 [9U] [i_1] [i_13] [i_13] [9U]) - (2663545614U)))))) ? (((/* implicit */int) arr_24 [i_0] [(signed char)0] [i_13] [i_13])) : (((/* implicit */int) arr_41 [4] [2] [i_1 + 2] [i_1]))))) : (((((/* implicit */_Bool) (-(0ULL)))) ? (arr_0 [(unsigned short)4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [8LL])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [6ULL])))))))));
                }
                var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65529))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_1 + 2])) : (((/* implicit */int) arr_41 [i_0] [i_0] [i_1 - 1] [i_1 - 1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
    {
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 19; i_18 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_19 = 0; i_19 < 19; i_19 += 1) 
                    {
                        arr_68 [i_16] [17ULL] [i_18] [i_19] [i_19] = ((/* implicit */unsigned short) (-(((arr_59 [i_16 - 1] [(_Bool)1] [i_16 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)24), (((/* implicit */unsigned char) var_5))))))))));
                        var_44 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_62 [(_Bool)1] [i_17 - 1] [i_18])) > (((/* implicit */int) arr_62 [i_16] [i_17 - 1] [i_18])))))));
                        var_45 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_63 [i_17] [i_18] [i_19]))))))));
                    }
                    for (short i_20 = 3; i_20 < 18; i_20 += 1) 
                    {
                        var_46 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_66 [i_16] [i_18] [i_16 - 1] [i_18] [i_20 - 2] [i_17 - 1])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_69 [i_20] [(_Bool)1] [i_18] [i_17] [i_17] [14LL])) > (((/* implicit */int) arr_58 [i_17]))))), (arr_61 [i_16] [i_16] [i_16 - 1])))) : (((/* implicit */int) arr_70 [i_16 - 1] [i_18] [i_20 + 1] [i_20]))));
                        var_47 = ((/* implicit */_Bool) max((var_47), (arr_70 [i_16] [i_17] [i_16] [i_20 + 1])));
                    }
                    arr_72 [i_16] [i_16] [i_17] [i_16] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_62 [i_16] [i_17] [i_18]))))) ^ (((/* implicit */int) arr_70 [16ULL] [i_17 - 1] [16ULL] [i_16 - 1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_17 - 1] [i_16 - 1] [i_16 - 1])) && (((/* implicit */_Bool) arr_59 [i_17 - 1] [i_16 - 1] [i_16 - 1])))))));
                    arr_73 [i_16 - 1] [i_16] [i_18] [i_18] = ((/* implicit */short) (~(((/* implicit */int) min((arr_62 [i_16 - 1] [i_17 - 1] [i_18]), (arr_62 [i_16 - 1] [i_17 - 1] [i_18]))))));
                    var_48 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_16 - 1] [i_17 - 1] [i_16 - 1] [(signed char)4] [i_17 - 1] [i_16 - 1])) ? (min((arr_59 [i_16] [i_16] [(_Bool)1]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_61 [i_16] [0] [i_18])) || ((_Bool)1))))))))));
                }
                var_49 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_61 [i_17 - 1] [i_17 - 1] [i_16 - 1])))))));
            }
        } 
    } 
}
