/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142749
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned char) 4248501528U);
        var_14 = ((/* implicit */short) var_10);
        arr_3 [i_0] |= ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_4 [i_0] [8U] = ((/* implicit */int) 46465777U);
        arr_5 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)21159)) : (((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */unsigned long long int) (signed char)-107)), (var_8)))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
    }
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (((((~(var_4))) >> (((((/* implicit */int) max(((unsigned short)49656), (((/* implicit */unsigned short) var_3))))) - (65445))))) <= (((/* implicit */long long int) ((/* implicit */int) ((4143705984637394348ULL) != (((/* implicit */unsigned long long int) 144115188075855871LL)))))))))));
}
