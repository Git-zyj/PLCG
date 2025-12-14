/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17563
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
    var_14 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_15 = min((((/* implicit */unsigned long long int) arr_10 [i_0] [2U] [i_1] [8LL] [i_3])), (5065906591313452934ULL));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [0ULL]))) < (((((arr_3 [(unsigned char)0] [i_1] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned char)8] [5] [6] [i_1] [i_0]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2])))))));
                        var_17 = ((/* implicit */unsigned char) arr_0 [(signed char)7]);
                        arr_11 [(_Bool)1] = ((/* implicit */unsigned short) var_12);
                    }
                    for (long long int i_4 = 2; i_4 < 8; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)63267)) << ((((~(((/* implicit */int) (signed char)11)))) + (20)))));
                        var_19 = max((4611686018418999296ULL), (((/* implicit */unsigned long long int) 2147483635)));
                        arr_14 [i_4] [i_4] [i_2] [i_1] [2LL] [4LL] = ((/* implicit */unsigned short) arr_10 [i_1 - 1] [i_1] [i_1 - 2] [i_4 - 2] [i_4 + 1]);
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 3) 
                    {
                        arr_17 [8ULL] [0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)196)) ? (arr_3 [3ULL] [9ULL] [(unsigned short)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))) ? ((-(((/* implicit */int) arr_10 [(unsigned char)3] [i_0] [5] [i_2] [(signed char)4])))) : (((/* implicit */int) var_13)))), (((/* implicit */int) (signed char)-2))));
                        var_20 = ((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned short)29397)), (arr_0 [i_5 - 1]))) % (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_5 - 1]) : (var_2)))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) ((arr_9 [i_1 - 2] [i_1 + 1]) / (arr_9 [i_1 - 2] [i_1 + 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 2; i_6 < 7; i_6 += 4) 
                        {
                            arr_20 [i_6] [i_5] [(unsigned char)8] [(signed char)6] [(unsigned short)9] = (+(min((((/* implicit */int) arr_10 [i_6] [i_5 + 1] [i_2] [(unsigned short)7] [(unsigned char)5])), (var_0))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-2)) | (arr_4 [i_6] [i_2] [(unsigned char)4])))) ? (min((2595380214U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 894034406)) ? (((/* implicit */int) arr_1 [(_Bool)1] [i_0])) : (((/* implicit */int) arr_7 [2U] [5]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_13 [(unsigned char)6] [(_Bool)1] [i_1] [6ULL] [(unsigned char)0] [(signed char)3])), ((+(16441915929056048549ULL)))));
                        }
                    }
                    for (int i_7 = 1; i_7 < 7; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)-1)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) >= (1042007033))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) var_4);
                            arr_27 [i_7] [1] = ((/* implicit */signed char) max((((((/* implicit */int) ((((/* implicit */int) (unsigned short)10325)) < (((/* implicit */int) (unsigned short)46332))))) & ((+(((/* implicit */int) var_13)))))), (((/* implicit */int) (signed char)-56))));
                            var_26 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-4)), (2147483635)))) : (((((/* implicit */_Bool) 4294967295U)) ? (arr_3 [i_0] [(signed char)6] [4ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                        }
                    }
                    for (int i_9 = 1; i_9 < 7; i_9 += 1) /* same iter space */
                    {
                        arr_30 [2ULL] [(unsigned char)0] = ((/* implicit */unsigned long long int) var_5);
                        arr_31 [i_0] [i_1] [(unsigned char)3] [i_2] [i_9] [1] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_4 [i_0] [3ULL] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)4] [(signed char)8]))))));
                        arr_32 [(unsigned char)6] [i_1] [i_2] [8] [i_9] [5ULL] = ((/* implicit */int) arr_25 [(_Bool)1] [7LL]);
                        var_27 = ((((/* implicit */int) ((signed char) arr_26 [i_1 + 1] [i_0] [4] [i_9 + 1]))) < (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-2)), (var_10)))));
                        arr_33 [8] [i_1] [i_2] [i_2] [i_9] [1] = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) ^ (((/* implicit */int) (signed char)-63)))) ^ (((var_1) ? (((/* implicit */int) arr_1 [9ULL] [9U])) : (((/* implicit */int) arr_1 [i_1] [i_0]))))));
                    }
                    for (int i_10 = 1; i_10 < 7; i_10 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_11 = 3; i_11 < 9; i_11 += 1) 
                        {
                            arr_39 [i_10] [(unsigned short)6] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [(unsigned short)8]))))))) ? (((((/* implicit */int) arr_21 [i_10 - 1] [i_0] [(signed char)7] [(unsigned short)5] [6])) - (((/* implicit */int) arr_21 [i_10 + 3] [(unsigned char)4] [i_10] [i_2] [(unsigned char)5])))) : (min((1042007033), (((/* implicit */int) (signed char)-20))))));
                            arr_40 [6] [i_10] [(_Bool)1] [i_10] [6] = ((/* implicit */unsigned long long int) var_2);
                        }
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) ((signed char) var_0))), ((+(2004828144653503067ULL)))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)63519), (((/* implicit */unsigned short) var_13))))) ? (min((((/* implicit */int) var_7)), (-2147483612))) : (min((((/* implicit */int) ((arr_19 [i_0] [0U] [i_12] [3] [(unsigned char)6] [0] [7ULL]) != (var_8)))), (2147483611)))));
                        }
                        arr_43 [8] [i_10] [i_2] = ((/* implicit */int) ((max((arr_8 [(unsigned char)4] [(unsigned char)8] [i_2] [i_2]), ((!(((/* implicit */_Bool) 0)))))) ? (((unsigned int) ((unsigned short) var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)158)) > (((/* implicit */int) (signed char)54))))))));
                        var_30 = (unsigned short)510;
                        arr_44 [i_10] [i_0] [i_1] [(signed char)2] [7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(18446744073709551610ULL)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_15 [(unsigned char)6] [i_10] [i_10] [i_10 + 1]) : (arr_15 [(signed char)0] [5LL] [(unsigned short)9] [i_10 + 1]))) : (((/* implicit */int) ((unsigned char) (signed char)11)))));
                    }
                    arr_45 [i_0] = ((/* implicit */long long int) ((((unsigned long long int) -650427604)) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 624331672)) && (((/* implicit */_Bool) arr_36 [i_1 + 1] [4U] [1]))))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned char) 2147483635);
}
