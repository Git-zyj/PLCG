/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11930
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)55504)) ^ (((/* implicit */int) (signed char)7))));
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65013))))) ? (((arr_2 [13ULL]) - (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) var_3)))))))))));
        var_14 -= ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) arr_0 [5] [5])) ? (((/* implicit */int) arr_1 [2LL])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0 + 2]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((short) arr_4 [i_1]));
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1]))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_5 [i_1])))))))));
    }
    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) == (11403978534323734633ULL))))));
}
