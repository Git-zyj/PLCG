/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178253
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        arr_2 [i_0] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) == (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (9095148960328237850ULL)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_1]) ? (((/* implicit */int) arr_5 [(short)20])) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_5 [i_1]))));
        arr_6 [0ULL] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [i_1]), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */int) arr_3 [i_1])) : ((((_Bool)0) ? (((/* implicit */int) arr_5 [(signed char)8])) : (4095)))))) ? (((arr_4 [i_1] [i_1]) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? ((+(((/* implicit */int) arr_4 [i_1] [18])))) : (((/* implicit */int) min((var_11), (((/* implicit */unsigned char) arr_4 [i_1] [i_1]))))))));
        var_16 = ((/* implicit */unsigned char) ((var_9) << ((+(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (signed char)28)) : (var_13)))))));
    }
    var_17 -= ((/* implicit */unsigned short) min((((/* implicit */int) var_3)), ((-(4095)))));
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (var_1)))) ? (min((-1751111491), (((/* implicit */int) (short)(-32767 - 1))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))))) <= ((-(var_13)))));
    var_19 = ((/* implicit */unsigned long long int) var_11);
}
