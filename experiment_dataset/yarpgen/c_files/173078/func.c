/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173078
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */unsigned long long int) var_2)) / (min((var_0), (((/* implicit */unsigned long long int) var_5)))))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_1)))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) (((!(arr_0 [i_0]))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_22 &= arr_1 [i_0] [i_0];
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (12081467722971873969ULL) : (((/* implicit */unsigned long long int) -4928074285378474524LL))))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) arr_1 [i_1] [i_1]))))))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) max(((+(6365276350737677647ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))))));
    }
    var_24 = ((/* implicit */unsigned long long int) (signed char)24);
}
