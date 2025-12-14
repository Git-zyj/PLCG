/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180135
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((min((1409415587), (var_9))), (-1868795046))))));
        var_20 |= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9043))) : (min((((/* implicit */unsigned long long int) var_8)), (var_15))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) var_4)), ((-(var_2)))))));
        var_21 = ((/* implicit */int) var_7);
    }
    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-9043)), (12752741640778335598ULL)))) || (((/* implicit */_Bool) (+(18446744073709551615ULL)))))) && (((/* implicit */_Bool) var_14))));
}
