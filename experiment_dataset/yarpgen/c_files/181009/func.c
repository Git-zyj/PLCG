/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181009
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) 10246576399191442880ULL);
        arr_4 [4ULL] [6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) % (var_7)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) ^ (((/* implicit */int) arr_2 [i_0] [2]))))));
        var_16 = ((/* implicit */int) (((!(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))) && (((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (max((((/* implicit */int) var_14)), (var_12))))))));
        var_17 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    var_18 = ((/* implicit */int) ((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
