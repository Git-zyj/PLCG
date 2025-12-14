/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147954
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
    var_13 = ((/* implicit */_Bool) (unsigned char)154);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */int) var_5)) ^ ((~(((/* implicit */int) var_1)))));
        arr_4 [i_0] [i_0 + 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4372571573583238906LL))))) : (((var_11) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_10))))))));
    }
}
