/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136808
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
    var_20 = ((/* implicit */unsigned char) var_16);
    var_21 = ((/* implicit */_Bool) (+(-526425141)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? ((+(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0]))))))));
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) max((var_10), (((((/* implicit */int) (unsigned char)106)) > (((/* implicit */int) (signed char)-82))))))), (max((arr_1 [i_0]), (((/* implicit */unsigned char) ((signed char) 15194411251025156791ULL)))))));
    }
}
