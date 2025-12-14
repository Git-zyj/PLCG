/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135014
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(2619750200008607286LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) : (((2199522382U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_0 + 1] [i_2 - 1])))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_2] [i_0]))) > (((((/* implicit */_Bool) -2619750200008607278LL)) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (arr_3 [i_0]))))))) % (arr_0 [i_2 - 1])));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((int) 383369592U)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_10))));
}
