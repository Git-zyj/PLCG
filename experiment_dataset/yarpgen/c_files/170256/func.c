/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170256
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
    var_12 = ((((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) ((long long int) var_5))))) % (((/* implicit */unsigned long long int) var_9)));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 1])))) ? (max((((((/* implicit */unsigned int) var_9)) ^ (arr_1 [(unsigned short)0] [7LL]))), (((/* implicit */unsigned int) arr_0 [i_0 + 1])))) : ((-(0U)))));
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) var_1);
            /* LoopNest 3 */
            for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) max((arr_9 [i_0] [i_0] [(unsigned short)3]), (max((((/* implicit */long long int) var_6)), (max((2621555628348507168LL), (((/* implicit */long long int) (unsigned short)4095)))))))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (((-(((/* implicit */int) (_Bool)1)))) % ((((((+(((/* implicit */int) arr_10 [(unsigned short)6] [i_3] [i_2] [i_1] [i_1 + 3] [i_0])))) + (2147483647))) >> (((arr_9 [i_0 - 3] [i_0 + 1] [i_0 - 1]) + (8168712481370205277LL)))))));
                            var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_1 + 3] [i_2] [i_3] [i_4] [i_0])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) var_9)))) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [(signed char)8] [2] [i_2 - 1] [(short)6] [i_2 - 1] [i_4 + 1])))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2 + 2] [i_3] [7ULL] [i_4])) ? (arr_8 [i_1] [i_2] [(unsigned short)6] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_2 + 1] [i_3] [i_2 + 1] [(signed char)6])))))) && (((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_4 - 2] [i_3] [i_4 - 2] [i_1 + 3])))))));
                            var_16 = ((/* implicit */short) (((_Bool)1) || ((!((!(((/* implicit */_Bool) var_6))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            arr_17 [2] [2U] [i_5] = ((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1)));
            arr_18 [i_5] &= ((/* implicit */short) var_10);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                arr_21 [(_Bool)1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6 - 1]))) : (var_5)));
                var_17 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 2] [i_5]))) % (arr_20 [i_0] [i_5] [i_6])));
            }
            /* LoopSeq 3 */
            for (short i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_18 *= ((/* implicit */signed char) arr_6 [1LL] [i_5] [i_7] [i_0]);
                arr_26 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_5])) ? (((/* implicit */unsigned int) var_9)) : (arr_6 [i_0] [i_0] [i_0 - 1] [i_7]))), (((/* implicit */unsigned int) max((arr_19 [i_0] [i_0] [i_0 - 3]), (arr_19 [i_0] [i_0] [i_0 - 1]))))));
                arr_27 [i_0] [i_0] [i_7] [i_5] = ((/* implicit */unsigned short) (_Bool)1);
                arr_28 [i_5] [10LL] [i_5] = ((/* implicit */unsigned char) max(((+(arr_9 [i_0 - 3] [i_0 - 1] [i_7]))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
            }
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    arr_33 [(unsigned short)2] [i_9] [i_5] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0 - 1]));
                    var_19 = ((/* implicit */signed char) ((arr_29 [i_0] [i_5] [i_8] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7197541364281231853LL)));
                }
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_23 [i_0] [i_0 - 1])), (14539596384957332858ULL))))));
            }
            for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((unsigned short) (unsigned char)254))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0 - 3])))))) : (arr_11 [i_0 - 3] [i_5] [i_0 - 3] [i_10] [i_5])));
                /* LoopSeq 3 */
                for (short i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    var_22 = max((min((((arr_20 [i_5] [(unsigned short)7] [i_5]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_11] [i_10] [i_0]))))), (((/* implicit */unsigned int) min((((/* implicit */short) arr_31 [i_0] [i_5] [(signed char)10])), (arr_0 [i_5])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7891)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [8ULL] [i_0] [i_0 - 3] [i_0])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_0]))))) : (((((/* implicit */unsigned int) arr_23 [i_10] [(_Bool)1])) + (2470709216U))))));
                    arr_39 [i_5] [i_11] [4LL] [i_11] [2ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (signed char)85)) >> (((((/* implicit */int) (short)-7889)) + (7907))))) >= (((/* implicit */int) ((arr_14 [i_10]) == (((/* implicit */int) (signed char)-82))))))))) <= (max((((((/* implicit */_Bool) arr_31 [i_5] [(signed char)7] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (arr_20 [3LL] [8LL] [i_11]))), (((/* implicit */unsigned int) ((-7197541364281231855LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))))))));
                    var_23 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_11] [4U] [i_10] [i_5] [i_5] [i_0])), (arr_36 [i_11] [(_Bool)1] [(_Bool)1])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (short)-30761)), (-1)))) : (((unsigned int) var_11))))));
                }
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    var_24 = ((max((var_0), (((/* implicit */long long int) arr_6 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_12])))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_12] [i_0 - 1] [i_12] [(_Bool)1])))));
                    arr_43 [i_0] = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) arr_38 [i_12] [i_12] [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0])))));
                }
                for (int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    arr_48 [4U] [i_13] [4U] [i_13] [(short)7] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */_Bool) 8455716864ULL)) ? (13239481810395755031ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) arr_24 [(signed char)9] [i_5] [i_5]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) <= (((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_5)))))) : (((int) (-(((/* implicit */int) var_11))))))))));
                }
            }
        }
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
        {
            arr_51 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_14] [i_14])))))) ? (((/* implicit */int) ((short) arr_23 [i_0] [(unsigned short)10]))) : ((~(((/* implicit */int) (_Bool)1))))))) == (((((/* implicit */long long int) ((int) var_0))) % (((long long int) (unsigned short)59004))))));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_1)) ? (arr_14 [i_0 - 1]) : (arr_14 [i_0 - 2]))) : (min((arr_14 [i_0 - 2]), (((/* implicit */int) var_6)))))))));
            arr_52 [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0]))) : (arr_4 [i_0] [0]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_14 [i_0])) : (arr_34 [i_0] [i_0] [i_0] [(short)9])))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)23263)) ? (arr_40 [i_0 - 1] [i_0 - 1] [i_14] [(unsigned char)2]) : (((/* implicit */unsigned long long int) arr_23 [i_0] [i_14])))) < (((/* implicit */unsigned long long int) arr_4 [(unsigned short)6] [i_0]))))))));
        }
        arr_53 [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)1)))) << (((arr_14 [0U]) - (2105710074))))) % (((/* implicit */int) (signed char)-68))));
    }
    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(var_10)))) ? (max((var_7), (((/* implicit */long long int) (signed char)34)))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)61440)) | (((/* implicit */int) (unsigned short)6532))))))), (((/* implicit */long long int) var_5)))))));
}
