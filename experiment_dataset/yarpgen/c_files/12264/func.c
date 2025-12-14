/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12264
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [(signed char)11] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (((((/* implicit */int) var_4)) + (((/* implicit */int) var_9)))))) > (((/* implicit */int) ((unsigned char) max((var_12), (((/* implicit */short) var_8))))))));
        var_15 &= ((/* implicit */unsigned long long int) var_11);
        var_16 = ((/* implicit */_Bool) var_5);
    }
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_9))))))))) : (((((/* implicit */_Bool) (-(var_3)))) ? (var_5) : (max((((/* implicit */unsigned long long int) var_4)), (var_5))))))))));
}
