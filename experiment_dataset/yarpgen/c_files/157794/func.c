/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157794
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
    var_12 = ((/* implicit */unsigned short) (((~((~(((/* implicit */int) (unsigned short)56374)))))) >= (((/* implicit */int) (signed char)41))));
    var_13 *= ((/* implicit */int) ((_Bool) var_10));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) ((max((arr_1 [(short)13]), (((/* implicit */unsigned long long int) (short)-28784)))) >> (((max((((/* implicit */long long int) (short)-18099)), (var_11))) + (18162LL)))));
        var_15 -= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-102))));
        var_16 = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */short) (_Bool)1)), (arr_0 [i_0] [i_0]))));
    }
}
