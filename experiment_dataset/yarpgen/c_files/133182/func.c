/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133182
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
    var_10 = (+(max((max((11422147241103289388ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_9)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) (((+(max((arr_2 [i_1]), (7024596832606262250ULL))))) < (((/* implicit */unsigned long long int) ((arr_4 [(signed char)9]) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3907773581008585193ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                var_12 = ((/* implicit */signed char) ((max(((-(7024596832606262227ULL))), (11422147241103289366ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-4789)) - (((/* implicit */int) arr_6 [i_0] [i_1 - 3]))))) ? (((/* implicit */int) arr_6 [i_1 - 3] [i_1 - 3])) : (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_1])))))))));
            }
        } 
    } 
}
