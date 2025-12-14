/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137222
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)42071))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)1023)), (4001496895U)))) : (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) (short)26783))))) ? (((((/* implicit */_Bool) (short)32498)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) (~(var_5))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) (signed char)1)) ? (1562592408) : (((/* implicit */int) (short)-1033))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) max(((unsigned char)215), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7)))))));
        arr_3 [i_0] = (+(min((arr_1 [i_0]), (arr_1 [i_0]))));
        arr_4 [i_0] = 12267869724463759546ULL;
    }
    var_13 -= min((((var_0) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-997))) & (13106850370028860125ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_10))) ? (max((1561196313), (var_6))) : (((/* implicit */int) (unsigned char)255))))));
}
