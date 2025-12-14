/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113731
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((_Bool) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
        var_17 = ((/* implicit */int) ((unsigned long long int) arr_0 [i_0]));
    }
    var_18 -= ((/* implicit */unsigned int) ((max((max((12838966601499997295ULL), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((int) var_1))))) <= (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (unsigned char)99))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)107)), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_19 = ((/* implicit */unsigned char) var_2);
    var_20 = ((/* implicit */signed char) ((unsigned char) var_12));
}
