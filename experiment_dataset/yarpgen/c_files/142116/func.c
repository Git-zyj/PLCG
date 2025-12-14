/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142116
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
    var_19 &= ((/* implicit */unsigned int) var_3);
    var_20 = ((/* implicit */unsigned char) var_0);
    var_21 = ((/* implicit */int) var_16);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_17);
        var_22 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1684145476)) ? (((/* implicit */int) (short)-27648)) : (((/* implicit */int) (short)-27648))))), (max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_15)), (var_1)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_4)) : (var_2)))))));
    }
}
