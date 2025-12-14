/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129680
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((var_1) >> (((-210412053) + (210412082))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-210412053)))))) ? (((((/* implicit */_Bool) 2045434272984467467ULL)) ? (((16401309800725084134ULL) * (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), (-557694629)))))) : (((/* implicit */unsigned long long int) var_1))));
    var_11 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (16349170474623405055ULL)))))), (var_3)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((((_Bool) 2045434272984467467ULL)) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))))) : (min((((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 1])), (var_0))));
        var_13 = arr_0 [i_0];
        var_14 = ((int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned long long int) -926873212)) : (arr_0 [i_0 + 1])));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) ((_Bool) var_7))))));
                    var_16 = (~((((_Bool)1) ? (((/* implicit */unsigned long long int) 2049813949)) : (2045434272984467447ULL))));
                }
            } 
        } 
    } 
    var_17 = max((var_9), (((((/* implicit */_Bool) min((var_6), (var_6)))) ? (var_8) : (var_0))));
}
