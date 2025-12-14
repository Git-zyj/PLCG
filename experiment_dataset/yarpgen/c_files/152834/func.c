/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152834
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
    var_16 = ((/* implicit */_Bool) ((var_2) / (((((/* implicit */_Bool) min((var_5), (0U)))) ? (((/* implicit */int) (signed char)-31)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(var_5))), (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (443417046U)))))) ? (var_6) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_3), (var_7)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (min((((/* implicit */int) arr_1 [i_0])), (var_2))) : (((((/* implicit */_Bool) (signed char)7)) ? (var_4) : (((/* implicit */int) var_15))))))) ? (((/* implicit */int) min((((/* implicit */short) var_7)), ((short)11324)))) : (((/* implicit */int) (short)6)))))));
        var_19 = ((/* implicit */signed char) ((unsigned char) min((var_8), (((/* implicit */unsigned char) arr_0 [i_0])))));
        var_20 = ((/* implicit */int) var_15);
    }
    var_21 |= ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) (unsigned char)17)));
}
