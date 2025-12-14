/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139528
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
    var_17 ^= ((/* implicit */short) var_8);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_14)) + (((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */long long int) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (638416991U)))) : (var_0)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(253304084571711938LL)))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_3 [i_0])))))));
                arr_6 [i_0] [i_1 - 1] = max((((/* implicit */long long int) var_1)), (arr_2 [(_Bool)1]));
                arr_7 [i_0] [i_1 - 1] [i_1] = ((/* implicit */int) ((((unsigned long long int) arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 1])) & (min((((/* implicit */unsigned long long int) arr_0 [i_1 + 1])), (min((((/* implicit */unsigned long long int) var_14)), (16993688130409954330ULL)))))));
                var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */long long int) 1202985153U)) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) % (5202684200032843911LL))))));
            }
        } 
    } 
}
