/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114887
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [10ULL] [(unsigned char)0])) ? (var_7) : (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((-3676845904200029059LL) + (9223372036854775807LL))) << (((((/* implicit */int) arr_2 [i_0])) - (17887)))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115)))));
    }
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned int) (short)-15032)), (27U)));
    var_19 = ((/* implicit */signed char) var_6);
}
