/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159666
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
    var_17 = ((/* implicit */long long int) var_14);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 |= ((signed char) ((18446744073709551615ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132)))));
        var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 312048864)) ? (((((/* implicit */_Bool) (unsigned char)132)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (18446744073709551615ULL) : (arr_1 [i_0])));
    }
}
