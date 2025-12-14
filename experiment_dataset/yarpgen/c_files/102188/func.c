/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102188
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_9 [i_3] [i_3] [(unsigned short)14] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) min((((unsigned int) 6747889742290980885LL)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_0)))))))) <= (min((((((/* implicit */_Bool) arr_3 [i_0])) ? (6747889742290980885LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-17556))))), (((/* implicit */long long int) arr_7 [i_3] [i_1 - 1]))))));
                            arr_10 [i_0] [i_0] [i_0] [(unsigned short)20] &= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_0] [i_0] [i_0]))) ? (max((var_8), (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((arr_4 [7LL] [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (3280276205157914231ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))))) ? (((/* implicit */unsigned long long int) ((int) 15166467868551637385ULL))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 6747889742290980874LL)) : (15166467868551637400ULL))))))));
                            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2163393628U)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1] [i_2 - 1] [i_3]))))) ? (((((/* implicit */_Bool) arr_1 [i_3] [i_0])) ? (18446744073709551615ULL) : (var_4))) : (((((/* implicit */_Bool) (short)-13593)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55816))) : (0ULL))))) : (((/* implicit */unsigned long long int) (-((+(arr_3 [3U]))))))));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                            {
                                arr_13 [i_3] [i_1] [(unsigned char)1] [i_1] [i_4] = (i_3 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */int) arr_7 [i_3] [i_1])) : (((/* implicit */int) (signed char)0))))), (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1 - 2] [i_2 + 2] [i_3] [i_3] [i_4] [i_4]))) : (298286356U)))))) ? (((((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1 + 3] [i_2] [i_3] [13LL] [i_2 - 3]))) : (3361398108U))) >> (((((/* implicit */int) ((signed char) arr_7 [i_3] [i_1]))) + (135))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 245024173U)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) var_9)))) << (((((min((((/* implicit */long long int) (signed char)40)), (arr_4 [i_0] [i_0] [i_0]))) + (2101481525192771078LL))) - (21LL))))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */int) arr_7 [i_3] [i_1])) : (((/* implicit */int) (signed char)0))))), (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1 - 2] [i_2 + 2] [i_3] [i_3] [i_4] [i_4]))) : (298286356U)))))) ? (((((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1 + 3] [i_2] [i_3] [13LL] [i_2 - 3]))) : (3361398108U))) >> (((((((/* implicit */int) ((signed char) arr_7 [i_3] [i_1]))) + (135))) - (21))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 245024173U)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) var_9)))) << (((((min((((/* implicit */long long int) (signed char)40)), (arr_4 [i_0] [i_0] [i_0]))) + (2101481525192771078LL))) - (21LL)))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15166467868551637400ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7433))) : (15166467868551637391ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [(signed char)5] [i_0] [i_0]))) / (12351226393292676265ULL))) : (((/* implicit */unsigned long long int) ((int) (short)-17556))))));
                            }
                            for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                            {
                                var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned long long int) -861979954)), (3280276205157914216ULL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_3])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)-32757))))) ? (12660714602547677063ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 1] [(signed char)14])) ? (arr_0 [7ULL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)255))))))))));
                                var_17 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)18004)) ? (((/* implicit */int) (unsigned short)29798)) : (((/* implicit */int) (short)-13108))))), (((((/* implicit */_Bool) (unsigned char)193)) ? (arr_3 [4U]) : (((/* implicit */long long int) var_13)))))));
                            }
                        }
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (arr_3 [i_0])))))) ? (((((/* implicit */_Bool) min((arr_2 [(unsigned char)21]), (arr_3 [i_1])))) ? (((((/* implicit */_Bool) (unsigned short)10054)) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_1] [i_0] [i_0])) : (((/* implicit */int) (signed char)-37)))) : (((/* implicit */int) (signed char)-32)))) : ((((((-(((/* implicit */int) (unsigned char)63)))) + (2147483647))) >> (((arr_16 [i_0] [i_0]) - (5686481050473557852ULL)))))));
                var_18 = ((/* implicit */signed char) (short)17556);
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? ((~(((/* implicit */int) arr_7 [i_1] [i_1])))) : (((/* implicit */int) (unsigned short)65535))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (2251798739943424ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))))), (((/* implicit */unsigned long long int) ((signed char) -1605124442))))))));
                arr_18 [i_0] = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))) : (arr_16 [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(short)14] [(_Bool)1] [i_1 + 3])) ? (6677271174228991031LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [5ULL] [5ULL])) ? (arr_16 [i_0] [i_0]) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))) : (5786029471161874553ULL))) : (((/* implicit */unsigned long long int) ((long long int) var_0))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_9);
}
