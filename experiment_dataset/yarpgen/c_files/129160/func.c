/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129160
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [(_Bool)0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) % (var_2)));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] &= ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)102)))))) & (8860497734097565652ULL))) <= (((unsigned long long int) (signed char)-38)));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 9; i_3 += 3) 
            {
                {
                    arr_17 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_1] [(unsigned short)4] [i_3 + 1] [i_2 - 1])))))));
                    arr_18 [i_1] [i_1] [(unsigned char)2] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [9])) && (((/* implicit */_Bool) (unsigned short)42801)))))) != ((+((-9223372036854775807LL - 1LL)))))) ? (((/* implicit */unsigned long long int) ((((_Bool) arr_11 [i_1] [i_1] [i_3 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [5ULL] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) 8860497734097565652ULL))))) : ((-(var_16)))))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [3]))) - (var_15)))))));
                    arr_19 [i_1] [i_1] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_14 [i_2 - 1] [i_3 + 3] [i_3 - 2])), (arr_13 [i_1] [i_2] [i_3]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1] [8ULL]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        arr_23 [i_1] [(short)11] [(_Bool)1] [i_4] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_1] [i_1])) ? (arr_20 [i_1] [i_4]) : (0ULL))));
                        arr_24 [0LL] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_5)) - (((/* implicit */int) arr_12 [i_2])))) >= (((/* implicit */int) arr_16 [i_4] [i_3 + 1] [i_4] [i_4])))) ? ((+(((/* implicit */int) (unsigned char)212)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) -985948360)))))))));
                        arr_25 [(unsigned char)10] [i_2] [i_3 + 2] [(unsigned char)10] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((465525779) << (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_1] [i_2 - 1] [i_4])) ^ (((/* implicit */int) var_5))))) : (arr_20 [9LL] [i_4])));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        arr_30 [i_1] [i_2] [i_3 + 1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_5] [i_2 - 1] [i_3] [i_2 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_21 [i_1] [i_1] [i_1] [i_1])))) : ((+(var_6)))));
                        arr_31 [i_1] [i_2] [i_2] [i_3] [i_3] [i_5] = ((((/* implicit */int) arr_27 [i_3 + 1] [i_3 + 3] [i_2 - 1] [i_2 - 1])) <= (((/* implicit */int) arr_27 [i_2 - 1] [i_3 + 1] [i_2 - 1] [i_2 - 1])));
                        arr_32 [i_5] [i_5] [i_3] [i_2] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_3 [i_1])))) ? (((((/* implicit */_Bool) (unsigned short)37295)) ? (2469459787348081602ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_1] [i_2 - 1] [i_2 - 1] [i_5])) < (((/* implicit */int) arr_14 [i_1] [i_1] [i_3]))))))));
                        arr_33 [i_1] [i_2 - 1] = ((/* implicit */_Bool) ((unsigned short) arr_21 [i_1] [i_2 - 1] [i_1] [i_3 + 1]));
                    }
                    arr_34 [i_1] [i_1] [(_Bool)1] = ((((/* implicit */_Bool) (-((+(arr_28 [i_1] [i_3])))))) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_7 [i_1] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_1] [10])) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2048))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                for (unsigned char i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 3; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            arr_43 [i_1] [(_Bool)1] [(_Bool)1] [i_8] [i_9] = ((/* implicit */long long int) (((~(((unsigned long long int) var_6)))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_1] [i_9 - 3] [i_8 - 1] [5U])))))));
                            arr_44 [i_1] [i_6] [i_6] [i_6] [i_6] [i_9] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((_Bool) arr_26 [i_7] [i_7] [i_8 - 1] [i_7] [i_7])) ? (((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) arr_26 [i_7] [5] [i_8 - 1] [i_8 - 1] [i_7])) : (((/* implicit */int) arr_26 [i_6] [i_8] [i_8 - 1] [i_9] [i_9 - 2])))) : (((/* implicit */int) arr_26 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_9 + 1] [i_9 - 1]))));
                        }
                        for (long long int i_10 = 3; i_10 < 10; i_10 += 1) /* same iter space */
                        {
                            arr_49 [i_8] [i_6] [6U] [i_8] [i_10] = -1731096598;
                            arr_50 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(9ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_48 [i_8] [i_6] [i_10 + 2]))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) != (arr_47 [i_1] [i_6] [(unsigned char)8] [i_7] [i_1] [i_10] [(unsigned char)5]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -4315855514528396474LL)) ? (((/* implicit */int) (short)16030)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (-1644543491431066195LL)))))));
                            arr_51 [i_6] [i_6] [i_7] [i_8] [i_6] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_1])))) ? ((~(((/* implicit */int) var_5)))) : ((~(((/* implicit */int) (short)-2765))))))), (arr_13 [i_10 - 2] [i_10 - 1] [i_10])));
                            arr_52 [i_8] [i_8] [i_7] [i_6] [i_8] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) ((unsigned char) arr_9 [i_10]))) - (((/* implicit */int) ((short) arr_37 [i_1] [i_1] [i_1] [(unsigned short)3]))))));
                        }
                        arr_53 [i_8] [i_6] [i_6] [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((1644543491431066186LL) + (((/* implicit */long long int) -202335863)))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_1] [i_1])))))))) && (((/* implicit */_Bool) (+(((int) (signed char)-1)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
    {
        arr_58 [i_11] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_54 [i_11])) ? (max((((/* implicit */long long int) arr_12 [(unsigned short)0])), (arr_35 [i_11]))) : (((/* implicit */long long int) var_16)))), (((((/* implicit */_Bool) ((int) arr_6 [(_Bool)1] [(signed char)5]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [0LL] [0LL] [i_11]))) : (((((/* implicit */_Bool) arr_9 [i_11])) ? (var_7) : (((/* implicit */long long int) var_16))))))));
        arr_59 [i_11] = (!(((/* implicit */_Bool) (+(((/* implicit */int) max((arr_2 [i_11]), (((/* implicit */unsigned short) var_0)))))))));
        arr_60 [i_11] [i_11] = ((/* implicit */int) (-(min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_11] [i_11]))) : (var_15))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_57 [i_11])), (arr_27 [i_11] [i_11] [i_11] [i_11]))))))));
        arr_61 [(signed char)0] = ((/* implicit */long long int) arr_21 [2] [(_Bool)1] [i_11] [1]);
    }
    var_18 = ((/* implicit */_Bool) (-((~(((/* implicit */int) ((713946112U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
    var_19 = ((/* implicit */unsigned long long int) (~((+((-(((/* implicit */int) (unsigned short)4078))))))));
}
