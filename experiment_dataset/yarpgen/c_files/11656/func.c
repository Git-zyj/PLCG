/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11656
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
    var_14 ^= ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (max((arr_1 [10U]), (max((arr_1 [(unsigned short)2]), (arr_0 [i_0 - 4])))))));
        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)14)) == (((/* implicit */int) (unsigned short)1)))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(var_11)));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (unsigned short)60711))));
    }
}
