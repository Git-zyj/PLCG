/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113045
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) var_15);
        var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1848815343)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_1 [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9))))))))));
    }
    var_19 = ((/* implicit */_Bool) var_12);
    var_20 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)187))))), (((((_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (_Bool)1))))) : (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
}
