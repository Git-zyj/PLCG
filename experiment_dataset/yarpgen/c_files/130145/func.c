/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130145
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) + (var_4)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)7] [i_0])))))) && (((arr_1 [i_0] [i_0 + 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))))))));
        arr_2 [6ULL] |= ((/* implicit */short) (+(((var_4) << (max((26ULL), (20ULL)))))));
        var_14 -= ((/* implicit */unsigned int) ((signed char) min(((+(arr_1 [(signed char)8] [(signed char)8]))), (((/* implicit */unsigned long long int) var_7)))));
    }
    var_15 ^= ((/* implicit */unsigned int) var_1);
}
