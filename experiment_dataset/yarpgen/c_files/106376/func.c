/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106376
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
    var_20 *= ((/* implicit */_Bool) max((var_18), (((/* implicit */signed char) var_16))));
    var_21 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) var_11);
        arr_3 [i_0] = min((18288510114553980846ULL), (((/* implicit */unsigned long long int) max(((short)-1), (((/* implicit */short) ((((/* implicit */int) (unsigned char)49)) != (((/* implicit */int) var_17)))))))));
        arr_4 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_0 - 1]), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) (-(63U)))) : (((((/* implicit */_Bool) 1485055676)) ? (((/* implicit */long long int) 86U)) : (arr_0 [i_0 + 1])))));
        var_22 |= ((/* implicit */unsigned char) max((max((17777823304169278680ULL), (((/* implicit */unsigned long long int) ((var_15) < (((/* implicit */unsigned long long int) var_9))))))), (((((/* implicit */_Bool) max((11644371941121669830ULL), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52015))) & (var_12)))))));
    }
}
