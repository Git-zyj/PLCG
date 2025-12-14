/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137884
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
    var_14 = ((/* implicit */unsigned long long int) (-(max(((~(var_9))), ((+(((/* implicit */int) var_8))))))));
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)-17179)), (281440616972288ULL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(max(((~(arr_1 [i_0] [i_0]))), (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [2LL] [i_0]))))))));
        var_16 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 281440616972288ULL))))), ((~(arr_1 [i_0] [i_0])))))));
    }
    var_17 = ((/* implicit */unsigned int) (~(18446462633092579327ULL)));
    var_18 |= (-(max((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) var_5))))), ((-(18446462633092579327ULL))))));
}
