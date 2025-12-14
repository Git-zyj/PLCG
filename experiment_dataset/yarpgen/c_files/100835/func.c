/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100835
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4978064475050029529ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15420))) : (689502209842691519ULL))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (short)21454))) & (((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (var_5)))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) & (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_17))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) 689502209842691492ULL)) ? (var_6) : (((/* implicit */long long int) arr_0 [i_0 - 2] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)14877)) << (((((/* implicit */int) arr_1 [i_0])) - (31226)))))) : (((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
    }
    var_23 = ((/* implicit */_Bool) var_4);
    var_24 -= ((/* implicit */int) ((((((unsigned long long int) (short)-2545)) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-2016718887)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (var_4))))))));
}
