/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136244
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) min((((arr_0 [i_0]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0] [11]) : (((/* implicit */long long int) -1407017007))))))), ((!(((/* implicit */_Bool) arr_0 [i_0])))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((long long int) ((unsigned long long int) 4398046511103ULL))) : (((long long int) 15566034852653798037ULL))));
}
