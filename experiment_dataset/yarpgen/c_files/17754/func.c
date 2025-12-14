/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17754
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
    var_12 -= ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (0U))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_10)))))) : (min((min((((/* implicit */unsigned long long int) (signed char)-115)), (var_9))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-1)), (0U)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_11 [i_3] [i_0] [i_2] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((arr_8 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1]) / (arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1])));
                        var_13 ^= ((/* implicit */unsigned long long int) ((arr_10 [i_3] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_3]) <= (arr_10 [i_3] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_3])));
                    }
                } 
            } 
        } 
    }
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((var_2), (var_2))) | (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)50)) ^ (((/* implicit */int) var_0)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) var_5)) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50)))))))) : (1166914953777356813ULL)));
}
