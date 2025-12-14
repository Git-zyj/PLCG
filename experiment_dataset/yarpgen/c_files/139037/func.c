/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139037
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
    var_19 -= ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_20 = min((min((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-32767))))));
    }
    var_21 = var_10;
}
