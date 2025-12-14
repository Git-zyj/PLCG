/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15065
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
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [7LL] [(short)9] [(signed char)4] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69))) | (((((/* implicit */_Bool) 15615378035392543823ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (2831366038317007796ULL)))));
                    var_11 += arr_6 [i_0 + 2] [i_0] [i_1] [i_0];
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (var_7)))) / (var_2))) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned long long int) 3860410508U))))))));
}
