/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102282
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 2]))));
        arr_4 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [i_0 + 1]));
        arr_5 [i_0] = ((/* implicit */unsigned int) (+(938214944)));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12977862233955281437ULL)) ? (((/* implicit */int) (short)11162)) : (((((/* implicit */_Bool) (unsigned short)18197)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-11163))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned short) var_5)))));
}
