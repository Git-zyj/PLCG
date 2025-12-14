/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138561
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
    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = (short)-18930;
        var_19 -= ((/* implicit */unsigned long long int) min((max((((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (var_9)))), (min((((/* implicit */int) (unsigned short)53723)), (arr_1 [(unsigned short)9]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)86)) : (arr_1 [i_0])))) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) max(((short)18950), (((/* implicit */short) (_Bool)0)))))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((6519294190258091142ULL), (((/* implicit */unsigned long long int) ((var_16) > (((/* implicit */long long int) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))))))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((max((1608675066718111325LL), (((/* implicit */long long int) (unsigned char)7)))) / (((/* implicit */long long int) (-(arr_1 [i_0]))))));
    }
}
