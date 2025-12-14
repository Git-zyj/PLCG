/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158162
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) ((min((((arr_2 [i_0] [(unsigned char)24]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((arr_3 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) - (((((/* implicit */_Bool) ((arr_3 [i_0]) >> (((8995241174450253855ULL) - (8995241174450253849ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) : (arr_3 [i_0])))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_16))));
    }
    var_19 = ((/* implicit */unsigned char) var_13);
}
