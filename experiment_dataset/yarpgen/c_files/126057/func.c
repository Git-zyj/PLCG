/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126057
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [13U]))))), (min((var_6), (var_8)))));
        var_11 = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = arr_1 [i_0];
        var_12 = ((/* implicit */long long int) min((11586230129893927992ULL), (((/* implicit */unsigned long long int) (~(arr_1 [i_0]))))));
    }
    var_13 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 6597495599988317493ULL)) ? (776658515U) : (((/* implicit */unsigned int) 229240531))))));
    var_14 &= ((/* implicit */unsigned int) (signed char)-97);
    var_15 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)35803))))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (var_9)))))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_3))));
}
