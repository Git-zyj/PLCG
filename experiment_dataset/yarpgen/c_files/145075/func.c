/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145075
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? ((((((+(var_1))) + (2147483647))) << (((arr_2 [i_0]) - (4300205807744896988LL))))) : ((+(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_1 [i_0])))))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) var_13);
    }
    var_17 = ((/* implicit */unsigned long long int) var_13);
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((268435455) != (((/* implicit */int) (_Bool)1)))))))) * (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) (unsigned char)149)) ? (var_5) : (((/* implicit */unsigned long long int) -158726307)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26887))))))))));
}
