/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148542
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
    var_16 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) var_5)), (-3505074361541133026LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((-(14045619346649216690ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
        arr_3 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-102)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)121)))));
    }
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)30389)))))))), ((((!(((/* implicit */_Bool) var_15)))) ? (((((/* implicit */_Bool) -3505074361541132996LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_13))) : (((/* implicit */unsigned long long int) ((long long int) var_13)))))))));
}
