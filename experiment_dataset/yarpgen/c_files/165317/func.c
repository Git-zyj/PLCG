/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165317
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */unsigned int) var_2);
        arr_5 [i_0 - 1] [i_0 + 1] = ((/* implicit */long long int) (short)17865);
        var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? ((-(((/* implicit */int) (unsigned char)122)))) : (((((/* implicit */_Bool) (short)-17855)) ? (((/* implicit */int) (short)-17857)) : (((((/* implicit */_Bool) (short)17865)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)9096))))))));
    }
    var_11 = ((/* implicit */long long int) var_4);
    var_12 = ((/* implicit */unsigned int) var_6);
    var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_4)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))) >> (((-4953308821380153299LL) + (4953308821380153327LL)))));
}
