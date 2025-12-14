/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106346
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) ((int) ((signed char) arr_0 [(short)2])));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((unsigned long long int) -3331744070953181630LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -3331744070953181647LL))))))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-31842))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (short)31827)) ? (-8930578369487469446LL) : (((/* implicit */long long int) ((/* implicit */int) (short)31841)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_13 = ((/* implicit */int) (!((!((!(((/* implicit */_Bool) (unsigned short)32671))))))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) max((max((((/* implicit */unsigned short) arr_5 [(unsigned short)18])), (arr_4 [(unsigned char)6]))), (((/* implicit */unsigned short) arr_6 [i_1] [i_1]))))) : (((/* implicit */int) (short)31821)))))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [18LL])) ? (((/* implicit */int) min(((short)-31837), (((/* implicit */short) ((signed char) 3331744070953181608LL)))))) : (((int) (!(((/* implicit */_Bool) arr_5 [(_Bool)1]))))))))));
    }
    var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
}
