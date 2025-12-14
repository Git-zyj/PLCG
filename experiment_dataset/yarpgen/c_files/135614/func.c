/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135614
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
    var_16 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (min((6810071258657714906ULL), (11636672815051836699ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) * (((/* implicit */int) ((((/* implicit */int) (short)32758)) != (var_11)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_0 [i_0]);
                arr_4 [i_0] [i_0] [(short)12] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (14441261810710080983ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1])))) : ((+(arr_1 [i_0 + 1])))));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) (~((-9223372036854775807LL - 1LL))))) : (((((/* implicit */unsigned long long int) var_3)) & (arr_1 [i_0 + 1]))))))));
            }
        } 
    } 
}
