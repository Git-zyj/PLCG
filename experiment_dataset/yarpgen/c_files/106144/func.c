/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106144
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
    var_15 = (unsigned short)64851;
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_16 = var_5;
        arr_2 [i_0] = ((/* implicit */signed char) var_5);
        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) -914773824)) ? (var_0) : (((((/* implicit */_Bool) 914773823)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_11)))))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) max(((unsigned short)29785), (((/* implicit */unsigned short) (unsigned char)191))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 914773827)))))))));
    }
    for (int i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        arr_7 [i_1] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_1 + 2] [i_1])))), (((var_4) % (var_0)))))) ? (((int) arr_6 [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) >= (((/* implicit */int) arr_1 [i_1] [i_1]))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (unsigned short)29801))))) <= (max((((/* implicit */int) ((((/* implicit */int) (unsigned short)35751)) == (var_4)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)11366)) : (arr_4 [i_1] [i_1])))))));
    }
    var_19 = ((/* implicit */int) var_3);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)48867)) : (var_0))) >= (((/* implicit */int) var_5))))) <= (((/* implicit */int) var_6))));
}
