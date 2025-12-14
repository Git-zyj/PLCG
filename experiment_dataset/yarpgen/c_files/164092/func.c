/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164092
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */_Bool) max((min((arr_0 [i_1 - 1] [i_1 + 1]), (((/* implicit */long long int) var_10)))), ((-(3835326144122945333LL)))));
                arr_4 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((9223372036854775781LL) - (9223372036854775764LL))))));
                arr_5 [i_0] = ((/* implicit */signed char) ((((((131071ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 9223372036854775781LL)))))) : (((long long int) var_1)))) - ((-(((((/* implicit */_Bool) -9223372036854775793LL)) ? (4248588240545060981LL) : (9223372036854775785LL)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((signed char) var_5)))));
}
