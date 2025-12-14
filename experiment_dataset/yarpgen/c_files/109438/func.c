/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109438
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
    for (signed char i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        var_15 = arr_1 [(short)7];
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((short)32767), (((/* implicit */short) (!(((/* implicit */_Bool) var_0))))))))));
            var_17 = ((/* implicit */int) var_8);
            arr_7 [11ULL] = ((/* implicit */short) (signed char)91);
            var_18 = ((/* implicit */short) 12554406793103212063ULL);
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned short) ((short) (_Bool)1))), (((unsigned short) (unsigned short)60623)))))));
        }
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((unsigned long long int) ((signed char) (_Bool)0))))));
}
