/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106161
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
    var_15 = ((/* implicit */short) var_12);
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */short) ((long long int) (_Bool)0));
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -534226243089939391LL)), (arr_1 [i_0 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [16LL]))) < (arr_5 [i_0] [(short)8]))))) >= (arr_2 [i_0 + 2]))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (((-27937966520881106LL) / (-534226243089939393LL)))))));
            }
        } 
    } 
}
