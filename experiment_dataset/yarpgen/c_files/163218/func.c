/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163218
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
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) (unsigned char)214)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_14)), ((unsigned char)9))))))), (max((min((((/* implicit */unsigned int) var_7)), (var_17))), (((/* implicit */unsigned int) (signed char)0))))));
    var_20 = ((/* implicit */unsigned char) ((((((var_12) / (((/* implicit */int) (unsigned char)245)))) * (((/* implicit */int) (short)0)))) != (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_11)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_21 |= 486801808U;
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_17))));
        arr_2 [12ULL] = ((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]);
    }
}
