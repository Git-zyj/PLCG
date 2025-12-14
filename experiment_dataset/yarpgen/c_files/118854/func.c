/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118854
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_8);
        var_10 = ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((((/* implicit */_Bool) arr_0 [(unsigned char)1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
    }
    var_11 = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_1)), (var_9))));
    var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))), (var_9)));
    var_13 = ((/* implicit */unsigned long long int) ((((max((var_0), (((/* implicit */unsigned int) var_5)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))))) & (((/* implicit */unsigned int) -1))));
}
