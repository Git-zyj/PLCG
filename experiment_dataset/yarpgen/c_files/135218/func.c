/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135218
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
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-56))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 &= (short)(-32767 - 1);
        var_14 = ((/* implicit */short) max((((/* implicit */long long int) (short)32762)), ((-(arr_2 [i_0] [i_0])))));
        var_15 = ((/* implicit */long long int) min((var_15), (((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [10U]))) < (arr_0 [0U]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (-(((unsigned int) (short)-32756))));
    }
    var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (((long long int) var_5)))))));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_1))));
}
