/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113158
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
    var_19 = ((/* implicit */int) var_13);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */signed char) max((arr_0 [i_0] [i_0]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [7ULL])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) -1517822852))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0] [i_0])))) : (arr_0 [i_0] [i_0])))));
        arr_3 [(short)2] = ((/* implicit */unsigned char) ((signed char) arr_1 [i_0] [(short)9]));
    }
}
