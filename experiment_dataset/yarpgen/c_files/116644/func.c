/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116644
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) 3190657023U)) < (1102094907543088129LL)));
        arr_2 [i_0 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) 16777152U)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46)))));
    }
    for (short i_1 = 1; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(530767324U)))) ? (((/* implicit */int) ((arr_1 [i_1 - 1]) || (arr_1 [9ULL])))) : (0)));
        var_14 &= (+((((_Bool)0) ? (((((/* implicit */_Bool) arr_4 [4LL] [4LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3079))) : (1126670322U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))));
    }
    var_15 = ((/* implicit */unsigned long long int) (~(max((max((var_12), (var_12))), ((~(((/* implicit */int) (_Bool)1))))))));
}
