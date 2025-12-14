/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113951
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) (unsigned short)5762)) : (((/* implicit */int) (signed char)86))))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)-15400))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)-15400), (var_13)))) ? (((/* implicit */int) min(((short)25918), (((/* implicit */short) var_3))))) : (((/* implicit */int) min(((unsigned short)53797), (((/* implicit */unsigned short) (short)-25919)))))))) : (((unsigned int) var_16))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32746)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (23ULL)))) ? (9223372036854775801LL) : (((/* implicit */long long int) ((/* implicit */int) min(((short)15394), ((short)-15402)))))))) - (var_11)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_21 += ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_0]));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!((_Bool)0))))));
    }
}
