/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135726
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
    var_13 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((15660641735749105703ULL) >= (((/* implicit */unsigned long long int) -1431671321))))), (6740606786631002318LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)30800))) : (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_11))), (((var_3) ? (6740606786631002305LL) : (-6740606786631002319LL)))))));
    var_14 = (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_11)) : (var_12))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = -6740606786631002300LL;
                var_16 = ((/* implicit */signed char) ((var_1) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((unsigned int) arr_4 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) >= (0ULL))))))))));
                var_17 = ((unsigned char) ((long long int) arr_4 [i_0 - 1]));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)254));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (6740606786631002318LL)))))))) ? (var_1) : (min((((/* implicit */long long int) var_4)), (var_6)))));
}
