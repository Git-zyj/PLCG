/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1694
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
    var_17 = ((/* implicit */_Bool) var_16);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        arr_3 [i_0 + 4] [i_0 + 4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) - (((/* implicit */int) (unsigned char)9))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 3] [i_0])) / (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))) : (arr_1 [i_0 + 3])));
        arr_4 [i_0] [(unsigned char)7] = ((/* implicit */_Bool) max(((unsigned char)255), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15122))) : (4126869485U)))))));
    }
    var_18 = ((/* implicit */unsigned char) max((((int) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */long long int) 16777215U))))), (((/* implicit */int) var_13))));
}
