/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132766
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
    var_17 = ((/* implicit */signed char) min((var_17), (var_12)));
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_14)), (7ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) ((min((arr_0 [i_1 + 1]), (arr_0 [i_1 + 1]))) - (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned short)62064)), (arr_3 [i_0] [i_0]))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (10341762385498208663ULL)))))))));
                var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_0]))) : (arr_0 [i_0])))));
            }
        } 
    } 
}
