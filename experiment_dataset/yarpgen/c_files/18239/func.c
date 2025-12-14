/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18239
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
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_0))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34))) % (((unsigned int) 1643309806U)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((((/* implicit */int) arr_2 [10ULL])) != (((/* implicit */int) arr_2 [(_Bool)1])))))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (short)-1))));
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_8))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_24 |= ((/* implicit */short) (!(max(((!(((/* implicit */_Bool) arr_4 [i_1])))), (((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) (unsigned short)21270))))))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min(((unsigned short)7018), (var_15))))))) ? (((((/* implicit */int) ((unsigned short) var_6))) | (((/* implicit */int) (signed char)-105)))) : ((~(((/* implicit */int) arr_4 [i_1]))))));
    }
}
