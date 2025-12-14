/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176319
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
    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((-9126553876514099452LL), (9126553876514099440LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [(signed char)2])))))))) ? (((/* implicit */unsigned long long int) (+((-(5LL)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1]))))) : (var_12)))));
                var_19 = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) min((arr_2 [i_1]), (arr_3 [i_0] [i_0] [i_1])))), ((+(-9223372036854775788LL))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0])))) ? ((+(-1498207056883275247LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_0] [i_0] [i_0]), (arr_2 [(unsigned short)16])))))))));
            }
        } 
    } 
}
