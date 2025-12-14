/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17895
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4015199580508613191ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (var_7) : (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_9)))))) : (((/* implicit */int) var_9)))))));
    var_12 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_13 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_1] [i_0])))) + (((unsigned long long int) 3190109803U)))), (min(((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [(_Bool)1])))));
            arr_5 [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0 - 1])) ? (arr_2 [i_0 - 3] [i_1]) : (var_8)))) ? (arr_0 [i_0 - 1] [i_1]) : (arr_2 [i_0 + 1] [i_0 - 1])));
        }
        arr_6 [i_0] = ((/* implicit */_Bool) ((long long int) max((1ULL), (((/* implicit */unsigned long long int) (_Bool)1)))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) -98761177))));
        var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (arr_7 [i_2]) : (arr_7 [i_2])));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [14ULL] [5ULL]))))) : (((long long int) (_Bool)1))));
        arr_12 [13LL] [i_2] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-6947)))));
        var_16 = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
    }
}
