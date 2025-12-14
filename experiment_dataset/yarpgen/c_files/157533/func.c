/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157533
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
    var_15 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) max((708392889U), (var_1)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) (short)17399)), ((~(((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) (short)-28816)) + (28826)))))))));
        var_16 &= ((min((((/* implicit */unsigned long long int) (_Bool)1)), (min((14807454437265845955ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)3584))))));
        var_17 = ((/* implicit */short) var_3);
    }
}
