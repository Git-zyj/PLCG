/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158815
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    arr_7 [(unsigned short)4] [i_1 + 1] [3] = ((/* implicit */short) 85247545509298063ULL);
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (-((-(((/* implicit */int) arr_3 [i_0] [i_1 - 2])))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (unsigned short i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0] [i_3])), (arr_6 [i_0] [i_1 - 1] [i_4] [i_4]))))))))))));
                            arr_14 [i_4] [i_1] [i_1] [i_0 + 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((4011443881U), (((/* implicit */unsigned int) (unsigned char)183))))) ? (1250989709245249479ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57664))))) ? (283523397U) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_16), (((/* implicit */signed char) (_Bool)0)))))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned char)12] [i_5])) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) (unsigned short)7917)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [i_1 - 2] [i_1] [(short)0] [i_1 + 1]))))));
                    var_22 = ((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_0 + 1]);
                    arr_17 [i_1] [i_1 - 2] [i_1] [12ULL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((((1740229082512042897ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ? (min((3892028992266160342LL), (((/* implicit */long long int) (short)-32763)))) : (((/* implicit */long long int) (-(arr_10 [i_1] [i_1 - 1] [i_5])))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-(-10LL))))))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~((~(((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57619))) : (var_10))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 1; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            var_24 &= ((((/* implicit */_Bool) arr_1 [3LL] [(_Bool)1])) ? (arr_1 [i_5] [i_7 + 1]) : (((/* implicit */unsigned long long int) var_9)));
                            arr_24 [i_0] [i_0] [i_5] [i_6] = ((arr_21 [i_0] [i_7 + 3] [i_5] [i_1 - 1]) ? (((/* implicit */int) (unsigned short)31257)) : (((/* implicit */int) (unsigned short)14)));
                            var_25 = ((/* implicit */unsigned short) arr_1 [i_7 + 1] [i_1]);
                        }
                        for (long long int i_8 = 1; i_8 < 10; i_8 += 3) /* same iter space */
                        {
                            arr_27 [i_8] [i_8 - 1] [i_8] [i_6] [i_5] [i_1 - 2] [12LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [i_8 - 1]))) : (arr_18 [i_0 - 1] [(unsigned char)7] [i_0 - 1])));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) -9223372036854775785LL)) ? (1845896432U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)42))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) -9223372036854775787LL))));
                            var_28 ^= ((long long int) (unsigned short)34253);
                        }
                        for (unsigned char i_9 = 4; i_9 < 11; i_9 += 4) 
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_0))));
                            arr_31 [i_1] [i_1 - 1] [i_1] [(signed char)8] [2LL] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)49060);
                        }
                        arr_32 [i_5] [i_5] = ((/* implicit */_Bool) var_13);
                        var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [(signed char)5])) ? (var_10) : (var_3)));
                    }
                }
                for (long long int i_10 = 3; i_10 < 10; i_10 += 1) 
                {
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)7))))), ((short)-6605))))));
                    var_32 ^= ((/* implicit */unsigned char) min((min((min((var_9), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)0))))))), (((/* implicit */unsigned int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-14087))))))));
                    var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_6 [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_10 - 1])))) ? (((/* implicit */int) min((min(((unsigned short)31282), (((/* implicit */unsigned short) var_1)))), (((/* implicit */unsigned short) arr_12 [12] [i_1] [i_10 + 1] [i_0]))))) : (arr_28 [i_10] [i_0] [i_0] [5LL] [i_0 - 1] [i_1])));
                }
                for (int i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    var_34 ^= ((/* implicit */unsigned int) var_5);
                    var_35 = ((/* implicit */unsigned short) var_13);
                    var_36 = ((/* implicit */signed char) min((3U), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_14)))) ? (-1073741824) : (((/* implicit */int) (short)-28907)))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    arr_42 [i_12] [i_1] [i_0] [i_0] &= ((/* implicit */_Bool) max((((unsigned short) arr_35 [i_0] [i_12])), ((unsigned short)6469)));
                    arr_43 [(short)4] = ((/* implicit */short) ((min((arr_4 [i_1 + 1] [i_12] [i_12]), (((/* implicit */unsigned int) (unsigned short)14209)))) / (((4011443886U) * (var_9)))));
                    arr_44 [i_0] = 4075340094U;
                }
            }
        } 
    } 
    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (short)29676)), (12500167714923397990ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-30485)) ^ (((/* implicit */int) (signed char)127)))))))) ? (((/* implicit */int) var_5)) : (var_2)));
    var_38 &= ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(2861914690U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27379))) : (max((((/* implicit */unsigned long long int) (unsigned short)57842)), (18446744073709551608ULL))))), (((unsigned long long int) min((var_3), (((/* implicit */long long int) (unsigned short)34252)))))));
    var_39 ^= ((/* implicit */unsigned int) min((var_6), (((/* implicit */int) var_16))));
}
