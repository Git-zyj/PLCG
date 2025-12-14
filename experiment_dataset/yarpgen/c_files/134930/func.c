/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134930
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (signed char)108)))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0]) : (((/* implicit */long long int) arr_4 [i_1 + 1]))))) ? (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) : (13590125853877293484ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_4 [i_1 + 2]))))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned char) var_4);
    var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4856618219832258120ULL)) ? (((/* implicit */unsigned long long int) var_9)) : (var_7)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))));
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_8))));
}
