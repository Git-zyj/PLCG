/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12260
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
    var_12 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)22458)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((-994794744) > (((/* implicit */int) (unsigned short)2047)))))) : (var_11)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) arr_1 [i_0] [i_1]);
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((short) (~(((/* implicit */int) (unsigned short)65535)))));
        }
        var_14 = arr_4 [i_0] [i_0];
        var_15 = ((/* implicit */short) arr_4 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) var_10))))), (min((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-18856))))), (var_3)))));
    }
}
