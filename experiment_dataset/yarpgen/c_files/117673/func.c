/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117673
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (18446744073709551604ULL)))) ? (((((/* implicit */_Bool) 937568016)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) : (0)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */long long int) (unsigned char)0)), (var_6)))))));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) 12ULL)) ? (31ULL) : (0ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_12 -= (signed char)126;
        var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)23714))));
        var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1]))));
        var_15 -= ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) * (var_2)))));
    }
}
