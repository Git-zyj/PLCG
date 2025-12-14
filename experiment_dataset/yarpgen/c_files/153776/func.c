/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153776
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((/* implicit */unsigned int) arr_1 [i_0])), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 17880074228145744485ULL)) || (((/* implicit */_Bool) (unsigned char)255))))))))));
        var_11 -= ((/* implicit */signed char) 3737386353U);
    }
    /* LoopSeq 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */signed char) 566669845563807131ULL);
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(var_0))) | (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [18])), (0))))))) ? (min((((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [(unsigned char)8])), (1804741605)))), ((~(751203407U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)9480)) ? (((/* implicit */int) (unsigned short)63)) : (1804741605))))));
        var_14 = ((/* implicit */unsigned short) arr_3 [i_1] [i_1]);
    }
    for (short i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) 4294967291U);
        arr_10 [i_2 + 1] = ((/* implicit */unsigned int) (~((-((+(((/* implicit */int) var_10))))))));
    }
}
