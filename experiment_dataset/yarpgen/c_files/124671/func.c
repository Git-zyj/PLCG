/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124671
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
    var_15 = ((/* implicit */short) ((long long int) var_12));
    var_16 -= ((/* implicit */unsigned long long int) var_14);
    var_17 -= ((/* implicit */signed char) var_3);
    var_18 -= ((/* implicit */signed char) ((long long int) ((short) max((-8955723647313801660LL), (8955723647313801680LL)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (-4654087345812499410LL)))) ? (((/* implicit */int) min(((short)-1), (((/* implicit */short) (signed char)42))))) : (((/* implicit */int) var_3)))))));
                var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 18446708889337462784ULL)))) == (((((/* implicit */unsigned long long int) 4654087345812499420LL)) / (35184372088806ULL)))));
            }
        } 
    } 
}
