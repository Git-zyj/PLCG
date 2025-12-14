/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118552
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
    for (long long int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 34359738368LL)) ? (-1539721704) : (((/* implicit */int) arr_1 [i_0 - 3]))))), (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_0 [i_0 + 1] [i_0 - 1])))));
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((((/* implicit */long long int) min(((unsigned char)15), (arr_1 [i_0 - 1])))), (max((-28LL), (((/* implicit */long long int) ((1539721719) | (((/* implicit */int) arr_1 [i_0]))))))))))));
    }
    var_13 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_6)), ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 1562810688)) : (0ULL)))))));
}
