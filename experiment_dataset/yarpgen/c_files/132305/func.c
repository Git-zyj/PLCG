/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132305
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) 3596748556U)) ? (3596748556U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned short) (short)0))))) ? (((/* implicit */int) ((((/* implicit */long long int) 698218747U)) > (-8377834231166785696LL)))) : ((-(((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16768041125348979850ULL)) ? (1678702948360571765ULL) : (((/* implicit */unsigned long long int) 16760832U))));
    }
}
