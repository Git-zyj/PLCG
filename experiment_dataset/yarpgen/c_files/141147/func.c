/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141147
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
    for (int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        arr_2 [2] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) 8126910489503194982LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7168))) : (11912497695305155779ULL))))), (((/* implicit */unsigned long long int) var_10))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_14);
    }
    var_17 = ((/* implicit */int) var_13);
}
