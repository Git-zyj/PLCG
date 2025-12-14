/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137807
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) max((var_6), (var_6))))) ? (min((2737056802U), (((/* implicit */unsigned int) 384852440)))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_1)), ((-(((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (signed char)37)))))));
                arr_5 [(unsigned short)3] [i_0] [i_1] = ((/* implicit */signed char) -384852435);
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((-2064466569) + (384852433)));
                var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 384852440)) ? (720665778U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2105169580U))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_4))))), (((int) 720665786U))))) ? (((/* implicit */long long int) 3574301534U)) : (((long long int) (unsigned short)11971))));
}
