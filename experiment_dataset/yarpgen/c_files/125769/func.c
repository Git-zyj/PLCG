/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125769
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 += 32230257349165196ULL;
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-103))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_6 [5U] [4] = ((/* implicit */int) (unsigned char)124);
        arr_7 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)0))));
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */int) (short)7822))))) ? ((+(((/* implicit */int) arr_2 [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(signed char)0] [i_1])))))));
    }
    var_14 = var_4;
}
