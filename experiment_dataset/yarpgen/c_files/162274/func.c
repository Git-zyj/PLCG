/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162274
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
    var_20 = ((/* implicit */unsigned int) var_15);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 2]))) | (var_14))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)-18)), ((short)-32764)))))));
        arr_2 [i_0] = ((/* implicit */long long int) (~(4294967278U)));
    }
    /* LoopSeq 4 */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) (signed char)-18);
        arr_8 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)41317)), (arr_5 [i_1])))) ? (((/* implicit */int) arr_4 [i_1])) : (((int) -2138223938))))), (max((((/* implicit */unsigned int) ((signed char) var_19))), (33U)))));
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_22 ^= ((/* implicit */int) (((_Bool)1) ? (2061018069U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -458209631)), (-6801937485051351781LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_2])), (var_11)))) : (((/* implicit */int) (unsigned short)6126)))))));
        var_23 = ((/* implicit */long long int) min((var_23), (max((((long long int) max((arr_9 [3ULL]), (var_6)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)13381)))) : (((((/* implicit */_Bool) 41U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)78)))))))))));
    }
    for (short i_3 = 2; i_3 < 22; i_3 += 2) 
    {
        arr_14 [24U] = (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_3 + 3]))))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 3) 
            {
                var_24 = ((/* implicit */unsigned long long int) arr_19 [i_3 + 3]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) 3586937150999891449ULL))));
                    arr_23 [i_3] [i_3] [i_3] [i_5] [i_5] [3LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_3]))));
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_15 [i_3] [i_4] [i_5 - 1])));
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_30 [i_3] [i_5] = ((/* implicit */unsigned char) arr_16 [13ULL] [i_4] [i_8]);
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_7] [i_5] [i_3 - 1] [i_3 - 1])) && (((/* implicit */_Bool) var_18))))) - ((-(((/* implicit */int) arr_27 [i_5] [i_5 - 1] [i_5] [i_5] [i_5]))))));
                        arr_31 [i_5] [2U] [i_5] [i_4] [i_5] = ((/* implicit */_Bool) var_16);
                    }
                    arr_32 [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_18 [i_3] [i_7] [i_7] [i_7]);
                }
                for (short i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        arr_37 [i_3 - 1] [i_4] [i_5 - 1] [23ULL] [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_16))) - (var_2))) != (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
                        var_28 = 1945105602U;
                        var_29 = ((/* implicit */short) min(((_Bool)1), (((((/* implicit */int) max((((/* implicit */unsigned short) arr_35 [i_3 - 2] [i_5] [i_3] [i_3 - 1] [(short)6])), ((unsigned short)6126)))) != (((/* implicit */int) (((-2147483647 - 1)) <= (403488983))))))));
                    }
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_4])) ^ (((/* implicit */int) arr_35 [(_Bool)1] [i_4] [i_4] [i_4] [i_3 + 3])))))));
                    var_31 *= ((/* implicit */unsigned char) ((unsigned int) max((4294967278U), (6U))));
                }
                for (short i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                {
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)75)) ^ (((/* implicit */int) (unsigned short)65523))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)251)) != (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) max(((unsigned char)255), ((unsigned char)45))))))), (((unsigned int) ((arr_34 [i_3] [i_5] [i_5]) ? (((/* implicit */int) arr_18 [i_3] [(_Bool)1] [i_5] [i_3])) : (((/* implicit */int) arr_12 [i_3]))))))))));
                    var_33 ^= ((/* implicit */signed char) var_10);
                }
                var_34 = ((/* implicit */unsigned short) var_1);
                var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (~(((/* implicit */int) max(((signed char)127), ((signed char)-75)))))))));
                var_36 += ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_36 [i_3] [i_5 - 1] [i_5] [i_5 - 1] [i_3 + 2] [i_3]), (((/* implicit */unsigned short) (short)511))))) != (((/* implicit */int) var_17))));
            }
            var_37 = ((/* implicit */short) ((unsigned short) (+(arr_21 [i_3] [i_3] [i_3] [i_3]))));
        }
        var_38 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_6))));
        var_39 = ((/* implicit */unsigned short) var_12);
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
    {
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (_Bool)1)) : (261632)));
        var_41 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_0))))));
        arr_43 [(unsigned char)7] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_13 = 2; i_13 < 20; i_13 += 3) /* same iter space */
    {
        arr_46 [(unsigned char)21] [i_13 - 2] = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_13])) >= (((/* implicit */int) ((signed char) ((3835111974U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_13] [i_13] [i_13])))))))));
        arr_47 [i_13] [i_13] = ((/* implicit */unsigned long long int) var_16);
    }
    for (unsigned char i_14 = 2; i_14 < 20; i_14 += 3) /* same iter space */
    {
        arr_50 [i_14] [i_14] = ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 970297536U))))), (arr_4 [(short)14])));
        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) arr_18 [(unsigned short)1] [i_14] [i_14 + 2] [i_14]))));
    }
}
