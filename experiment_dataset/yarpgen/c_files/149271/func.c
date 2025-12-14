/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149271
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 &= max((max((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))), (min((((/* implicit */unsigned int) arr_1 [i_0])), (1998501017U))))), (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)1217))))))));
        var_13 = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((-739206249), (((/* implicit */int) arr_1 [i_0])))))))), (var_3));
        var_14 = ((/* implicit */signed char) (+((+(min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_6)))))));
    }
    var_15 = ((/* implicit */signed char) var_3);
    var_16 = ((/* implicit */signed char) ((short) max((4041357837U), (((/* implicit */unsigned int) ((signed char) var_3))))));
    var_17 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) var_0)))))) ? (max((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (1941738515U)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (var_5))))))))));
}
