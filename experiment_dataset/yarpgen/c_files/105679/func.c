/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105679
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
    var_18 = ((/* implicit */long long int) var_0);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_6)) : (0ULL)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] |= ((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)127)), (max((var_11), (min((var_14), (((/* implicit */unsigned short) var_16))))))));
        var_20 = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) arr_2 [i_0])) ? (18446744073709551610ULL) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (+(arr_1 [i_0]))))));
        var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (short)-7761)) : (((/* implicit */int) (unsigned short)15308))))));
    }
    var_22 -= ((/* implicit */long long int) var_14);
}
