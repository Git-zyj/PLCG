/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152442
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
    /* vectorizable */
    for (int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (arr_1 [i_0 + 3])));
        var_20 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4152471706994169411LL)) ? (3042193450178513266LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) % (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        var_21 = ((/* implicit */unsigned char) var_14);
    }
    var_22 = ((/* implicit */int) ((unsigned short) (+(max((((/* implicit */int) var_1)), (var_14))))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_6))));
}
