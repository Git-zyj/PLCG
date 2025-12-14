/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141647
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
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_11)) + (2147483647))) >> ((((~(((/* implicit */int) (unsigned char)75)))) + (96)))));
    var_15 -= ((/* implicit */short) min((var_8), (var_5)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (((~(((unsigned int) var_2)))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) - ((+(((/* implicit */int) (unsigned char)185))))))))))));
        arr_2 [i_0] = min((((((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) (short)5278))))) & (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((2852695592U) - (2852695592U)))))))), (((/* implicit */unsigned int) ((1831365391U) < (1073479680U)))));
        var_17 = var_10;
        var_18 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_0 [i_0])))))));
    }
}
