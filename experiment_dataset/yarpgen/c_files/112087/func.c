/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112087
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
    for (long long int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_12 *= ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_13 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (arr_2 [i_0])))))));
        var_14 |= ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) arr_4 [i_1 + 1]);
        var_16 *= ((/* implicit */unsigned int) ((max((((/* implicit */int) arr_4 [i_1])), (((((/* implicit */int) (signed char)68)) * (((/* implicit */int) arr_3 [i_1])))))) >= ((+((+(((/* implicit */int) (_Bool)0))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_1);
}
