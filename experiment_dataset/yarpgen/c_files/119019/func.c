/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119019
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
    var_18 -= ((/* implicit */unsigned int) -8282654679093128180LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_16)), (arr_0 [(unsigned short)1]))) > (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 8282654679093128180LL))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((arr_1 [i_1]), (arr_1 [i_1]))) ? (((/* implicit */unsigned long long int) (-(((8282654679093128180LL) / (((/* implicit */long long int) 2982894986U))))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (min((((/* implicit */unsigned long long int) (unsigned short)43812)), (12630666317464635280ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43812)))))));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_3 [(short)1] [i_0]))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (((_Bool)0) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */_Bool) (unsigned short)55053)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_0 [i_0]))))) : (max((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) var_17))))));
            }
        } 
    } 
    var_20 -= ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)));
    var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((int) ((var_10) & (((/* implicit */int) var_2))))) : (var_4)));
}
