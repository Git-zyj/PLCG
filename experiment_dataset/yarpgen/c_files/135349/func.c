/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135349
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
    var_10 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_5), (var_6)))) != (((/* implicit */int) max(((short)-32762), (((/* implicit */short) var_4)))))))), (max(((+(2194525979905705243ULL))), (((16252218093803846373ULL) % (((/* implicit */unsigned long long int) 4294967295U))))))));
    var_11 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) arr_2 [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) var_1);
        var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), (var_8)))) : ((~(((/* implicit */int) var_8)))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 144115188075855871LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) ? (((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) var_8)) - (35378))))) : (((/* implicit */int) ((short) var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (8932247228726229065ULL)))) ? ((+(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_8))));
}
