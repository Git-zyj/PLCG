/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145540
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 + 1] [i_0 - 1])))));
        var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_4))))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (short)32767))))) ? ((-(((/* implicit */int) arr_3 [i_1] [i_1])))) : (((/* implicit */int) (signed char)-1))));
        var_18 = ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) arr_3 [(short)0] [i_1]))))));
    }
    var_19 |= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 805306368U)))))));
}
