/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125002
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) ((var_9) - (((/* implicit */int) (short)-16747)))))))) || (((/* implicit */_Bool) min((min((1125625028935680ULL), (131071ULL))), (((/* implicit */unsigned long long int) var_7)))))));
    var_12 += ((/* implicit */_Bool) (short)-24488);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) - (min((223380641802368419ULL), (223380641802368420ULL)))));
        var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1493342607U)), (18223363431907183197ULL))))));
    }
    var_14 = ((/* implicit */short) (~(((((/* implicit */unsigned int) (-(var_9)))) + (var_6)))));
}
