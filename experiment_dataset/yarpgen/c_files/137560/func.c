/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137560
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
    var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_3)), (17857379561247138087ULL)));
    var_12 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)23)), (min((((((/* implicit */_Bool) 1276648776U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (16352831123414879767ULL))), (((/* implicit */unsigned long long int) ((var_4) / (((/* implicit */int) var_5)))))))));
    var_13 -= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) var_5))))), (min((((/* implicit */long long int) 0)), (140720308486144LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 264175074)) ? (((/* implicit */unsigned int) 2147483647)) : (4294967295U))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 += ((/* implicit */long long int) var_10);
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
    }
}
