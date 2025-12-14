/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110835
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)24608))))) ? (var_12) : (var_7)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_18 *= ((/* implicit */unsigned int) (signed char)-19);
            arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_0 - 1] [i_0 + 2] [i_0])), (var_1)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_4)))))))));
        }
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) ((unsigned int) (signed char)-97)))))))));
        arr_8 [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0]);
    }
    var_20 = ((/* implicit */short) var_12);
}
