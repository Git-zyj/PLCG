/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125335
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
    var_11 = ((/* implicit */unsigned char) ((unsigned short) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-23646))))));
    var_12 *= var_10;
    var_13 = ((/* implicit */unsigned int) (short)23670);
    var_14 &= (unsigned char)24;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_15 -= ((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0])), (((((((/* implicit */int) (unsigned char)216)) <= ((-2147483647 - 1)))) ? (((/* implicit */int) arr_1 [(unsigned short)6])) : (((((/* implicit */_Bool) (unsigned char)220)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_1 [i_0]))))))));
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) : (((unsigned int) arr_0 [(short)10]))))) : (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)8))) : (-5507812205915270660LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (short)-23646)) : (((/* implicit */int) (unsigned char)215)))))))));
    }
}
