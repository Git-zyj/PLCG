/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163533
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((+(((((/* implicit */_Bool) -5439101457596414372LL)) ? (var_2) : (var_5))))) * (((/* implicit */unsigned int) ((int) ((arr_1 [i_0]) << (((arr_1 [(signed char)1]) - (2039294124U)))))))));
        arr_3 [i_0 - 2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0 - 2])) != (-5439101457596414392LL))))) / (((var_0) ? (var_3) : (arr_1 [i_0 + 1])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) var_5);
        arr_7 [i_1] = ((/* implicit */unsigned char) ((_Bool) arr_5 [i_1]));
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            var_11 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 66846720)) / (arr_4 [i_3 + 1] [i_2])));
            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((arr_9 [4] [4]) ? (arr_4 [i_3 - 1] [(unsigned short)16]) : (arr_4 [i_3 - 1] [12U]))))));
        }
        var_13 = ((/* implicit */int) ((min((min((((/* implicit */unsigned int) (unsigned char)253)), (arr_5 [i_2]))), (((var_0) ? (4294901760U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) || (((/* implicit */_Bool) var_10)))))))));
        arr_13 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_9 [i_2] [i_2]) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (-66846720)))) : (arr_11 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2]))) : (((((/* implicit */_Bool) max((473087976U), (((/* implicit */unsigned int) 896))))) ? (min((((/* implicit */unsigned int) -891)), (arr_5 [i_2]))) : (((/* implicit */unsigned int) ((arr_9 [i_2] [i_2]) ? (((/* implicit */int) arr_8 [i_2])) : (896))))))));
    }
    var_14 = ((/* implicit */short) var_2);
}
