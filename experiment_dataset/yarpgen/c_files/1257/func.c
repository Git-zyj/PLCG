/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1257
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
    var_15 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) max(((unsigned short)26435), (((/* implicit */unsigned short) var_11))))), (max((var_4), (((/* implicit */unsigned int) var_14))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-19958))))) & (-408451556))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) % ((-(((((/* implicit */long long int) 681410128U)) ^ (var_5)))))));
        arr_6 [i_0] = ((/* implicit */int) (~(min((((/* implicit */unsigned int) var_11)), (arr_1 [i_0])))));
    }
}
