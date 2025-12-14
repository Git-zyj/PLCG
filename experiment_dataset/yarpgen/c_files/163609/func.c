/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163609
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
    var_15 = ((/* implicit */long long int) ((short) ((unsigned char) (!(((/* implicit */_Bool) (signed char)-16))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((short) max((((/* implicit */short) (signed char)-28)), (min(((short)-19179), (((/* implicit */short) arr_1 [i_0])))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((var_2) % (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)26034)) ? (((/* implicit */int) arr_2 [8ULL] [i_0])) : (((/* implicit */int) var_12))))))))))));
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) (unsigned short)35838)) == (((/* implicit */int) var_6))))), (var_3)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((max((((/* implicit */int) arr_2 [(short)12] [i_0])), (989168626))) | (((int) var_14))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14146)) ^ (((/* implicit */int) var_7))))) ? (max((638855782), (((/* implicit */int) (unsigned short)14146)))) : (((/* implicit */int) arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)161))))) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)14150))))))));
    }
}
