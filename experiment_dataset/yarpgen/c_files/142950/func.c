/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142950
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max(((((+(var_2))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-1))))))))))));
        arr_2 [i_0] |= ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_1 [10ULL])) - (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */unsigned int) min((((((/* implicit */int) arr_0 [i_0] [2U])) & (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1])))))))) : ((~(((unsigned int) var_11)))));
    }
    for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_18 = arr_0 [i_1] [i_1];
        var_19 = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])))));
    }
    var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((long long int) (short)-5))))) ? (((((/* implicit */_Bool) ((signed char) var_15))) ? (((((/* implicit */_Bool) 4298584208376313552ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45830))) : (11824045150460912906ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) == (var_9))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1)))))));
}
