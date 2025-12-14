/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182220
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_2 [(unsigned short)2] [i_0] = (!(((/* implicit */_Bool) ((unsigned long long int) (~(arr_1 [i_0] [i_0]))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((((/* implicit */int) (!(((/* implicit */_Bool) 1170572670U))))) | (((/* implicit */int) ((_Bool) -198701666))))))))));
    }
    var_21 = (!(((/* implicit */_Bool) 198701665)));
    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((-198701666) == (2147483647)))), (var_2)));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (signed char)74))) ? (((/* implicit */int) max((((/* implicit */signed char) ((_Bool) 198701673))), (var_16)))) : (((/* implicit */int) max(((unsigned short)10157), ((unsigned short)10157))))));
}
