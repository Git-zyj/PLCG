/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116553
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
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-52)), (-121103906)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_1 [10U])) ? (arr_1 [(signed char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))))), (arr_1 [i_0]))) < (max((((/* implicit */unsigned long long int) 1348615078U)), (15529343556546964493ULL)))));
        var_16 = ((/* implicit */short) max((max((arr_1 [i_0]), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_14)) != (((/* implicit */int) arr_0 [i_0])))))))));
        var_17 = min((arr_0 [i_0]), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)64)) || (((/* implicit */_Bool) 2562828615U))))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_18 |= ((unsigned long long int) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), (arr_1 [i_1])));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) var_1);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_19 = ((((-1754081346) + (2147483647))) >> (((((/* implicit */int) (signed char)-25)) + (45))));
        var_20 = ((/* implicit */int) (signed char)3);
        arr_10 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2]))));
        var_21 = ((arr_1 [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))));
        arr_11 [i_2] [(signed char)3] &= ((/* implicit */int) ((arr_1 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) -919243249))) ? (var_11) : (((/* implicit */unsigned long long int) var_4))));
}
