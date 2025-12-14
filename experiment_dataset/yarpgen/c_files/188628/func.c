/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188628
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
    var_10 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_12 = var_8;
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_13 += ((/* implicit */unsigned short) 1076148913U);
        var_14 += ((/* implicit */unsigned int) arr_3 [i_1]);
    }
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)115)) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) 1027874234U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((3395346577U), (((/* implicit */unsigned int) 3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
}
