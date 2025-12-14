/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183150
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)67)), (arr_0 [i_0])))))) + (2147483647))) >> (((((((/* implicit */_Bool) 1026494406U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57344))) : (arr_1 [i_0 - 3]))) - (57335LL)))));
        var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2687316118U)) <= (15373926275752164985ULL))))) & (max((((/* implicit */unsigned int) arr_0 [i_0])), (2097448633U)))))), (((((/* implicit */long long int) 1879172526U)) | (var_2)))));
        arr_3 [i_0 - 3] = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) (((_Bool)1) ? (var_5) : (-7126114354705338209LL)))) | (((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17037))) : (144044819331678208ULL)))))));
    }
    var_15 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-17063))));
    var_16 *= ((/* implicit */_Bool) var_0);
    var_17 -= ((/* implicit */short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)24073))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) 1040055548321436301LL)) ? (((/* implicit */long long int) var_12)) : (var_2)))))));
    var_18 -= ((/* implicit */unsigned long long int) (-(var_12)));
}
