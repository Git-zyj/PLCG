/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112663
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */int) (short)31172)) * (((((/* implicit */int) var_5)) >> (((/* implicit */int) (_Bool)1))))));
    var_11 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)31172)) ? (((((/* implicit */_Bool) var_1)) ? (12917808087083641627ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31200))))) : (((/* implicit */unsigned long long int) ((-1539352138) / (((/* implicit */int) (short)31193))))))), (((/* implicit */unsigned long long int) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_6)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)31171)))) : ((~(var_1)))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((-1LL) + (6LL)))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (18446744073709551606ULL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))));
        }
    }
}
