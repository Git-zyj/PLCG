/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185503
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
    var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned int) var_4)), (((/* implicit */unsigned int) var_3))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)87)) * (((/* implicit */int) var_0)))))) : (((/* implicit */int) var_8))));
    var_13 &= ((/* implicit */unsigned char) ((unsigned int) var_4));
    var_14 = ((/* implicit */short) var_5);
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (signed char)123))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_16 -= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)))))))));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_0 [10ULL]))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_1 [20ULL])))))))))))));
        var_18 = ((/* implicit */unsigned char) ((signed char) (unsigned char)3));
    }
}
