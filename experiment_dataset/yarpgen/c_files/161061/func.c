/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161061
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
    for (int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (~((~((~(((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_0]))))))));
                var_17 = ((/* implicit */short) 127);
                var_18 = ((/* implicit */long long int) max((4611683819404132352ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (var_4) : (arr_1 [i_0 - 2]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) -1)) : (var_4)))) : (((/* implicit */long long int) var_14))));
    var_20 = ((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_13)), ((~(-1)))))));
}
