/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131416
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
    var_10 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_1 [(signed char)18])))) ? (((((/* implicit */int) var_0)) >> (((arr_2 [(short)12]) + (8113162584816953686LL))))) : (((/* implicit */int) ((unsigned short) -4163769124242189097LL)))));
                var_12 = ((/* implicit */short) ((int) 1510475976U));
            }
        } 
    } 
}
