/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184381
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (5472267884267363940ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */_Bool) (~(var_13)));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 2]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_12 [14ULL] = ((/* implicit */int) ((arr_10 [i_2 + 1] [i_2] [i_2]) | (arr_10 [i_2 + 1] [14] [i_2 + 1])));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_0 + 2] [i_1 - 1])) < (((/* implicit */int) arr_0 [i_0 - 3]))));
                }
            } 
        } 
        arr_13 [20ULL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_2 [i_0 - 1])));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (var_11)))) ? (var_4) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) var_17)))), (((/* implicit */int) var_6)))))));
    var_23 = ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_9)));
}
