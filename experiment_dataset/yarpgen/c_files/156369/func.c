/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156369
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_3] [i_0] = (+(((/* implicit */int) arr_9 [i_0] [(unsigned char)0] [i_2] [i_3])));
                            var_11 = (~(max((((/* implicit */unsigned long long int) 1240805978193602088LL)), (0ULL))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) -777881105091405771LL))));
                                arr_14 [i_1] [i_3] [i_3] [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_3))))))) : (((/* implicit */int) min((((((/* implicit */_Bool) -720218520)) && (((/* implicit */_Bool) var_10)))), (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 424923299)))))))));
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((max((((/* implicit */int) (_Bool)1)), (min((((/* implicit */int) (_Bool)1)), (var_0))))), (((/* implicit */int) max((arr_9 [i_1] [i_1 - 2] [i_1] [i_0]), (((/* implicit */unsigned short) arr_8 [i_1] [i_1 - 2] [i_1] [i_1 + 2] [i_1 + 1] [i_1]))))))))));
                            }
                            for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                            {
                                var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [8] [i_3] [10U] [i_5])), (((((10530042435827492419ULL) & (((/* implicit */unsigned long long int) 9223372036854775807LL)))) << ((((~(var_9))) - (3273694082U)))))));
                                arr_18 [(unsigned char)11] [i_1] [i_2] [(unsigned char)10] [i_3] [11] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_5] [i_1 + 2]))) || (((/* implicit */_Bool) var_10))));
                                arr_19 [i_3] [i_1] [(unsigned short)10] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [(unsigned char)5] [i_1] [i_1 - 2] [(unsigned char)11] [i_1] [i_1 - 1]))))) >= (((var_5) % (var_5)))));
                            }
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((arr_2 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_2] [9U] [i_1] [i_0] [(unsigned char)7])))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_11 [1LL] [i_3] [i_3] [1ULL] [i_1 + 2]), (arr_11 [i_0] [i_1] [i_3] [i_3] [i_1 + 2]))))) : (((((/* implicit */_Bool) (-(243384595U)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) : (8586856369892754034LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)51982)))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (((((_Bool) (unsigned char)0)) ? (((-1240805978193602081LL) & (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [8LL] [i_0] [i_6] [i_3] [(signed char)12]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 - 1])) ^ (((/* implicit */int) arr_12 [i_1 + 2] [i_1] [(_Bool)1] [i_0] [i_0] [i_0] [i_1])))))))));
                                arr_23 [i_3] = ((min((((/* implicit */unsigned long long int) -8586856369892754034LL)), (18287254728854294340ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1 - 2] [i_1] [i_2] [i_3] [i_6] [i_3])) ? (((/* implicit */int) arr_9 [i_3] [i_1] [i_1] [i_3])) : (((/* implicit */int) (signed char)-60))))));
                                arr_24 [i_0] [12] [i_0] [2ULL] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_20 [i_3] [(_Bool)1] [i_2] [8LL] [i_6] [i_6]))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)1623))))) ? (max((var_9), (((/* implicit */unsigned int) (unsigned char)137)))) : (((/* implicit */unsigned int) ((int) ((_Bool) (signed char)-15))))));
                    arr_27 [i_0] [i_0] [i_1] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_22 [i_0] [i_7] [i_7] [i_0] [i_1])) + (2147483647))) >> ((((-(((/* implicit */int) max((arr_0 [i_7] [i_0]), (((/* implicit */unsigned char) arr_4 [i_1]))))))) + (248)))));
                    arr_28 [(unsigned short)11] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(2690536594U)))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)156))))))) : (((((/* implicit */_Bool) arr_26 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1 + 2] [i_7] [i_1] [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (6694839974436216493LL)))))));
                    var_18 -= ((/* implicit */short) ((-103916458) * (((/* implicit */int) (!(((6417368047657979478LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_16 [2U] [(unsigned short)8] [2U] [i_0] [i_0] [i_0] [i_0]))))))))));
                }
                for (unsigned short i_8 = 3; i_8 < 12; i_8 += 1) 
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 2925365028U)) ? (891549462U) : (((/* implicit */unsigned int) ((/* implicit */int) ((7081384996528076034ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)121), ((unsigned char)100)))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 9; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                arr_36 [i_9] [i_9] [i_9] [i_9] [i_8] [i_9] = ((/* implicit */short) (((+(min((var_2), (var_2))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? ((+(var_0))) : (((/* implicit */int) ((_Bool) -8053931361327435442LL))))))));
                                var_20 = ((/* implicit */signed char) ((int) ((arr_20 [i_8] [i_1 - 2] [i_8 - 1] [i_9 - 1] [i_9 + 2] [i_9 - 1]) ? (((/* implicit */int) arr_8 [i_10] [0U] [i_9 - 1] [i_9] [i_8 - 1] [i_1 + 1])) : (((/* implicit */int) arr_8 [i_10] [i_10] [i_9 - 1] [i_8] [i_8 - 3] [i_1 - 2])))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9202)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-65)) ? (2075581335U) : (2925365021U))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)134)) ^ (((/* implicit */int) (unsigned short)54)))))))) : ((-(((unsigned long long int) var_9))))));
                }
                for (int i_11 = 1; i_11 < 12; i_11 += 3) 
                {
                    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 2147483647)), (((arr_6 [i_0] [i_1 + 1] [i_1] [i_0]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_0] [i_1] [i_11])) ? (((/* implicit */long long int) 1633336079U)) : (2895916203347727607LL))))))));
                    var_23 = ((/* implicit */unsigned short) (-(((((-2895916203347727628LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167))))) | (((/* implicit */long long int) ((((/* implicit */int) (signed char)118)) * (((/* implicit */int) arr_0 [i_1] [3U])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
                        {
                            {
                                arr_45 [i_13] [8ULL] [7U] [i_1] = ((/* implicit */int) (short)-27627);
                                var_24 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_8 [7LL] [i_1] [i_11] [i_12] [i_13] [7LL]))))))) | (((((/* implicit */unsigned long long int) (~(var_10)))) | (arr_21 [i_1] [i_1] [(unsigned char)2] [i_0] [6U] [i_1] [i_1 + 1])))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_11] [i_1] [i_12] [10ULL] [i_13]))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65534))) : (arr_6 [i_13] [i_11] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_11] [i_12] [i_13])))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)101)), (arr_16 [i_1] [i_1] [i_1] [i_0] [i_11 + 1] [i_11 + 1] [i_11 + 1])))) : (var_0)));
                            }
                        } 
                    } 
                }
                arr_46 [6U] [5ULL] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) min((var_5), (((/* implicit */long long int) var_9))))))));
            }
        } 
    } 
    var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2281955043U)))) ? (-8637902831424803503LL) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_10)))) <= (9490333225793280147ULL))))) : (((((/* implicit */_Bool) var_3)) ? ((~(2644571644U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)63)))))))));
    var_27 = ((/* implicit */signed char) var_8);
}
