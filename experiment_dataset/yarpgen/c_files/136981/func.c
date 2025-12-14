/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136981
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
    var_16 = (~(-838677384));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_17 += ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? ((-(3404205841255953593LL))) : (((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0])), (var_2)))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23949)) << (((((/* implicit */int) (unsigned short)6782)) - (6775)))));
        var_19 += ((/* implicit */unsigned short) ((((min((-199393312), (var_3))) <= (var_13))) ? (((unsigned int) (-(((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
    }
}
