/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147833
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 3401787318142040268ULL)))) ? (((/* implicit */int) (short)16258)) : (((/* implicit */int) ((arr_1 [i_0]) < (arr_1 [i_0]))))))) : (((arr_1 [i_0]) & (max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0])))))));
    }
    var_13 = ((/* implicit */int) min((var_13), ((~(((/* implicit */int) (short)16240))))));
}
