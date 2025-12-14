/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147015
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (891146428)))) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) << (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)90)), (4294967290U)))) ? (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_12))))) : ((+(((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_20 &= ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) ((short) arr_1 [(unsigned short)8] [6LL]))) : (((/* implicit */int) max(((unsigned short)57459), (((/* implicit */unsigned short) (short)32767))))))) : (((/* implicit */int) var_15)));
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((short) var_2))))) ? (((((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1222121291U))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) 7)) : (var_17))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_10))))))))));
}
