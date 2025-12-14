/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162552
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
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) (unsigned char)81)))))) - ((+(((var_12) ? (var_16) : (var_16))))))))));
        arr_3 [(unsigned short)0] |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        var_19 = ((-4831713034327179548LL) <= (9223372036854775807LL));
        arr_4 [i_0] = (((~(min((arr_0 [i_0]), (var_7))))) == (((((/* implicit */_Bool) (+(var_8)))) ? (min((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0]))) : (var_7))));
    }
    var_20 = ((/* implicit */unsigned int) min((var_20), (((1128327392U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) (unsigned char)51)))))))))));
    var_21 = (!(((/* implicit */_Bool) var_11)));
    var_22 = ((/* implicit */unsigned int) var_7);
}
