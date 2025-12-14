/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118611
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (signed char)-1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 &= ((/* implicit */unsigned long long int) -3438418053832843213LL);
        arr_2 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) min((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (3438418053832843213LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((arr_1 [i_0]) && (((/* implicit */_Bool) 1194148219)))))));
    }
}
