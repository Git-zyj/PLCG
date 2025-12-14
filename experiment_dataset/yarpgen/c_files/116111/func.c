/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116111
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
    var_20 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) arr_2 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) (-((-(arr_0 [i_0])))));
        var_22 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_1 [i_0] [i_0])))) | (((/* implicit */int) var_18))));
        arr_4 [11U] [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_0]) | (arr_0 [i_0])));
    }
}
