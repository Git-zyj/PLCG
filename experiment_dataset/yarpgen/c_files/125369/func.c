/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125369
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
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] = (short)8192;
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 1] [i_1])) | (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 438692072U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [10] [i_0 + 1])))))) : (((((/* implicit */_Bool) -1LL)) ? (arr_0 [i_0] [(signed char)11]) : (var_4))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (var_11)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (2080766373U) : (var_11)))) : (((((/* implicit */long long int) var_7)) | (-3624676480683675045LL))))) | (min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-3624676480683675045LL)))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((1322388408017683493LL), (((/* implicit */long long int) var_7)))) & (((/* implicit */long long int) ((var_11) ^ (var_8))))))) ? (((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)167)) ? (var_6) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != ((~(((/* implicit */int) var_3))))))))));
}
