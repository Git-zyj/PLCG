/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136941
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
    var_18 = ((/* implicit */signed char) min((var_16), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_5)))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_7))))));
    }
    for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (max(((~(((/* implicit */int) (_Bool)1)))), (((int) var_8))))));
        arr_6 [i_1] = ((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_16))));
    }
    var_22 = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
}
