/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148838
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
    var_12 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0 - 1]);
        arr_5 [8] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0]))))) / (max((((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-9223372036854775806LL))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
    var_13 = ((/* implicit */signed char) var_2);
}
