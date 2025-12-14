/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151970
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
    var_18 = ((/* implicit */unsigned short) var_17);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) / (1972024242)));
        arr_2 [i_0] = (signed char)87;
        arr_3 [i_0] [2ULL] |= (!(((/* implicit */_Bool) var_2)));
        arr_4 [i_0] = arr_0 [i_0] [(signed char)1];
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_7 [12U] = ((/* implicit */short) ((1787100556) * (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1])) != (((/* implicit */int) arr_5 [i_1] [i_1])))))));
        arr_8 [i_1] = (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (-377365435973067577LL)))), (max((((/* implicit */unsigned long long int) (_Bool)0)), (var_17))))));
        var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_1])))) >> (((((/* implicit */int) (signed char)59)) - (51))))) | (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)180)))) ? (((/* implicit */int) ((signed char) (signed char)-94))) : (((/* implicit */int) (unsigned char)0))))));
    }
}
