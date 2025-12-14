/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127276
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
    var_17 = ((max((((/* implicit */unsigned long long int) max((var_15), (((/* implicit */int) var_14))))), (max((var_11), (((/* implicit */unsigned long long int) var_0)))))) ^ (((/* implicit */unsigned long long int) var_15)));
    var_18 = ((/* implicit */_Bool) ((short) max((((/* implicit */long long int) var_12)), (min((var_5), (((/* implicit */long long int) var_13)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (+((-(((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_1 [i_1]))))))));
                        arr_9 [i_1 - 1] [i_0] [i_2] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 11045527903494198663ULL)) ? (11045527903494198663ULL) : (7401216170215352952ULL))), (((((/* implicit */_Bool) 7401216170215352945ULL)) ? (7401216170215352934ULL) : (11045527903494198663ULL)))));
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0] [i_1 - 1])), (var_6)))), ((~(((/* implicit */int) arr_2 [i_1 + 1] [i_2]))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_2] [i_2])), ((-(max((var_11), (((/* implicit */unsigned long long int) var_10))))))));
                        var_21 &= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_4])) ^ (((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_0] [i_4])) : (((/* implicit */int) arr_14 [i_2] [i_1] [i_1] [i_1])))))), (((/* implicit */int) ((signed char) max((var_9), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))));
                        arr_15 [i_4] [i_0] [i_0] [18LL] = ((((/* implicit */_Bool) ((((var_11) ^ (((/* implicit */unsigned long long int) var_2)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_14 [i_0] [i_1] [i_1] [i_0]), (((/* implicit */unsigned short) arr_0 [i_1]))))))))) ? (min((min((((/* implicit */int) arr_13 [i_4] [i_0] [i_0] [i_0])), (var_15))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_0] [i_0])))))) : (min((((/* implicit */int) arr_3 [i_0] [i_1 - 1])), ((+(((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_4])))))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_14 [i_0] [i_0] [i_2] [(unsigned short)11]), (((/* implicit */unsigned short) var_1)))))))) ? (min((((7401216170215352953ULL) / (11045527903494198649ULL))), (7401216170215352957ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((arr_8 [i_4] [i_0] [i_1 - 1] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_4] [i_4] [i_0])))), (max((((/* implicit */long long int) var_15)), (arr_4 [i_1] [i_0]))))))));
                        arr_16 [i_0] [i_0] = (+(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_14)) ^ (arr_7 [i_4] [i_4] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_23 -= ((/* implicit */unsigned int) (~((~(((7401216170215352934ULL) ^ (11045527903494198668ULL)))))));
                        var_24 = ((/* implicit */short) (((+(min((arr_12 [i_0] [i_0] [i_1] [(unsigned char)14] [i_2] [7LL]), (((/* implicit */long long int) arr_18 [i_2] [i_2] [i_1])))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_13 [5ULL] [i_0] [i_0] [i_0])), (arr_4 [i_0] [18LL]))))))))));
                    }
                    for (int i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_2)), (((arr_19 [i_0] [i_0]) / (((/* implicit */unsigned long long int) var_2)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))))));
                        arr_21 [i_6] [i_0] [12U] [i_6] = ((/* implicit */long long int) max((min((min((arr_17 [i_0] [i_0] [i_0] [i_6] [i_6] [i_6]), (((/* implicit */int) arr_3 [i_0] [i_2])))), (((((/* implicit */int) arr_8 [(unsigned char)12] [i_0] [i_1 - 1] [(unsigned char)12] [i_6])) ^ (((/* implicit */int) var_6)))))), (((((/* implicit */int) arr_2 [i_0] [i_2])) ^ (var_3)))));
                        var_26 |= ((/* implicit */short) max(((+(((/* implicit */int) arr_2 [i_1 - 2] [i_1])))), (((((/* implicit */int) arr_2 [i_1 - 2] [i_0])) / (((/* implicit */int) arr_2 [i_1 - 1] [i_0]))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 2; i_7 < 18; i_7 += 3) 
                    {
                        arr_25 [i_0] = ((/* implicit */unsigned char) arr_11 [i_0]);
                        arr_26 [i_0] [i_0] [i_0] [i_7] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
                    }
                    arr_27 [i_2] [i_2] &= (+(max((((11045527903494198670ULL) / (7401216170215352946ULL))), (max((arr_19 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_12)))))));
                    arr_28 [i_0] [17ULL] [i_0] [i_0] = ((/* implicit */short) min(((+(((11045527903494198682ULL) ^ (11045527903494198670ULL))))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_22 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_2])), (var_10))))))));
                    arr_29 [i_2] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((11045527903494198657ULL) ^ (11045527903494198650ULL))))));
                }
            } 
        } 
    } 
}
