/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117378
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (short)-16136)) ? (13349719382557342904ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) ((unsigned char) arr_1 [i_0])))))));
    }
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (~(687508349))))))))));
}
