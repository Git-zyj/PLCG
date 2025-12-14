/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121941
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))));
        var_15 += ((/* implicit */unsigned int) ((long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) arr_0 [i_0]));
        arr_3 [i_0] = ((/* implicit */short) arr_1 [i_0]);
    }
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) var_1)) * (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)-1))) <= (((/* implicit */int) min(((unsigned short)32145), (((/* implicit */unsigned short) var_9)))))))))))));
    var_17 = ((/* implicit */short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) << (((((/* implicit */int) var_13)) + (24114)))))));
    var_18 = ((/* implicit */signed char) var_9);
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_6))));
}
