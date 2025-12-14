/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106331
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
    var_10 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((unsigned int) var_0))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (var_9))) != (((var_3) | (((/* implicit */int) var_7)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_11 ^= ((/* implicit */int) arr_0 [i_0]);
                    var_12 = ((/* implicit */unsigned int) max((var_12), (var_8)));
                    arr_8 [i_1] [i_1] [i_1] = min((((((/* implicit */_Bool) 50331648)) && (((/* implicit */_Bool) 4294967276U)))), ((!(((/* implicit */_Bool) min((var_8), (var_8)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [(unsigned char)3] [i_3] = ((/* implicit */long long int) ((_Bool) arr_4 [i_2]));
                        arr_12 [i_1] [i_2] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
                    }
                    for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) arr_2 [i_1]))))), (arr_14 [i_0] [i_0] [i_1] [i_0])));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 3; i_5 < 23; i_5 += 1) 
                        {
                            var_14 ^= ((/* implicit */unsigned char) arr_13 [i_5 - 1]);
                            var_15 += ((/* implicit */unsigned long long int) arr_16 [i_2] [12]);
                            arr_18 [(unsigned char)17] [i_1] [i_2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_6 [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5 + 1])), (((var_4) ^ (((/* implicit */long long int) var_6))))));
                            var_16 ^= ((/* implicit */long long int) arr_13 [i_0]);
                            arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((var_6) != (arr_5 [i_0] [i_0]))));
                        }
                        for (long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                        {
                            arr_22 [i_1] [i_1] [i_2] [i_2] [(unsigned char)20] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_1] [i_1] [i_4])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0])))))) ? (((/* implicit */int) var_7)) : (var_9)))));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (short)26170)) | (((/* implicit */int) (unsigned char)86)))))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (((/* implicit */int) arr_13 [i_0])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) var_0))))))));
                        }
                        for (int i_7 = 1; i_7 < 21; i_7 += 4) 
                        {
                            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_24 [(_Bool)1] [i_7 - 1] [i_7 + 2] [i_7 + 2] [(unsigned char)16]))) || (((((((/* implicit */_Bool) arr_13 [i_7 + 3])) || (((/* implicit */_Bool) var_3)))) && (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_1 [i_0]))))))));
                            arr_25 [i_0] [i_1] [i_1] [i_2] [i_4] [i_7 + 3] = ((/* implicit */short) ((((((/* implicit */int) max((arr_20 [i_0] [i_1] [i_1]), (arr_20 [i_1] [i_2] [i_1])))) << (((((/* implicit */int) max((arr_13 [i_2]), (((/* implicit */short) var_5))))) - (15916))))) * (((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) & (((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [(signed char)7] [0ULL]))))));
                            arr_26 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_8)) : (arr_14 [i_0] [(short)12] [i_1] [7ULL]))))) * (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            var_19 = min((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_7 [i_1])), (var_1)))), (min((((/* implicit */unsigned long long int) var_1)), (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_20 [i_0] [(short)18] [i_1])) : (((/* implicit */int) var_0)))) : (var_9)))));
                        }
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((((/* implicit */unsigned int) var_3)) ^ (var_8))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (var_8))))));
    var_21 += ((/* implicit */unsigned int) var_7);
}
