/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179825
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) (~(233887429468886864LL)));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)32763)))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) (short)-32763))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) 9223372036854775807LL))))) + (((/* implicit */int) ((unsigned char) (short)32763)))))) : (((((/* implicit */_Bool) (short)-9278)) ? (9223372036854775783LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32763))))))))));
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_7))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((var_6) || (((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) -9223372036854775793LL)))))))));
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) 9223372036854775781LL);
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (9223372036854775781LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (278164976U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((var_1) % (((/* implicit */int) arr_3 [i_1])))))));
    }
}
