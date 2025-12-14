/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147822
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
    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (var_4)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_17))))) : (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_18)))))))) && (((/* implicit */_Bool) ((((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) ? (max((1111372212U), (((/* implicit */unsigned int) 14)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0])))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((arr_5 [i_1]), (((/* implicit */unsigned short) min(((unsigned char)255), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)16)) || (((/* implicit */_Bool) (unsigned char)10)))))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_8 [i_0] [i_1]), (arr_8 [i_0] [i_3])))), (max((arr_1 [i_1]), (((/* implicit */unsigned int) arr_8 [i_0] [i_3]))))));
                            /* LoopSeq 3 */
                            for (long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_4] = ((/* implicit */signed char) max((min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [i_0] [6] [i_2] [i_3] [i_4]))), (min((arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]), (((/* implicit */long long int) var_15))))));
                                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)5)), ((short)19424))))));
                                var_24 = ((/* implicit */long long int) var_18);
                                var_25 &= ((/* implicit */int) ((((((max((var_10), (var_10))) / (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_4 [i_0] [i_0] [i_0]))))))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) - (47005)))));
                                var_26 += ((/* implicit */_Bool) 14);
                            }
                            for (long long int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) >> (((arr_17 [i_0] [2LL] [i_0] [i_0] [i_0] [i_0] [i_0]) - (1683300879))))) : ((~(((/* implicit */int) (unsigned short)40397))))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (signed char)-1))))) ? (((/* implicit */int) ((_Bool) arr_4 [i_0] [(signed char)3] [i_0]))) : (((/* implicit */int) var_14))));
                                arr_20 [i_0] [i_1] [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) ((var_17) || (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [(unsigned short)2]))))), (min((var_11), (((/* implicit */short) arr_10 [i_0] [i_0] [6] [i_0]))))))) / (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)62)) >= (((/* implicit */int) (signed char)7))))))))));
                            }
                            for (long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                            {
                                var_28 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) -2147483632)) || (((/* implicit */_Bool) (signed char)-1))))), ((-(((arr_10 [7LL] [7LL] [7LL] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52732))) : (var_2)))))));
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)105)) / (((/* implicit */int) arr_0 [i_2]))))), (((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52732)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), (arr_9 [(short)6] [i_1] [i_2] [i_3] [i_6])))) && (((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) 14))))))))) : (min((var_1), (((/* implicit */long long int) var_14))))));
                            }
                            /* LoopSeq 4 */
                            for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                            {
                                var_30 = max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))), (min((arr_17 [i_0] [i_0] [9U] [9U] [i_2] [i_0] [i_7]), (arr_17 [i_0] [i_7] [i_1] [i_3] [i_7] [i_3] [i_2]))));
                                var_31 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_18 [i_3]))) : (((/* implicit */long long int) (+(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) min((var_6), (arr_8 [i_7] [i_0])))))))));
                            }
                            for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                            {
                                var_32 = ((/* implicit */signed char) arr_12 [i_3]);
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_12 [i_0])), (arr_13 [i_2] [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)42201))))) > (((long long int) var_16)))))));
                                var_33 = ((/* implicit */unsigned char) max((max((((/* implicit */int) min(((short)-8192), (((/* implicit */short) (unsigned char)246))))), (((((/* implicit */_Bool) -9)) ? (arr_22 [i_0] [i_1] [i_0] [i_0] [i_8] [i_8]) : (((/* implicit */int) var_19)))))), (((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned char)246)), (4294967294U))) == (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)248), (((/* implicit */unsigned char) arr_0 [i_0])))))))))));
                            }
                            for (long long int i_9 = 2; i_9 < 9; i_9 += 4) 
                            {
                                var_34 += ((/* implicit */long long int) max((2147483645), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-7225)), (var_1)))) && (((/* implicit */_Bool) var_12)))))));
                                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (min((((/* implicit */long long int) 858844685U)), (-4987865368662499483LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_3])))))));
                                var_36 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) min((9U), (4U))))))), (((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) ((arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [i_9 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63955)))))) : (((/* implicit */int) arr_10 [0LL] [i_1] [i_0] [i_0]))))));
                                arr_30 [i_0] [i_1] [i_0] [i_3] [i_9] = ((/* implicit */unsigned short) ((_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (signed char)1)))));
                            }
                            for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                            {
                                var_37 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_10])) ? (max((arr_13 [i_1] [i_1] [i_3]), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_8))))))) != (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) min((((/* implicit */short) arr_31 [i_0] [i_0] [i_2] [i_3] [i_10])), ((short)6329)))))))));
                                var_38 = ((/* implicit */long long int) arr_12 [i_1]);
                            }
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-((-(((/* implicit */int) var_16))))))) > (max((1618529312U), (((/* implicit */unsigned int) (unsigned short)5))))));
                            /* LoopSeq 1 */
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                arr_35 [i_3] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)12), ((unsigned short)65510))))) / (4269986362595662372LL)))) ? (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) arr_22 [i_3] [i_3] [i_3] [i_2] [i_1] [i_0]))))) : (((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [i_11] [i_11])) / (min((var_12), (((/* implicit */unsigned long long int) var_5))))))));
                                arr_36 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] [7ULL] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max(((short)21570), (((/* implicit */short) ((18446744073709551609ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(_Bool)1]))))))))), (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_2] [i_0])), (arr_21 [i_0] [i_0] [i_0] [i_0] [(unsigned short)8] [i_0])))), (arr_34 [i_1] [i_2])))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
