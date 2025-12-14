/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167918
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
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_0 [i_0 + 2])))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_1 [i_0]))), (((/* implicit */long long int) max((((/* implicit */int) (short)0)), (arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_17)))) ? (max((((/* implicit */long long int) arr_0 [i_0 + 2])), (arr_1 [i_0]))) : (-1LL))) : (-5871200405703815466LL))))));
        var_22 += ((/* implicit */int) arr_1 [i_0]);
    }
    var_23 |= var_6;
}
