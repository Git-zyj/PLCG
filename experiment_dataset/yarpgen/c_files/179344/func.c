/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179344
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
    var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1629298408)) ? (((/* implicit */int) (signed char)4)) : (var_1)))) ? (max((((/* implicit */long long int) var_7)), (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)19))))), (((/* implicit */long long int) var_0))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) (-((+(2996049087U)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(arr_0 [i_0] [i_0])))), (((min((((/* implicit */unsigned long long int) (signed char)6)), (13538220205196706373ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_16 = var_8;
        arr_5 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_4)))));
    }
    var_17 = (+((~(((/* implicit */int) var_6)))));
}
