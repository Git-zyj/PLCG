/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160445
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
    var_20 = ((/* implicit */unsigned char) var_13);
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) -2133948873))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_22 &= ((/* implicit */unsigned short) 6502704152056481236LL);
        arr_2 [i_0] = arr_0 [(_Bool)1];
    }
    for (signed char i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        var_23 *= ((/* implicit */signed char) 3743943000U);
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_4 [i_1 - 2] [i_1 + 2]))));
        arr_5 [(unsigned char)4] [(unsigned char)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_1] [i_1])))) / (arr_4 [i_1] [i_1 - 3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) arr_3 [i_1 - 1])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32751)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 1])) ? (arr_4 [i_1 - 3] [i_1 - 3]) : (arr_4 [i_1 - 2] [i_1 - 2]))));
    }
}
