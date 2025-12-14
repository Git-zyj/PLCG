/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149913
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
    var_15 = ((/* implicit */unsigned long long int) var_8);
    var_16 = ((/* implicit */int) max((((/* implicit */long long int) min((1723878773U), (((/* implicit */unsigned int) 0))))), (((((/* implicit */_Bool) (short)-30163)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)154))) : (-3485773462658401069LL)))));
    var_17 = ((/* implicit */int) ((unsigned short) (((~(3485773462658401087LL))) + (((/* implicit */long long int) ((/* implicit */int) var_7))))));
    var_18 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-(3351475835U)));
        var_19 ^= ((/* implicit */unsigned int) (-(arr_2 [i_0])));
    }
}
