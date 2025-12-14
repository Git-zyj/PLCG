/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10570
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
    var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (((var_14) ^ (((4294967294U) | (0U)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [(signed char)4] [i_1] = ((/* implicit */long long int) var_17);
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((var_9) >> (((min((((/* implicit */long long int) var_12)), (var_13))) + (99868416LL))))) | (min((((var_15) - (var_9))), (((((/* implicit */_Bool) 2047ULL)) ? (4217318645U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32229))))))))))));
                }
            } 
        } 
    } 
}
