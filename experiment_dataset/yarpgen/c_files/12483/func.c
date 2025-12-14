/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12483
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((max((min((var_4), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)83)), (arr_0 [i_0])))))), (((/* implicit */long long int) min((((/* implicit */int) max((var_8), (var_3)))), (min((arr_1 [i_0]), (arr_0 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) min(((_Bool)0), (var_8)))), (max((4536264464118356448LL), (891895261941540834LL))))), (((/* implicit */long long int) min((((/* implicit */int) max((var_9), (((/* implicit */signed char) var_1))))), (max((((/* implicit */int) var_1)), (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (_Bool)0);
        arr_7 [(signed char)2] = ((/* implicit */_Bool) -1697824898);
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) 2068721780))));
    }
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) min((min((((/* implicit */long long int) min((var_6), (((/* implicit */signed char) var_8))))), (min((4536264464118356448LL), (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) min((min((var_10), (((/* implicit */int) var_11)))), (((/* implicit */int) min((var_8), (var_8))))))))))));
}
