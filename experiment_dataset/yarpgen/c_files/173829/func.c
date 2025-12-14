/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173829
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) var_7))));
    var_11 = ((/* implicit */int) max((var_11), ((~(((((/* implicit */_Bool) 1133337773)) ? (((int) (unsigned short)30141)) : ((-(((/* implicit */int) var_0))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0])) - (7618)))));
        var_12 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1])) ^ (((/* implicit */int) (unsigned short)23108)))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_13 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_1] [i_1 - 1])))) & (max((((/* implicit */unsigned int) arr_4 [i_1 - 1])), (285251982U)))));
        var_14 *= ((/* implicit */unsigned short) max((((/* implicit */int) arr_4 [(unsigned short)11])), ((-(((/* implicit */int) arr_4 [i_1]))))));
    }
    var_15 = ((/* implicit */_Bool) (unsigned short)42427);
}
