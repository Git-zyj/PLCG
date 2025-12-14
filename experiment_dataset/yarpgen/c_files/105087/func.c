/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105087
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
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((arr_1 [i_0 + 2]) ? (((/* implicit */unsigned long long int) 140737488355327LL)) : (arr_0 [i_0 - 1]))) : (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) var_2)) : (var_5))) : (arr_0 [i_0 + 2])))));
        var_14 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3454541871U)) ? (arr_0 [(short)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_1 [i_0 + 2])), (((long long int) 3454541871U)))), (((/* implicit */long long int) arr_1 [i_0 + 1]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0 - 1] [i_3 - 3])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 + 2] [i_1] [i_0 - 1])))) >= (((/* implicit */int) ((_Bool) arr_11 [i_0] [5U] [i_0 - 1] [i_3 - 3])))));
                        arr_13 [i_1] [10ULL] [i_1] [i_1] [i_1] = ((((unsigned int) ((unsigned int) (signed char)-34))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_3 + 2])) >= (((/* implicit */int) arr_4 [i_1])))))))));
                        var_16 |= ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [8ULL]))) : (arr_12 [(_Bool)1] [14U] [14U] [i_0])))) & (((unsigned long long int) arr_6 [i_0] [(short)20] [(_Bool)1]))))));
                        arr_14 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1]);
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_10 [i_1] [i_1] [i_2] [i_1] [i_0 + 2]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_6 [i_1] [i_2] [i_1])))) : (((arr_5 [i_3]) + (3454541884U)))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_2] [i_1])) == (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])))))));
                    }
                    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_1])), (7712210640895806723ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_4])), ((~(((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_4])))))))));
                        var_18 = ((/* implicit */unsigned int) 2227009878152796033ULL);
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) (~(((long long int) arr_7 [i_1] [i_2] [i_4] [i_5]))));
                            arr_22 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)-41);
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (((+(arr_19 [i_4] [i_1] [i_1] [i_1] [i_4]))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 + 2]))))))))));
                            arr_25 [i_0 - 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) 8227103962904956846LL)) ? (((/* implicit */unsigned long long int) 8619940208578665764LL)) : (arr_20 [i_0] [i_0] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28672)) ? (arr_23 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) ((arr_19 [i_4] [i_1] [i_1] [i_1] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4])))))) ? ((-(((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 + 2] [i_1] [i_2] [i_4] [i_7]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4])))))));
                            arr_28 [i_0] [i_0] [i_0] [i_2] [i_1] [i_7] [i_7] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_7])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)167)))) >> ((((+(8619940208578665786LL))) - (8619940208578665773LL))))), (((((/* implicit */_Bool) ((int) arr_8 [i_0] [i_0]))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 2] [i_1] [i_2])) : ((-(((/* implicit */int) arr_18 [i_7] [i_1] [i_1] [i_0]))))))));
                            var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0 + 1]))));
                            arr_29 [i_1] [i_1] [i_2] [i_2] [i_7] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_7] [i_1] [i_2] [i_1] [i_0 + 2])) >> (((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_2] [i_4] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_4] [i_0 + 1])))) - (169)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_7] [i_1] [i_2] [i_1] [i_0 + 2])) >> (((((((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_2] [i_4] [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_4] [i_0 + 1])))) - (169))) + (100))))));
                            arr_30 [i_1] [i_1] [(signed char)20] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_1] [i_1] [i_2] [i_4] [i_7]))))));
                        }
                        arr_31 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) arr_10 [i_0 + 2] [i_1] [i_2] [i_1] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_4] [i_0] [i_0 - 1] [i_0] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_20 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 + 2] [i_1] [i_2] [i_4]))))))) & (((((((/* implicit */_Bool) 2191407158U)) ? (var_8) : (arr_0 [i_0]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    }
                    var_22 = ((var_0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) (unsigned short)5208))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2]))) : (arr_5 [i_0 - 1])))) : ((+((~(13585579198444274073ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 1; i_8 < 21; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) max((((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)81)))))), ((-(((/* implicit */int) arr_1 [i_0 - 1]))))));
                        arr_34 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_0 + 1] [i_0 + 2]))))) ? (((((/* implicit */_Bool) arr_24 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_24 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_24 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_0 - 1] [i_0 + 2])))) : (((/* implicit */int) ((short) arr_24 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_0 - 1] [i_0 - 1])))));
                    }
                    var_24 = ((/* implicit */unsigned int) ((arr_0 [i_0 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_1]), (var_4)))))));
                }
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) min((var_6), (arr_33 [i_9])))))));
        arr_39 [i_9] [i_9] = ((unsigned char) (-((~(((/* implicit */int) var_7))))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        for (long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            {
                                arr_51 [i_9] [i_12] [i_11] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_10 [i_13] [i_12] [i_10] [i_12] [i_9])) | (((/* implicit */int) arr_38 [i_9] [i_10])))))) ? (((((_Bool) arr_44 [i_9])) ? (max((((/* implicit */unsigned int) arr_44 [i_10])), (arr_12 [i_9] [i_9] [i_12] [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9] [i_9]))))) : (((((/* implicit */_Bool) arr_35 [i_11])) ? (((unsigned int) arr_32 [i_10])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_10] [i_11] [i_12])))))));
                                var_26 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_13] [i_11] [i_10] [i_9]))), (((((/* implicit */_Bool) arr_9 [(short)15] [i_11] [i_10] [i_9])) ? (arr_9 [i_9] [i_10] [i_11] [i_12]) : (arr_9 [i_10] [21U] [i_10] [i_9])))));
                                arr_52 [i_12] [i_12] = ((/* implicit */long long int) ((arr_5 [i_9]) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_9])))))));
                                var_27 ^= ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) var_4)));
                                arr_53 [i_9] [i_12] [i_11] = ((short) (~(((/* implicit */int) arr_15 [i_9] [i_11] [i_12] [i_13]))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) (-(((arr_5 [i_10]) & (arr_5 [i_10])))));
                    var_29 = ((/* implicit */unsigned int) arr_1 [i_10]);
                }
            } 
        } 
    }
    var_30 = ((/* implicit */_Bool) (~(max((((unsigned long long int) var_5)), (((var_12) >> (((/* implicit */int) (_Bool)1))))))));
    var_31 = ((/* implicit */unsigned short) var_5);
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_12)))) ? (min((((/* implicit */long long int) var_10)), (7204897614421268107LL))) : (((/* implicit */long long int) var_2))))) ? (var_5) : (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_0)))))))));
    var_33 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_2)) : (var_12)))) ? (var_5) : (((/* implicit */unsigned long long int) ((int) var_5)))))));
}
