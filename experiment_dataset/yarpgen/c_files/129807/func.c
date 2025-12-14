/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129807
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
    var_12 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((unsigned long long int) ((var_3) ? (((/* implicit */long long int) 2301892960U)) : (arr_3 [i_0])))))));
        var_14 = ((/* implicit */int) arr_3 [i_0]);
        arr_4 [i_0] = min((((((/* implicit */long long int) var_1)) % ((-(arr_3 [i_0]))))), (((/* implicit */long long int) ((_Bool) max((((/* implicit */int) var_2)), (arr_2 [(unsigned char)13] [i_0]))))));
        var_15 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-1)))))));
    }
    var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (var_9));
}
