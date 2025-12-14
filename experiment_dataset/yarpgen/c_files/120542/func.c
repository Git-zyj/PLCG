/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120542
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-6753098997166424607LL)))) ? (((((/* implicit */int) var_2)) | (((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned short) var_7))))) | ((+(((((/* implicit */int) var_5)) - (((/* implicit */int) (signed char)59)))))))))));
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_1))))))) : ((~(((/* implicit */int) ((_Bool) (signed char)31))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */_Bool) max((14741746451431673228ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))));
                var_13 = ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))) - (var_6)));
                arr_4 [(unsigned short)4] [i_1] [11LL] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_1] [i_1] [i_0]))));
            }
        } 
    } 
}
