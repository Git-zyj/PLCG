/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120297
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) (unsigned short)3489);
                arr_5 [i_1] [i_1] [i_0] = max((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)43411)) <= (var_9)))), (((((/* implicit */int) (unsigned short)3486)) - (((/* implicit */int) arr_4 [i_0] [i_1] [3ULL]))))))), (max((arr_1 [i_0]), (((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
            }
        } 
    } 
}
