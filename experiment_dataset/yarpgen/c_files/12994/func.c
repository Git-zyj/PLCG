/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12994
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
    var_10 = min(((!(((/* implicit */_Bool) 16)))), (((var_4) > (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)2838)) : (((((/* implicit */_Bool) (short)-9202)) ? (((/* implicit */int) min(((short)-9171), (((/* implicit */short) (_Bool)1))))) : (((var_1) << (((((/* implicit */int) (unsigned short)3344)) - (3344)))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (2ULL))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_12 ^= ((/* implicit */_Bool) (+((((!(arr_1 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (18446744073709551614ULL)))))));
        arr_6 [(unsigned short)8] |= ((/* implicit */unsigned char) arr_1 [i_1] [i_1]);
        var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)8581)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_0 [i_1])))), (((((/* implicit */int) arr_1 [i_1] [(_Bool)1])) * (((((/* implicit */_Bool) -78899217)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned short)65530))))))));
    }
    var_14 = ((/* implicit */unsigned short) ((((_Bool) (unsigned char)75)) ? (var_0) : (((/* implicit */int) (_Bool)1))));
}
