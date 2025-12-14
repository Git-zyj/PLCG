/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162162
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [13ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))) : (arr_0 [i_0 - 1])))) ? (2840000613U) : (((1454966683U) / (arr_1 [i_0 - 1] [i_0 + 1]))));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2840000624U))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (signed char)2))));
                        var_20 = ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-26)))))) / (var_17))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-2)))))));
}
