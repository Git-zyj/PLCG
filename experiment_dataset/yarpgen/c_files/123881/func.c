/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123881
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (_Bool)1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) (((_Bool)1) ? (4294967288U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 2])) : (((/* implicit */int) (_Bool)1)))))));
                var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (4414348548764589648LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_0])), (4294967295U))))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (arr_6 [i_1 - 2] [i_1 - 3])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1245023340U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)15591))))))));
}
