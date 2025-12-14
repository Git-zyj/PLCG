/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142948
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
    var_14 = ((((/* implicit */_Bool) max((((((/* implicit */int) var_9)) * (((/* implicit */int) var_2)))), (min((var_12), (2147483647)))))) ? (((/* implicit */long long int) 524288U)) : (((((/* implicit */_Bool) 17592186044415LL)) ? (((/* implicit */long long int) var_3)) : (((((/* implicit */_Bool) var_3)) ? (var_10) : (17592186044400LL))))));
    var_15 = ((((/* implicit */long long int) max((((/* implicit */int) ((var_10) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))) * (17592186044415LL));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [11LL] [i_1] = ((((17592186044415LL) << (((((((/* implicit */_Bool) 15656529466797271689ULL)) ? (266338304LL) : (((/* implicit */long long int) 1978682673)))) - (266338292LL))))) | (((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (2545388729U)))));
                var_16 += ((/* implicit */_Bool) var_13);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) min((var_17), (-17592186044400LL)));
}
