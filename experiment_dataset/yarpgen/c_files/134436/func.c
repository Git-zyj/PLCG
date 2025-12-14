/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134436
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
    var_14 = ((/* implicit */unsigned short) max(((-((~(((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) 992U)) ? (((/* implicit */int) ((unsigned short) var_10))) : (((/* implicit */int) ((unsigned short) var_12)))))));
    var_15 = ((((/* implicit */_Bool) ((((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) / (((/* implicit */int) var_0)))) >> ((((~(((/* implicit */int) var_10)))) + (16965)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] = var_0;
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1])) ? (0U) : (4294967295U))) << (((((arr_3 [17U] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) - (4210750393U)))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [16U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63376))) : (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62837))) : (((var_13) << (((((/* implicit */int) var_3)) - (1488)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 205889325U)) ? (arr_4 [i_0] [i_0]) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_3 [(unsigned short)4] [9U]))))))));
                arr_6 [i_0] [i_0] = ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0])) ? (arr_4 [i_0 - 1] [i_0]) : (arr_4 [i_0 + 1] [i_0 + 1])));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_8);
}
