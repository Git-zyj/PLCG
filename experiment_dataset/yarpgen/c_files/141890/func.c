/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141890
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) var_3);
                    var_16 = ((/* implicit */unsigned short) (~((-9223372036854775807LL - 1LL))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) 1506912133))))) ? (((/* implicit */unsigned long long int) ((long long int) -9223372036854775784LL))) : (min((((/* implicit */unsigned long long int) var_10)), (var_12))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_6)))), (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
    var_18 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775783LL)) || (((/* implicit */_Bool) 1963654804U)))))) ^ ((((!(((/* implicit */_Bool) (unsigned char)0)))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((7794714001911748584LL) - (7794714001911748580LL)))))))));
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)35905))))) - (var_6)))) ^ (min((min((2062012439223491621ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) var_11)))))))));
}
