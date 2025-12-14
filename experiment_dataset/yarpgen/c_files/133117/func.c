/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133117
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
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned int) var_0));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (arr_2 [i_0])))));
                            arr_11 [i_0] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])), (min((((unsigned long long int) 2066784415753922608LL)), (((/* implicit */unsigned long long int) max((arr_3 [i_3 + 1]), (((/* implicit */unsigned int) var_8)))))))));
                            arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
                            var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */long long int) ((int) var_4))) : ((-(9223372036854775779LL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_2 [i_1]))) ? (((/* implicit */unsigned int) arr_1 [i_3])) : (var_7)))))))));
                            var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_1))) < (((((/* implicit */int) (unsigned short)64105)) ^ (((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned short)64105))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_6 [i_5 + 1] [i_4] [i_0])) ? (((/* implicit */int) arr_20 [i_4])) : (var_1))));
                                arr_22 [i_0] [10LL] [i_0] [i_0] [(signed char)7] [i_0] [(signed char)7] = ((/* implicit */signed char) arr_18 [i_0]);
                                arr_23 [(unsigned char)4] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4]))) : (var_7)))) ? (((((/* implicit */_Bool) arr_15 [i_0] [(signed char)12] [i_1])) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_1])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */long long int) var_1)) < (2066784415753922608LL))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))) : (1840450868U)));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((signed char) (unsigned short)5733)))));
                    arr_25 [i_0] [i_1] [i_0 - 2] [i_0] |= ((/* implicit */unsigned int) arr_19 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0 - 2]);
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((signed char) arr_20 [i_1])))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_1))));
    var_16 ^= ((/* implicit */_Bool) 9223372036854775756LL);
}
