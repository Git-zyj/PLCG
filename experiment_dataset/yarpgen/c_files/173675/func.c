/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173675
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
    var_19 -= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (1152886320234758144LL));
    var_20 = ((/* implicit */signed char) ((min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))) == (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-1178274627565932983LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((min((arr_1 [i_0 + 1]), (((/* implicit */int) (signed char)121)))), (((/* implicit */int) (unsigned short)30996)))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_6))))));
        arr_4 [i_0] = ((/* implicit */_Bool) 2298778298779885405ULL);
        arr_5 [i_0] |= ((/* implicit */long long int) ((arr_0 [i_0] [i_0 - 1]) ^ ((~(arr_0 [i_0] [i_0])))));
    }
}
