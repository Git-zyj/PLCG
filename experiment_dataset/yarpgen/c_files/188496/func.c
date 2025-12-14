/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188496
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2])) ? (8752668969045436326ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1404755376703642615LL) > (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1] [(short)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53576))) : (var_5))));
        var_15 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) (unsigned short)7)) ? (var_13) : (-1404755376703642633LL))))), (((/* implicit */long long int) min((((signed char) var_14)), (arr_1 [i_0]))))));
        var_16 = ((/* implicit */short) var_6);
        arr_3 [i_0 + 1] = ((/* implicit */signed char) 0LL);
    }
    var_17 = ((/* implicit */long long int) (unsigned short)32704);
}
