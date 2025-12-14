/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18220
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1 + 2] [i_1 + 2] = ((/* implicit */int) max((0ULL), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)11] [i_2]))) : (arr_1 [(short)7] [(short)7]))), (((/* implicit */unsigned int) ((short) arr_2 [i_0]))))))));
                    arr_7 [i_0] [i_1] [i_0] = max((((/* implicit */unsigned long long int) arr_1 [i_1] [i_1 + 2])), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (8ULL)))) ? (((/* implicit */unsigned long long int) var_1)) : (max((var_3), (((/* implicit */unsigned long long int) var_4)))))));
                    arr_8 [(unsigned short)17] [i_1] [1LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_1 + 2] [i_1]), (arr_1 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25266))) * (0ULL)))));
                }
            } 
        } 
    } 
    var_10 *= ((/* implicit */unsigned int) ((unsigned short) ((max((var_4), ((_Bool)1))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
}
