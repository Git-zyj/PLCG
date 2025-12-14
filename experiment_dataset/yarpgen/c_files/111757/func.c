/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111757
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] = ((signed char) (short)(-32767 - 1));
            var_12 = ((/* implicit */unsigned char) min(((short)-6910), (((/* implicit */short) ((((/* implicit */long long int) 4294967295U)) != (arr_5 [i_1] [i_1] [i_1 - 1]))))));
            var_13 = max((((/* implicit */long long int) ((3569505026U) >> (((2147483623) - (2147483621)))))), (((((/* implicit */_Bool) arr_5 [i_1 + 1] [23LL] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_1 - 1]))) : (arr_5 [i_1 + 1] [i_1] [i_1 + 1]))));
            arr_7 [i_1] = max((((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23335)))))) : (arr_5 [i_0] [i_0] [i_1 - 1]))), (((/* implicit */long long int) arr_1 [i_0] [i_1])));
            var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (arr_0 [i_1 + 1]) : (arr_2 [i_1 - 1])))) ? (((/* implicit */long long int) arr_2 [i_1 + 1])) : (max((var_3), (((/* implicit */long long int) arr_2 [i_1 + 1]))))));
        }
        for (signed char i_2 = 4; i_2 < 22; i_2 += 3) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) max((var_0), (var_0)))), (max((arr_2 [i_2]), (var_8)))))), (max((((/* implicit */long long int) (short)(-32767 - 1))), (8359858544042014103LL))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_16 = var_10;
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [7LL]))) * (arr_0 [(unsigned short)0])))))) ? (((/* implicit */long long int) max((((/* implicit */int) var_1)), ((-(((/* implicit */int) (unsigned char)191))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) (-(2059970584)))) : (((var_3) / (-8359858544042014116LL))))))))));
            }
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2])) ? (-7656257760667986836LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [(signed char)8] [i_0] [i_2 - 3])))))));
        }
        arr_15 [i_0] = ((/* implicit */signed char) var_10);
        arr_16 [i_0] [(signed char)1] &= ((/* implicit */unsigned short) max((((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) + (0U))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))), ((-(min((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [11U] [(signed char)20])), (arr_11 [i_0] [i_0] [(signed char)15])))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) arr_10 [(short)15] [(unsigned short)23] [i_0] [i_0]))))), (min((arr_2 [i_0]), (((/* implicit */unsigned int) arr_8 [i_0])))))))));
    }
    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_11))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15; i_5 += 3) 
        {
            for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
            {
                {
                    var_20 = max((((((/* implicit */_Bool) arr_21 [i_5] [i_5 + 1] [i_5])) ? (((/* implicit */int) arr_21 [i_5] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_4 [i_6 - 1] [i_5 + 1] [i_5 + 1])))), (((/* implicit */int) arr_21 [i_5] [i_5 + 1] [i_5])));
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [(unsigned short)7] [(unsigned short)7] [i_7])), (((((/* implicit */int) (signed char)-65)) - (((/* implicit */int) (unsigned char)177))))))) ? (((/* implicit */long long int) min((arr_0 [i_4]), (((/* implicit */unsigned int) var_9))))) : ((-(((-4160126336182334897LL) + (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                        arr_26 [i_6] [6] [i_5] [i_7] [i_5] = var_9;
                        var_22 -= ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) arr_21 [i_4] [i_5 - 1] [i_4])) : (((/* implicit */int) var_0))))));
                        arr_27 [i_5] [i_6 + 2] [i_5] [i_5] = ((/* implicit */unsigned char) min((min((max((((/* implicit */long long int) arr_4 [i_4] [i_4] [i_4])), (7127117785259459157LL))), (((/* implicit */long long int) max((((/* implicit */short) (signed char)-13)), ((short)11327)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_5] [i_6 - 1] [i_6 + 1] [i_6 - 1])) || (((/* implicit */_Bool) 7127117785259459157LL)))))));
                    }
                    for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_20 [i_4] [i_6]))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_22 [i_5 + 1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_19 [i_8])))))))));
                    }
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_5 + 1] [i_5 + 1] [i_5])) % (((/* implicit */int) arr_21 [i_5 + 1] [i_5 + 1] [i_5]))))), (max((8359858544042014103LL), (((/* implicit */long long int) (signed char)108))))));
                        /* LoopSeq 1 */
                        for (short i_10 = 2; i_10 < 13; i_10 += 3) 
                        {
                            arr_39 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_5] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_31 [i_10 + 2] [i_5] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_31 [i_10 + 1] [i_5] [i_5] [i_5 + 1]))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_29 [i_4] [i_5] [12LL] [i_6] [i_9] [i_10])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_4] [i_4] [i_6 - 1] [i_5])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4])) ? (((/* implicit */int) ((((/* implicit */int) arr_38 [i_4] [i_4] [(unsigned short)5] [i_9] [i_9] [i_9])) == (((/* implicit */int) arr_3 [i_5]))))) : (((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_10])) < (var_3)))))))));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
                    {
                        arr_42 [15U] [i_5] [i_5] [i_6 - 1] [i_5] [i_11] = ((/* implicit */short) (+(min((arr_40 [i_6] [i_6 + 2] [i_6 - 1] [i_6 + 1]), (arr_40 [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6 + 1])))));
                        var_27 = ((/* implicit */short) max((var_10), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)50612)))))));
                    }
                    arr_43 [i_4] [i_4] [i_5] = ((((/* implicit */_Bool) (-(arr_2 [i_6 + 2])))) ? ((-(((/* implicit */int) arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1])))) : ((+(((((/* implicit */int) arr_19 [i_4])) * (((/* implicit */int) (signed char)87)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            arr_46 [(short)0] [i_4] [i_4] = ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4] [i_12]))) : (var_8));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                for (short i_14 = 1; i_14 < 15; i_14 += 3) 
                {
                    {
                        arr_51 [i_13] [i_13] [i_13] [i_14 - 1] [i_13] [2U] = ((/* implicit */signed char) ((var_8) | (((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_14])))))));
                        var_28 = ((/* implicit */long long int) arr_49 [i_4] [i_12] [(unsigned short)4] [1]);
                        arr_52 [i_14] [i_4] [i_12] [i_4] [i_4] |= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_3 [i_4])))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_4)))))));
                        arr_53 [i_4] [i_12] [i_12] [i_12] |= ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_12]))));
                    }
                } 
            } 
        }
        for (unsigned short i_15 = 1; i_15 < 14; i_15 += 1) 
        {
            arr_56 [(short)11] [i_15 + 2] [i_15] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
            var_29 = ((/* implicit */int) max((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) (+(arr_47 [(unsigned short)14] [i_15 - 1] [i_15 - 1] [i_15 + 1])))) / (5693008962440300765LL)))));
        }
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (7656257760667986823LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))))));
        var_31 &= ((/* implicit */short) var_8);
        arr_60 [(signed char)4] = (unsigned short)12288;
        arr_61 [i_16] &= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (arr_11 [i_16] [i_16] [i_16]))))));
        arr_62 [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_16])) != (((/* implicit */int) (unsigned char)50)))))) + (arr_47 [i_16] [i_16] [i_16] [i_16])));
    }
    for (long long int i_17 = 0; i_17 < 16; i_17 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned char) ((max(((~(((/* implicit */int) var_2)))), (min((((/* implicit */int) arr_28 [i_17] [i_17] [(signed char)15] [(unsigned char)12])), (-716387518))))) / ((+(((/* implicit */int) var_11))))));
        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_17] [i_17] [i_17])), ((-(((/* implicit */int) arr_34 [i_17] [6]))))))) ? ((-(var_5))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24037))))))));
    }
    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) min((((/* implicit */long long int) (+(var_10)))), (max((var_5), (((/* implicit */long long int) var_6)))))))));
}
