/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178866
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)33634))))));
                arr_5 [(unsigned char)0] [i_0] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (8230266894244471832LL))), (((/* implicit */long long int) ((((/* implicit */int) var_3)) ^ (3968)))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_0))))) ? (arr_3 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (5100107546881431005ULL)))));
                var_20 = max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)33612)) : (var_14))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_3 [i_1] [(unsigned char)7] [i_0]))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_15);
    var_22 = ((/* implicit */long long int) ((int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)3584)), (var_1)))), (var_17))));
    var_23 = ((/* implicit */long long int) (~(var_5)));
}
