/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154063
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = min(((~(((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (var_2) : (var_3))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)13361))))) ? (((((/* implicit */_Bool) var_13)) ? (2639354862136783770LL) : (arr_1 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) (short)3165)) ? (max((max((((/* implicit */long long int) (short)-1)), (1872909217841647318LL))), (min((-1682386818154602424LL), (var_8))))) : (0LL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (var_12)));
    var_16 = var_11;
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((1175631731350059077LL) <= (((max((((/* implicit */long long int) var_6)), (7005784423095270663LL))) % (((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (var_13))))))))));
}
