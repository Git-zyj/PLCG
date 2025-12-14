/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168851
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
        arr_3 [15ULL] [15ULL] = (+(var_2));
    }
    var_14 = ((/* implicit */long long int) 1987336838);
}
