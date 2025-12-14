/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141393
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
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((-(968895698U))))))));
        var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1))));
        var_21 = ((/* implicit */unsigned int) 4969071640512209226ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 968895698U))));
        var_23 += 13477672433197342399ULL;
    }
    var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 13477672433197342390ULL)) ? (((/* implicit */int) (short)-28)) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-26)) + (2147483645)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) 968895703U)) ? (3326071597U) : (968895708U)))))));
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)26)), ((unsigned short)39262))))))))))));
}
