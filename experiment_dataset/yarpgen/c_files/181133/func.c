/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181133
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
    var_11 = ((/* implicit */unsigned char) 7272709228290391701ULL);
    var_12 = ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [11LL]))) : (1577221338U)))) ? (((/* implicit */long long int) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) (short)32751)))))) : (-5177746775483978399LL))) & (((/* implicit */long long int) ((unsigned int) arr_0 [i_0 + 1] [i_0 + 3])))));
        var_14 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (unsigned char)11))))) : (((((/* implicit */_Bool) (short)32725)) ? (((/* implicit */int) arr_1 [(unsigned char)7])) : (((/* implicit */int) arr_0 [10LL] [10LL]))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)32754)), (arr_0 [i_0 + 3] [i_0 - 2])))) : ((~(((/* implicit */int) (short)-32751)))));
        arr_2 [i_0] = ((/* implicit */short) (unsigned char)1);
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_6 [i_1]) ? (((((/* implicit */_Bool) max((676684690U), (((/* implicit */unsigned int) arr_5 [(unsigned char)18] [(unsigned char)18]))))) ? ((-(arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1])) + (((/* implicit */int) arr_6 [i_1])))))));
        var_15 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_1])) + (((/* implicit */int) var_2))))) - (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32726)))))));
    }
}
