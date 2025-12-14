/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136168
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
    var_16 *= ((((/* implicit */int) (signed char)0)) != (((/* implicit */int) (signed char)0)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        arr_2 [(signed char)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)0))) ? ((-(arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) var_8)) : (min((((/* implicit */long long int) (signed char)31)), (((long long int) (signed char)-117))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) >= (((/* implicit */long long int) var_8)))))) >= (max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) 3454201747U))))));
        arr_4 [i_0] |= min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))), (((unsigned long long int) arr_0 [i_0] [i_0])));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) 981874349U)) != (var_4)));
}
