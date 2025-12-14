/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178414
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
    var_11 = ((/* implicit */unsigned char) (((+(min((17504469521722194938ULL), (((/* implicit */unsigned long long int) var_10)))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (var_3)))) ? (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >> ((((+(17504469521722194924ULL))) - (17504469521722194919ULL)))));
        arr_2 [i_0] = ((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) (unsigned char)80))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((unsigned char) var_5));
        var_14 *= ((/* implicit */_Bool) arr_0 [i_1]);
    }
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
}
