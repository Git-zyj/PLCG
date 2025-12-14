/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15874
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
    var_17 *= var_8;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_0 [i_0]), (arr_1 [i_0])))) & (max(((-(((/* implicit */int) (unsigned short)7)))), (((((/* implicit */int) var_3)) & (((/* implicit */int) arr_0 [(unsigned short)5]))))))));
        var_19 *= arr_1 [i_0];
    }
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */int) var_11)) | (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4)) || (((/* implicit */_Bool) var_10))))))))));
}
