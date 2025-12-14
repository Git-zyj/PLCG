/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105394
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
    var_19 = ((/* implicit */long long int) var_14);
    var_20 = ((/* implicit */unsigned short) ((min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (unsigned short)8324)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)17425)))))) + (min((max((((/* implicit */int) (unsigned short)32768)), (var_12))), (var_5)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_4);
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_1 [8LL] [i_0 - 2]))));
        arr_3 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned short)32781))) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (unsigned short)61787))))) ? (((arr_1 [i_0] [i_0]) / ((+(arr_1 [(unsigned short)18] [8U]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (min(((unsigned short)32777), (var_17)))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 16; i_1 += 2) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((short) (_Bool)1)))));
        var_23 = ((/* implicit */unsigned short) 18446744073709551606ULL);
        var_24 += ((/* implicit */short) ((-9223372036854775805LL) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 3])))));
        arr_7 [i_1] = ((/* implicit */unsigned short) var_2);
    }
}
