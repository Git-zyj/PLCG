/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100535
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
    var_18 = ((/* implicit */long long int) max((1998036313), (max((min((((/* implicit */int) var_3)), (-1998036314))), (((/* implicit */int) (unsigned short)0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -1998036313)) : (-368529548387157226LL)))));
        arr_5 [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0])) * (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 11992942635878054851ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_10)))) % (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) ((signed char) var_1))) ? ((~(1998036314))) : (((/* implicit */int) var_14))))));
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) var_13)))))), (((unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))));
}
