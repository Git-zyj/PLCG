/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142313
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] &= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [18ULL]))) % (arr_3 [i_0] [i_0] [i_1])))) ? (min((arr_3 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((arr_0 [i_2]) << (((arr_0 [(signed char)8]) - (2482667105U))))))));
                    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_6 [(short)20])))) ? (((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2]))))) ? (((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? ((+(arr_2 [i_0]))) : (((arr_6 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) < (arr_2 [i_0]))) ? ((~(arr_2 [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) : (arr_2 [13U]))))))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_6);
}
