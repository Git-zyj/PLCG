/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110510
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
    var_11 = var_3;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1])), (arr_0 [i_0] [i_1 + 1])))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_1))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 576459652791795712LL))))), ((unsigned short)65528)));
            }
        } 
    } 
    var_12 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((var_8) & (var_10))))));
}
