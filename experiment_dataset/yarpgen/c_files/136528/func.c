/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136528
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
    var_19 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_15)), (max((((/* implicit */unsigned long long int) var_8)), (var_10))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)0)), (max((var_2), (((/* implicit */long long int) (unsigned char)13)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) -971485055627395877LL)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))), ((_Bool)1)));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (max((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (var_14) : (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])))), (((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))) : (((unsigned long long int) (_Bool)1))));
            }
        } 
    } 
}
