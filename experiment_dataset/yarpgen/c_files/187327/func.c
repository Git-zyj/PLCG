/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187327
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
    var_13 = ((/* implicit */_Bool) var_12);
    var_14 = ((/* implicit */unsigned short) (+(var_7)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [(unsigned short)10] = ((/* implicit */unsigned long long int) max((((((((/* implicit */unsigned long long int) 2960395930U)) >= (18042638996106693016ULL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (arr_5 [(unsigned short)1] [(unsigned short)1] [(_Bool)1]) : (arr_5 [i_1] [i_1] [i_1])))) : ((~(3363688137U))))), (((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)727))) - (arr_0 [i_4]))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)46081)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_13 [i_0] [i_0] [(_Bool)1]))))))))));
                                var_16 ^= ((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_0]) + ((((!(((/* implicit */_Bool) var_7)))) ? (arr_1 [i_4]) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-120))))))));
                                arr_15 [i_4] [i_4] [12] [i_3] [(signed char)3] = ((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (2013265920) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))))))), (2097024U)));
                                var_17 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-32760))))) ? (arr_1 [i_3]) : (((/* implicit */int) ((arr_7 [i_3]) < (((/* implicit */unsigned long long int) arr_5 [i_0] [(_Bool)1] [i_4])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) | (arr_6 [i_0] [i_1])));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_18 [i_0] [i_0] [i_0] [9ULL]))) >= (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0]))));
                        arr_20 [i_5] = ((/* implicit */unsigned long long int) ((((arr_8 [i_0] [i_0] [i_2] [i_5] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0]))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) arr_12 [15LL] [i_1] [(_Bool)1] [i_1])))))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_7 [i_5])) || (((/* implicit */_Bool) -500334867)))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (0ULL))));
                            var_22 *= ((/* implicit */unsigned short) ((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) -1730860071)))) >> ((((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) + (29)))));
                            var_23 = arr_7 [i_6];
                            var_24 = ((/* implicit */_Bool) (unsigned short)35212);
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((3363688137U) << (((arr_2 [i_0] [i_6]) + (938738726)))))) ? (((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_7 [i_1]))) : (((((/* implicit */_Bool) 3383350102U)) ? (0ULL) : (((/* implicit */unsigned long long int) arr_19 [(unsigned short)0] [i_1] [i_2] [i_0])))))))));
                        }
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) max((((int) arr_2 [i_0] [i_1])), (((/* implicit */int) min(((unsigned short)58081), ((unsigned short)21392)))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) arr_17 [i_0] [i_0]);
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])) ? ((+(((/* implicit */int) (_Bool)0)))) : (arr_1 [i_1])));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (~((~(arr_0 [i_10]))))))));
                                var_30 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) arr_33 [i_0] [i_0])) << (((((/* implicit */int) arr_33 [i_0] [i_1])) - (18748))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_0] [i_0] [(unsigned short)11]), ((((_Bool)1) ? (1354651290U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41409)) ? (((/* implicit */unsigned long long int) 2984161148508360392LL)) : (14960579601583496492ULL))))));
                }
            } 
        } 
        var_32 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(arr_2 [i_0] [i_0])))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1354651290U)))))) - ((~(max((((/* implicit */unsigned long long int) (unsigned short)22599)), (2168383853479415524ULL)))))));
    }
    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
    {
        arr_37 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32759))))) == (max((min((((/* implicit */unsigned long long int) arr_0 [i_11])), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (unsigned short)58081))))));
        arr_38 [i_11] = ((((/* implicit */_Bool) 1409424929U)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_11] [i_11]))))) ? (arr_9 [i_11] [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5817480716340204425ULL)))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))));
        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max(((unsigned short)7454), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) ((_Bool) 16850027255418611261ULL)))))) ? ((~(((((/* implicit */_Bool) var_11)) ? (arr_34 [12ULL] [4]) : (((/* implicit */unsigned long long int) arr_5 [(unsigned short)0] [(unsigned short)14] [i_11])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned short)57548)) >= (((/* implicit */int) (unsigned short)5525))))))))));
    }
    var_34 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) (((-(1596716818290940354ULL))) == (((/* implicit */unsigned long long int) (+(6419561))))))) : (max((-211856676), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11)))))))));
}
