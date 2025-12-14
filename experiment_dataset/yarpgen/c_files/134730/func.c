/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134730
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) var_0))));
    var_11 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((11266478986189813648ULL), (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) var_1)))) : (var_2)))) ? ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9))))) : (var_8)));
    var_12 = ((/* implicit */int) var_6);
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 921264296U)) >= (1505802112312474090ULL))) ? (1505802112312474090ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((1505802112312474086ULL) << (((((/* implicit */int) (short)17121)) - (17121))))) : (var_6)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_14 ^= (+(((/* implicit */int) (unsigned char)251)));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_0 + 2] [i_0 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)244)) * ((-(((/* implicit */int) (unsigned char)5))))))) : ((+(((arr_1 [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (short)21197)))))))));
                var_16 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 3])) ? (arr_0 [i_0 + 3] [i_0 + 3]) : (arr_0 [i_0] [i_0 + 1]))), (((/* implicit */int) (unsigned char)231))));
            }
        } 
    } 
}
