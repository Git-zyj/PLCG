/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175722
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)244))));
        var_12 = ((/* implicit */short) ((arr_1 [i_0]) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_1 [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)17213)))) : (((/* implicit */int) arr_1 [i_0])))) : ((((+(((/* implicit */int) (unsigned short)59058)))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)17760)) : (var_5)))))));
        var_13 |= ((/* implicit */unsigned char) ((arr_1 [i_0]) && (((/* implicit */_Bool) min((((((/* implicit */int) (short)25284)) - (((/* implicit */int) (unsigned char)178)))), (((/* implicit */int) max((((/* implicit */unsigned short) (short)-16410)), ((unsigned short)6468)))))))));
    }
    var_14 = ((/* implicit */int) ((unsigned short) 12590146112323388525ULL));
}
