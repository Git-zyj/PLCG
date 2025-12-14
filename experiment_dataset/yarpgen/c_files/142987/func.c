/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142987
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((((((7222785027269905388LL) == (((/* implicit */long long int) ((/* implicit */int) (short)-28434))))) || (var_14))), (var_8))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) arr_4 [i_0]))));
                var_17 -= ((/* implicit */unsigned char) (short)19);
                var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) ((int) arr_1 [i_0] [i_0]))), (arr_3 [i_0])));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_8 [i_0] [i_1] [i_2 + 1] [(unsigned short)22]) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */long long int) min((arr_8 [i_0] [i_1] [i_1] [i_2]), (834125872)))) : (arr_3 [i_2 - 1])))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) (signed char)-126)), (3191997833061753816ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_6 [i_0] [i_1] [i_1] [i_3]))));
                        arr_13 [i_3] [i_1 + 2] [i_1 + 2] [i_3] [i_0] = ((/* implicit */unsigned char) arr_2 [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2] [i_0])) ? (((/* implicit */int) min(((signed char)-115), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) var_7))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_2]))))) == (arr_15 [i_4] [i_3] [i_2 - 2] [i_1]))))) : (((((/* implicit */_Bool) (-(2147483647)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_10 [i_2 - 1] [i_2 - 2] [i_2 - 2]))))))));
                        }
                    }
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 2; i_6 < 24; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */int) min((var_23), ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))) > (((((/* implicit */_Bool) -9223372036854775807LL)) ? (5175314824929519168ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61684))))))))))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_2 [10]))));
                            var_25 = ((/* implicit */_Bool) var_6);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_5] [i_0]) / (((/* implicit */int) (signed char)51))))), (arr_0 [i_0])))) ? (((11386351824698989939ULL) + (((var_9) - (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 2] [i_0] [i_5])))))) : (((/* implicit */unsigned long long int) ((long long int) arr_17 [i_6 - 1] [i_1 + 2])))));
                        }
                        var_27 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 8388607LL)) ? (14869693644088449314ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (arr_0 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))) ? (((/* implicit */long long int) ((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */int) var_5))))) : ((-(arr_10 [i_0] [i_1 + 1] [i_5]))))))));
                        var_28 = ((/* implicit */unsigned int) min((min((-6), (((/* implicit */int) (signed char)-99)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_5] [i_0] [i_2])))))));
                        var_29 = ((/* implicit */signed char) arr_2 [i_2]);
                    }
                }
                for (unsigned int i_7 = 2; i_7 < 24; i_7 += 4) /* same iter space */
                {
                    arr_24 [i_7 - 2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_17 [i_7 - 2] [i_7])))) & (((unsigned long long int) ((((arr_14 [i_0] [i_0] [i_1] [i_0] [7LL] [i_7] [i_7 - 1]) + (2147483647))) >> (((arr_0 [i_0]) - (8388248507223089319LL))))))));
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_16 [i_1 - 1] [i_7 + 1] [i_7 - 1] [(signed char)8] [i_7 - 1]) * (((/* implicit */int) arr_2 [i_1 + 1]))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_31 = ((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 + 1] [i_7 - 1] [i_0] [i_7 - 1]);
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 2; i_9 < 21; i_9 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) var_0);
                            var_33 -= ((/* implicit */unsigned short) (((~(((arr_2 [i_1 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_9] [i_0] [i_0]))) : (arr_15 [i_9] [i_8] [i_7] [i_0]))))) << (((/* implicit */int) arr_28 [i_0] [i_1 + 1] [i_7] [i_0] [i_1 + 1] [i_0]))));
                        }
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            arr_32 [i_0] [i_1] [i_7] [i_0] [(signed char)12] = ((/* implicit */signed char) var_4);
                            var_34 = max(((~(2669771579169712449ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1339336807)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48046))) : (232130846U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_1] [(unsigned short)23] [i_10]))) : (-1404168664740654547LL)))));
                            var_35 = ((/* implicit */int) min((8407590302806208079LL), (((/* implicit */long long int) (unsigned short)23901))));
                        }
                        for (unsigned char i_11 = 2; i_11 < 22; i_11 += 1) 
                        {
                            var_36 ^= ((/* implicit */_Bool) arr_17 [i_0] [i_0]);
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 842920126)), (arr_23 [i_0] [i_0])))), (arr_19 [i_0] [i_7] [i_8])))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [(signed char)16] [i_0] [i_7] [i_7] [i_7 + 1]))))), (((((/* implicit */_Bool) arr_31 [i_0] [i_1 + 2] [i_7 - 2] [i_1 + 2] [i_0])) ? (arr_33 [i_0] [i_1 - 1] [i_0] [i_0] [i_0] [i_8] [i_11]) : (((/* implicit */unsigned long long int) 4294967291U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74)))));
                        }
                    }
                }
                var_38 = var_5;
            }
        } 
    } 
    var_39 = ((/* implicit */int) max(((((-(83798762018095717ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_4)))) && (((/* implicit */_Bool) (+(var_2)))))))));
    var_40 = ((/* implicit */short) max((var_40), (var_7)));
}
