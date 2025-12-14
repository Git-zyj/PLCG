/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115356
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0])))));
        var_15 = (((((!(((/* implicit */_Bool) arr_1 [i_0 + 1] [3LL])))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7784274210180764020LL))) : ((+(arr_0 [i_0] [i_0]))))) - (((long long int) (_Bool)1)));
    }
    for (long long int i_1 = 3; i_1 < 17; i_1 += 3) 
    {
        var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(877384649245538811LL)))))) ? (((((/* implicit */_Bool) ((5549693837084521173LL) ^ (arr_3 [10LL])))) ? (max((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL)))) : (((arr_4 [i_1] [i_1]) % (arr_4 [i_1] [i_1]))))) : (((max((arr_3 [14LL]), (-9223372036854775779LL))) % ((-(arr_3 [18LL])))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((((((long long int) (((_Bool)1) ? (arr_3 [(_Bool)1]) : (arr_3 [2LL])))) + (9223372036854775807LL))) << ((((~(arr_3 [(_Bool)1]))) - (2611269632536608123LL)))))));
    }
    for (long long int i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        var_18 = arr_4 [14LL] [i_2];
        var_19 += ((/* implicit */_Bool) ((arr_5 [i_2]) - (min((((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (arr_3 [8LL]) : (arr_4 [i_2] [i_2]))), (max((-1LL), (arr_6 [i_2])))))));
        var_20 = ((max((max((arr_4 [i_2] [i_2 - 2]), (arr_5 [i_2]))), ((-(arr_5 [i_2]))))) ^ (-1731405781347513528LL));
        var_21 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_6 [i_2]) : (arr_5 [i_2])))) ? (((arr_4 [i_2] [i_2]) - (arr_3 [i_2]))) : (((((/* implicit */_Bool) 7015742400472835376LL)) ? (-3103654992794266904LL) : (arr_3 [i_2]))))) & (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_2]) < ((-(576460752286646272LL))))))));
    }
    var_22 = var_1;
}
