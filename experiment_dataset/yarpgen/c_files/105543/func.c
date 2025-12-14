/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105543
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
    var_10 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((/* implicit */_Bool) (unsigned short)37864)) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) (unsigned short)27644)))))) << (((var_7) - (2945825648472124164ULL)))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((1U) << (((1920707471U) - (1920707468U))))))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))))) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
    }
    for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max((((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4294967287U) == (var_9))))))), (((((/* implicit */_Bool) ((short) var_9))) ? (max((var_7), (((/* implicit */unsigned long long int) var_5)))) : ((-(18322620609985030780ULL))))))))));
        var_14 = ((/* implicit */int) var_7);
    }
    var_15 = ((((/* implicit */_Bool) 18322620609985030780ULL)) ? (((((/* implicit */_Bool) (unsigned short)27664)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37891))) : (2766965987U))) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(var_6))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))))));
}
