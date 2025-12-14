/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158625
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
    var_13 &= ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (var_4)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_2 [i_0])) / (15555806299804370229ULL)));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_2 [i_0]));
    }
}
