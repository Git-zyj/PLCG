/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176889
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (signed char)7))));
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15378013936400431417ULL)) ? (3079678338810808195LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (3079678338810808179LL) : (-3079678338810808187LL))))));
        arr_2 [i_0] = (~(((/* implicit */int) (unsigned short)65529)));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_14 += ((/* implicit */unsigned long long int) -3079678338810808199LL);
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-56)))))));
        var_16 = var_11;
    }
    var_17 = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) ((unsigned long long int) var_0))))));
    var_18 &= var_0;
}
