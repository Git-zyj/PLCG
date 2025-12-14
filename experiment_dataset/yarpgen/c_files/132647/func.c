/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132647
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1] [3U] = (_Bool)1;
                var_19 = ((/* implicit */unsigned int) ((arr_3 [i_0 - 4]) << (((((/* implicit */int) ((short) ((arr_3 [i_0]) / (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))))) + (31071)))));
                var_20 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_1])) ? (arr_4 [i_0] [i_0 + 2] [i_0 + 1]) : (arr_1 [i_0] [i_1]))), (((/* implicit */unsigned long long int) ((17592186044416LL) & (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [(short)2] [i_1])))))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) > (var_9)))), (min((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_5)))))) >> (((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_13)) + (132)))))) : ((~(arr_1 [i_0] [i_1]))))) - (2021ULL))))))));
            }
        } 
    } 
    var_22 = var_9;
}
