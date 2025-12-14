/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178203
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) (~(1379340024)));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(((/* implicit */int) var_8)))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 + 1]))))), ((~(((((((/* implicit */int) var_16)) + (2147483647))) << (((((/* implicit */int) var_10)) - (42))))))))))));
        var_20 = ((/* implicit */unsigned short) (_Bool)1);
        var_21 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_2 [i_1 + 1] [i_1 + 1]), (((/* implicit */unsigned int) var_10)))))));
    }
    var_22 = ((/* implicit */signed char) var_14);
    var_23 = ((/* implicit */short) max((var_0), (((/* implicit */long long int) ((max((-5658967558450504213LL), (var_15))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))))));
}
