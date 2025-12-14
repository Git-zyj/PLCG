/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166587
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
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) (-(((var_11) & (var_17)))))), (max((((/* implicit */unsigned int) max((((/* implicit */short) var_7)), ((short)32758)))), (((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) (short)32742)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32720)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-32757))));
        var_20 = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_21 = ((/* implicit */int) ((unsigned char) (short)32757));
    }
}
