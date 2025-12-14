/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189344
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((var_5) & (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)141)) ? (var_3) : (((/* implicit */int) (_Bool)0))))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_11 &= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)121))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((unsigned long long int) (unsigned short)18553)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (var_3) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_5))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_13 [i_0] [i_0] [i_0 - 3] [i_0] [i_0]))))) / (min((((/* implicit */unsigned long long int) arr_3 [i_0])), (var_2)))))) ? (((((((/* implicit */unsigned long long int) var_8)) + (var_1))) % (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_7 [i_0 + 1])) - (arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_0 - 1] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))) ? (((((/* implicit */_Bool) (signed char)124)) ? (var_6) : (arr_9 [i_0] [i_0] [i_0] [i_3]))) : ((+(arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14464396969509930940ULL)) ? (((/* implicit */int) arr_6 [i_2] [i_0])) : (arr_4 [i_0 - 2] [i_0])))) : ((+(14464396969509930940ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1] [i_4])) << (((/* implicit */int) arr_13 [i_0] [i_3] [i_2] [i_3] [(short)9]))))) ? (((/* implicit */unsigned int) (+(-7)))) : (var_5)))) : (arr_0 [i_2])));
                                arr_16 [i_0] [i_0] = (((!(((/* implicit */_Bool) ((long long int) arr_9 [i_2] [i_0] [i_2] [(signed char)3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3 + 2] [i_0])) ? (arr_4 [i_3 - 1] [i_0]) : (arr_4 [i_3 + 1] [i_0])))) : (max((max((823255271U), (((/* implicit */unsigned int) (short)2882)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -269685797)) == (var_2)))))));
                                arr_17 [6LL] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_12 [i_0 + 2] [i_1 + 2] [i_0] [i_0] [i_3] [i_3]) * (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 2] [i_0 - 2] [i_3 + 1] [i_4] [i_4])))))) ? (((9080415117820395876LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-46))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_2] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [16] [i_2] [i_1] [i_0 - 3])) ? (arr_9 [i_0] [i_2] [i_0] [i_0 - 1]) : (arr_9 [i_0] [i_2] [4U] [i_0 - 3])))) ? (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1 + 2] [i_1 + 2] [i_0 - 1])) ? (((/* implicit */int) arr_14 [i_1] [i_2])) : (((/* implicit */int) arr_10 [i_1] [i_1 + 2] [i_1] [i_0 + 2])))) : (((/* implicit */int) min((arr_10 [i_0] [i_1 - 1] [i_0] [i_0 + 1]), (((/* implicit */short) (_Bool)1)))))));
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) - (max((var_2), (6119390767494601932ULL))))), (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) - (arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_1 + 1] [i_1 + 1] [i_2]))), (((/* implicit */long long int) ((3698980575U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
                }
            } 
        } 
    } 
}
