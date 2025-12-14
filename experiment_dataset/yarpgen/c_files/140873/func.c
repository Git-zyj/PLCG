/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140873
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
    var_19 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = arr_2 [i_0] [i_0];
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) - ((-(arr_1 [i_0])))));
    }
}
