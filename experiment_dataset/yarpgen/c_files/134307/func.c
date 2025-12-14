/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134307
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)19)))))))) ? (min((((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) arr_2 [i_0])) : (var_9)))), (((arr_1 [i_0]) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (arr_6 [i_0] [i_0] [i_1] [i_2])));
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (((!(((/* implicit */_Bool) 5704316652777680546ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 69169680403487178LL)))))))) : ((+(9223372036854775807LL))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) (_Bool)0);
    var_13 = var_7;
}
