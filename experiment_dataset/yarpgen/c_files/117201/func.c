/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117201
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (+(var_12))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-3)) ? (1929663286474367912LL) : (var_5)))) < (max((arr_0 [(unsigned short)0] [(unsigned short)0]), (((/* implicit */unsigned long long int) var_9))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_12))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)3])) ? (((arr_0 [i_0] [i_0]) / (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3639104857U))))))))) ? (((/* implicit */unsigned long long int) var_6)) : (max((arr_0 [i_0] [i_0]), (((((/* implicit */_Bool) (unsigned char)94)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
        arr_3 [i_0] [i_0] = (~(((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) | (var_2))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (arr_5 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1]))))))))) ? ((((!(((/* implicit */_Bool) var_12)))) ? ((-(arr_5 [(_Bool)1]))) : (((arr_5 [i_1]) % (((/* implicit */unsigned int) var_10)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */int) arr_4 [(signed char)17] [i_1]);
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (signed char)68))));
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_10 [i_2] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2868379345U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))))))));
        arr_13 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((arr_9 [i_2]) >= (((/* implicit */int) arr_10 [19LL] [i_2]))))), (min((((/* implicit */int) arr_10 [5LL] [17ULL])), (arr_9 [i_2])))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_2] [i_2]))))))) : ((+(((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 2 */
        for (short i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            arr_17 [i_2] [12ULL] &= ((/* implicit */unsigned int) var_10);
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24392))) <= (3604123750696214613LL))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_20 -= ((/* implicit */long long int) (~(((int) (!(((/* implicit */_Bool) var_0)))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)0)) + ((-(((/* implicit */int) (_Bool)1))))));
                        }
                    }
                } 
            } 
            arr_24 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
        }
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) var_5);
            arr_27 [i_2] = ((/* implicit */signed char) arr_18 [i_2] [i_2] [i_2] [(unsigned short)11]);
            arr_28 [i_2] [i_7] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(8251551900693720049ULL)))) ? (((((/* implicit */_Bool) 3743135271U)) ? (((/* implicit */int) (short)2032)) : (((/* implicit */int) (unsigned char)130)))) : (((/* implicit */int) (unsigned short)42374))));
            var_23 = ((((/* implicit */_Bool) arr_15 [i_2])) || (((/* implicit */_Bool) arr_15 [i_2])));
        }
        arr_29 [i_2] = ((/* implicit */unsigned short) var_10);
    }
    for (int i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            for (long long int i_10 = 3; i_10 < 8; i_10 += 2) 
            {
                for (signed char i_11 = 3; i_11 < 7; i_11 += 3) 
                {
                    {
                        var_24 -= ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_15)) ? (arr_30 [i_8] [i_9]) : (((/* implicit */unsigned int) arr_9 [16U])))), (((/* implicit */unsigned int) ((int) arr_34 [i_8] [i_9]))))))));
                        arr_42 [6] [i_9 + 1] [i_9 + 1] [i_11] = ((/* implicit */unsigned char) var_9);
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 1; i_12 < 9; i_12 += 3) 
                        {
                            arr_45 [(short)9] [(short)9] [0U] [i_11] = ((/* implicit */short) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_1)) : (var_6))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)224)) | (((/* implicit */int) (short)-31998)))))));
                            arr_46 [i_11] [4U] [i_10] [8ULL] [i_12] = ((/* implicit */signed char) min(((((-(var_0))) + (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_4 [i_8] [4U])) : (var_0))))), (((/* implicit */int) arr_23 [1] [19LL] [i_10 + 3]))));
                        }
                        for (unsigned short i_13 = 1; i_13 < 7; i_13 += 1) /* same iter space */
                        {
                            arr_49 [(_Bool)0] [i_11] = ((/* implicit */unsigned int) max(((-(arr_38 [i_8] [i_8] [i_10]))), (((((/* implicit */_Bool) arr_38 [(unsigned short)0] [i_9 - 1] [i_10 + 1])) ? (arr_38 [i_8] [i_9 + 1] [i_10 - 1]) : (arr_38 [i_8] [5] [i_10 + 1])))));
                            arr_50 [i_8] [i_9] [i_8] [i_11 - 2] [(unsigned short)8] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (min((627845302), (((/* implicit */int) (unsigned char)46)))) : (arr_44 [i_8] [10] [(unsigned char)4] [i_11] [i_11] [i_8] [i_13 + 2])))), (min(((-(arr_26 [22] [i_9 - 1] [i_10 - 1]))), (((/* implicit */unsigned long long int) ((unsigned char) var_12)))))));
                            arr_51 [i_11] [i_9] [i_10 - 3] [9U] [9U] = ((/* implicit */short) (-(min((((/* implicit */unsigned int) ((short) arr_32 [i_8]))), (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_8])))))))));
                        }
                        for (unsigned short i_14 = 1; i_14 < 7; i_14 += 1) /* same iter space */
                        {
                            arr_55 [i_8] [i_9] [i_10 + 3] [i_11] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned int) arr_38 [i_8] [i_9] [i_10])), (arr_5 [i_8])))))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_11]))) ^ (((var_5) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12095))))))));
                            arr_56 [i_8] [i_8] [i_11] [i_11 - 1] [i_14] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_8] [i_9] [i_10] [i_11] [i_14] [i_9 + 1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_41 [i_8] [i_9 + 1] [i_10 + 2] [6U] [7ULL])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_9] [i_8]))))) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), ((+(1157141474325396275ULL)))))));
                            var_25 = ((/* implicit */unsigned short) var_11);
                            var_26 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))))), ((+(min((10949278066149221505ULL), (((/* implicit */unsigned long long int) 4294967295U))))))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10 - 2] [i_14 + 3] [i_11 + 3])) ? (((/* implicit */int) arr_36 [i_10 + 1])) : (((/* implicit */int) arr_36 [i_10 - 3]))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_40 [i_8] [i_9] [i_8])), (arr_47 [i_8] [i_8] [(unsigned short)9] [i_11] [i_14] [4ULL])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_33 [i_9 + 1] [i_9 + 1]) : (((/* implicit */unsigned int) var_0))))) : (((((/* implicit */_Bool) arr_34 [i_8] [1LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [14U]))) : (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_54 [i_8] [5] [i_10] [(unsigned short)3] [i_10 - 2] [i_11]) <= (arr_54 [i_8] [i_9] [(signed char)1] [i_11] [i_10 + 2] [7ULL]))))))))));
                        }
                        arr_57 [i_8] [i_10] [i_11] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) 4294967295U)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_15 = 3; i_15 < 9; i_15 += 2) 
        {
            arr_61 [i_15] = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((unsigned char) var_0)))))));
            arr_62 [i_8] [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_44 [i_8] [i_15 + 1] [8ULL] [i_15] [i_15] [i_15] [8ULL])) ? (((/* implicit */unsigned long long int) arr_19 [0])) : (arr_0 [(signed char)11] [(signed char)11])))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8] [8ULL] [2LL] [i_15])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (arr_14 [(unsigned char)18] [i_15] [i_15 + 1]) : (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))))));
        }
    }
}
