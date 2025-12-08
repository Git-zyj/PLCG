/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/57
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((18446744073709551596ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) << ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max((arr_3 [i_0] [i_0]), (arr_5 [i_1] [i_1] [i_1] [i_2 + 1]))))) ? ((+(arr_4 [i_2 - 2]))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_4 [i_1])))));
                    arr_8 [i_2] [i_1] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 3854600823U)))) >= ((+(arr_5 [i_2] [i_0] [i_2] [i_2 - 1])))));
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(var_7)))) || (((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_2 - 2] [i_2])))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 - 1])) ? (-1226555687609353182LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 1]))))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17128)))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((18446744073709551609ULL) > (18446744073709551594ULL))))));
        arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_4 [i_0])) == (max((arr_4 [i_0]), (arr_4 [i_0])))));
        arr_13 [i_0] = ((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))) / (var_7));
    }
    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        arr_16 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))));
        arr_17 [i_3] [2LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_3]))) >= (arr_14 [i_3] [i_3]))))))));
        arr_18 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3] [i_3])))))) > ((+(arr_14 [(unsigned char)3] [i_3])))));
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_30 [i_6] [i_6] [i_5] = ((/* implicit */unsigned long long int) 7524866611193270514LL);
                                arr_31 [i_3] [0ULL] [i_5] [i_6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(5246133596389740507LL))))));
                                arr_32 [i_3] [i_4 + 1] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7] [i_4])) ? (arr_27 [i_6] [i_6] [i_6] [i_6] [(_Bool)1] [i_6]) : (((/* implicit */unsigned long long int) 1888336087U))))) && (((/* implicit */_Bool) (-(arr_26 [i_4] [i_4] [9ULL] [(short)12] [i_7] [i_6])))))))));
                                arr_33 [i_7] [i_6] [(_Bool)1] [i_4] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)17110)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_6]))) : (((((/* implicit */_Bool) arr_27 [i_6] [i_4] [i_4] [11ULL] [i_4] [i_4])) ? (arr_21 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -7524866611193270515LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7]))) : (arr_21 [(short)0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) > (var_1)))))))) : (((/* implicit */int) arr_15 [i_3] [i_3]))));
                                arr_34 [i_7] [i_6] [i_5] [i_4] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_3])) ? (arr_25 [(signed char)4] [i_4 - 1] [i_4 - 1] [12ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106))))) - (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_22 [(unsigned char)1])) & (((/* implicit */int) (short)32752)))))))));
                            }
                        } 
                    } 
                    arr_35 [i_3] [i_4 + 1] [i_4 + 1] = ((((((/* implicit */_Bool) arr_29 [i_5] [i_3] [i_4 - 1] [i_3])) ? (arr_29 [i_5] [i_5] [i_5] [i_5]) : (arr_29 [i_3] [i_3] [i_3] [i_3]))) - ((-(arr_29 [i_3] [i_5] [i_5] [i_5]))));
                    arr_36 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [(short)3] [(signed char)5]))))) <= (((unsigned long long int) (-(((/* implicit */int) arr_15 [i_3] [i_3])))))));
                    arr_37 [i_3] [i_4] [i_5] [i_5] = ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_28 [i_4]))))))) ? (((unsigned long long int) arr_20 [i_4 + 1] [i_4 - 1] [i_4 - 1])) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [(signed char)1] [i_4 + 1] [i_4 + 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_11 = 3; i_11 < 11; i_11 += 4) 
                        {
                            arr_50 [i_10] [i_10] [2ULL] [i_9] [i_3] [i_10] = ((/* implicit */short) ((unsigned char) var_15));
                            arr_51 [i_3] [i_3] [i_9] [i_9] = ((/* implicit */unsigned char) ((244925385U) + (((/* implicit */unsigned int) (~(((/* implicit */int) (short)1892)))))));
                            arr_52 [i_3] [i_3] [i_3] [i_9] [i_10] [i_3] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) arr_44 [i_11 - 3] [i_11 - 3] [i_11 + 1] [i_11])))));
                        }
                        for (signed char i_12 = 1; i_12 < 11; i_12 += 3) /* same iter space */
                        {
                            arr_57 [i_3] [i_3] [i_3] [i_9] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)12))))) : (arr_56 [i_3] [i_9] [i_9] [i_12 + 1] [i_12 + 1]))))));
                            arr_58 [i_12] [i_12 - 1] [i_3] [i_3] [i_9] [i_12] = ((unsigned int) (+(arr_48 [i_12 + 2] [i_10] [i_12] [i_12] [i_12 + 1])));
                        }
                        for (signed char i_13 = 1; i_13 < 11; i_13 += 3) /* same iter space */
                        {
                            arr_63 [i_3] [i_3] [i_3] [i_10] [i_9] = ((/* implicit */int) arr_46 [i_3]);
                            arr_64 [i_9] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(15112526606305023828ULL)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_45 [i_13 - 1] [i_13 - 1] [i_13 + 1]))))) : (max((((arr_46 [i_13]) ? (3610857995U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))))), (((/* implicit */unsigned int) arr_46 [(signed char)9]))))));
                        }
                        for (signed char i_14 = 1; i_14 < 11; i_14 += 3) /* same iter space */
                        {
                            arr_67 [i_9] [10ULL] [i_8] [i_9] [i_10] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_27 [i_14] [11ULL] [i_14 + 1] [i_14 + 1] [i_14] [i_14])))) ? (max((arr_27 [i_14 + 2] [i_14] [i_14] [i_14 + 1] [i_14 - 1] [i_14]), (arr_27 [i_14] [(signed char)8] [(signed char)8] [i_14 - 1] [i_14 + 1] [i_14 - 1]))) : (((((/* implicit */_Bool) arr_27 [i_14] [i_14 + 1] [i_14] [i_14 + 2] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_27 [7LL] [i_14] [i_14] [i_14 + 1] [i_14 + 1] [0ULL])))));
                            arr_68 [i_14] [i_14 + 2] [i_14] [i_9] = ((/* implicit */signed char) arr_48 [i_3] [i_9] [(_Bool)1] [i_10] [i_10]);
                            arr_69 [i_3] [i_3] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? ((+(((/* implicit */int) arr_15 [i_14 - 1] [i_14 + 2])))) : ((-(arr_61 [i_3] [i_8] [i_8] [i_10] [i_9])))));
                        }
                        arr_70 [i_9] [i_3] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_3] [i_8])))))))));
                        arr_71 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_40 [i_3] [i_3] [i_3]))))), ((~(-8307328190657789148LL)))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (unsigned char)34))))))));
                        arr_72 [i_3] [i_9] [i_3] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (short)-20491)))) <= (((/* implicit */int) (unsigned char)60))));
                        arr_73 [i_9] = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) -3563169256100139517LL)))));
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) ((unsigned char) (-(((unsigned int) var_14)))));
}
