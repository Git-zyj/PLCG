/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139480
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
    var_14 = ((/* implicit */_Bool) min((((max((var_9), (var_6))) ? (((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))), (min((min((((/* implicit */unsigned int) var_8)), (var_11))), (var_2)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (var_3)))) ? (max((var_12), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (max((((/* implicit */int) min((var_6), (var_0)))), (((((/* implicit */int) var_13)) >> (((/* implicit */int) var_6))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_17 -= ((/* implicit */_Bool) ((min((var_4), (max((((/* implicit */unsigned int) (_Bool)1)), (2779001228U))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) min((var_13), (var_7)))))))));
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (var_12) : (var_2))) >> (((max((var_10), (var_4))) - (2600168777U)))));
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_3) + (var_10))) ^ (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_12)))))) ? (((((((/* implicit */int) var_8)) == (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_8)))))))) : (min(((+(var_3))), (((/* implicit */unsigned int) max((var_0), (var_8))))))));
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) ((var_13) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? ((+(var_1))) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) var_13)))))))));
        arr_9 [i_2] = ((/* implicit */_Bool) var_2);
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = max((((((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) | (var_5))), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (var_12))), (var_4))));
        arr_14 [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_5), (var_1)))) ? (((var_13) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_9))))) + (min((((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_2))), (((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    }
}
