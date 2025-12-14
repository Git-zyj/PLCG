/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10963
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
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10833367136423896286ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 2]))) : (arr_3 [5LL] [i_0 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) ? (var_8) : (var_8)))))))) : (((((/* implicit */_Bool) (signed char)120)) ? (arr_3 [i_0 - 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 ^= ((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 2])) ? (var_14) : (((/* implicit */int) var_1)));
                        var_16 = ((/* implicit */long long int) ((signed char) var_12));
                        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -465954779)) ? (7613376937285655330ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))) ? (arr_4 [i_1] [i_2 + 3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 7613376937285655329ULL)) ? (arr_4 [i_2 + 2] [i_1] [i_0]) : (arr_4 [i_1] [i_2 - 1] [i_3])));
                        arr_14 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_2] [i_3])) + (2147483647))) >> (((var_8) - (18323677937536750210ULL)))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_17 [i_4] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_4]))) : (17804871299551885631ULL)));
                        arr_18 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) -7321686774658759076LL);
                    }
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_22 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_5])))) : (var_14)));
                        var_19 ^= ((/* implicit */short) (~((-(((/* implicit */int) var_0))))));
                        arr_23 [i_5] [i_5] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2 - 2]))));
                    }
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_7) : (7321686774658759073LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_7 + 4] [i_1] [i_7] [i_0 - 2]))) : ((-(6461086315467338269LL)))));
                                var_21 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(((((/* implicit */_Bool) -7321686774658759072LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))))));
                                var_23 = ((/* implicit */unsigned long long int) ((signed char) arr_31 [i_8]));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10)))))) ? (((((var_6) + (9223372036854775807LL))) << (((((var_6) + (3987533598322571183LL))) - (32LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0 - 1] [i_0]))))))));
                    arr_33 [i_6] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0 - 1] [i_0] [i_0 + 1] [(short)17] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0])))));
                    arr_34 [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_6]))) | (((((/* implicit */_Bool) -8323939592965154745LL)) ? (var_6) : (var_6)))));
                }
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) arr_24 [i_0] [i_1] [i_1] [i_9]))))))));
                    arr_37 [i_0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [3LL] [i_9])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) ((_Bool) var_11))) : ((~(((/* implicit */int) (short)24848))))))) : ((-(((((/* implicit */_Bool) var_2)) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                }
            }
        } 
    } 
    var_26 ^= ((/* implicit */unsigned int) (-((+(var_6)))));
}
