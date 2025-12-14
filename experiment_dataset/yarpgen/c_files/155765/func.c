/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155765
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
    var_19 = (+((-(var_13))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1 + 1])))) | (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2 + 1])))))));
                    var_20 = ((/* implicit */unsigned char) ((_Bool) arr_1 [i_0]));
                    arr_10 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18369173441002111221ULL)) ? (((/* implicit */int) arr_7 [12ULL] [i_2 + 3] [(short)1])) : (((/* implicit */int) arr_0 [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 3] [i_1 + 1] [i_2])) ? (((/* implicit */int) arr_5 [i_2 + 3] [i_1 + 1] [i_2 + 1])) : (((/* implicit */int) arr_5 [i_2 + 3] [i_1 + 1] [i_2 + 2]))))) : (min((min((((/* implicit */unsigned long long int) var_9)), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [1ULL])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5))))))));
                    arr_11 [i_0] [i_2] [i_2] = ((/* implicit */short) arr_2 [i_2]);
                }
            } 
        } 
    } 
}
