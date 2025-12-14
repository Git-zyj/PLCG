/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122580
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~(((/* implicit */int) arr_1 [(_Bool)1])))))));
        var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    var_19 &= ((/* implicit */_Bool) (-(((((/* implicit */int) max(((unsigned char)32), (var_16)))) + (((/* implicit */int) max((var_9), (((/* implicit */short) (_Bool)0)))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)47)) << (((min((((1189550610859561903ULL) * (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_2)))) - (12092860740385488438ULL)))));
    var_21 = ((/* implicit */unsigned char) (+(((((((/* implicit */int) (unsigned char)232)) == (((/* implicit */int) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((var_12) + (9223372036854775807LL))) << (((/* implicit */int) (unsigned char)0))))))));
}
