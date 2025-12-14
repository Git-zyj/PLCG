/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103190
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) ? (((/* implicit */int) ((arr_2 [i_2]) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_4 [i_2]))))));
                        var_13 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))));
                    }
                    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((((/* implicit */int) arr_6 [i_4] [i_4])) * (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_2] [i_1] [i_4]))))))), (max(((-(var_5))), (((/* implicit */long long int) min((arr_0 [i_1]), (((/* implicit */unsigned int) var_11)))))))));
                        arr_12 [i_0] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)24)) & (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))))));
                    }
                    var_15 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_5 [i_0 - 1])) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (arr_5 [i_0 + 2]) : (arr_5 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (((int) arr_18 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2])))))));
                                var_17 ^= ((/* implicit */unsigned int) max((((((((/* implicit */int) arr_11 [i_6] [i_1 - 1] [i_6] [i_5] [i_1 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_11 [i_0] [i_1] [i_5] [i_6] [i_1 + 1])) + (91))) - (29))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_5])), (max((((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_5])), (var_0))))))));
                                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_3 [i_0] [i_6] [i_6])))))) ? ((~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) min((arr_14 [i_0 - 1] [i_0 + 1] [i_6]), (arr_4 [i_5]))))));
                                var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_8 [i_5] [i_0 + 2] [i_2] [i_5] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((arr_16 [i_2] [i_1 - 3] [i_1] [i_5]) - (16933370239231150216ULL)))))))) : (max((max((var_3), (((/* implicit */long long int) arr_0 [i_0])))), (arr_3 [i_0 + 1] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_9))))) : (min((((/* implicit */unsigned long long int) var_7)), (var_2))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))));
    var_21 = min((((/* implicit */long long int) var_8)), (((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_5)))));
    var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned short)2669), ((unsigned short)21602))))))), (((((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (var_10)))) | (max((var_2), (((/* implicit */unsigned long long int) var_4))))))));
}
