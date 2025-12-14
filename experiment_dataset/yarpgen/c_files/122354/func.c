/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122354
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((int) (unsigned short)61168)), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)105)))))))));
    var_18 = ((((/* implicit */_Bool) (unsigned short)64963)) ? (((/* implicit */int) (unsigned short)61168)) : (-13));
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_0])) >= (((/* implicit */int) var_3))));
        var_20 = ((((/* implicit */_Bool) 1127722008U)) ? (((/* implicit */int) (unsigned short)5820)) : (((/* implicit */int) (unsigned char)60)));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~((~(arr_1 [i_0]))))))));
        var_22 = ((/* implicit */unsigned char) ((var_15) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
    }
}
