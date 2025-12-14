/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140409
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
    var_11 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (signed char)-86)))))) : (2823670528U))), (((/* implicit */unsigned int) (+(max((var_9), (var_0))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) max((arr_1 [i_0] [i_0]), (max((max((arr_1 [i_0] [11ULL]), (arr_1 [i_0] [i_0]))), (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (short)-22675)))))))));
        var_13 = ((/* implicit */long long int) var_0);
    }
    for (long long int i_1 = 1; i_1 < 23; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_9), ((+(((/* implicit */int) ((arr_3 [i_1] [i_1]) == (((/* implicit */unsigned long long int) var_3)))))))));
        var_15 = ((/* implicit */signed char) (+((~(((/* implicit */int) var_4))))));
        var_16 = ((/* implicit */long long int) arr_2 [i_1]);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) var_1)))))));
        var_18 = ((/* implicit */unsigned char) ((signed char) var_6));
    }
}
