/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107306
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
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (-(max((((/* implicit */long long int) arr_2 [(unsigned short)2])), (var_4))))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) % (((((/* implicit */_Bool) ((0LL) >> (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((16248676651600727975ULL), (((/* implicit */unsigned long long int) arr_0 [i_2]))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) min((var_7), (((/* implicit */long long int) var_6))));
}
