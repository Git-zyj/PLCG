/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114392
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (unsigned char)178))));
    var_19 ^= ((/* implicit */signed char) ((min((((((/* implicit */long long int) 0U)) & (var_10))), (((((/* implicit */_Bool) (short)4646)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))) : (var_14))))) % (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [(short)8] [i_2])))));
                    var_20 += ((/* implicit */long long int) (unsigned char)78);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) ? ((~(((/* implicit */int) (unsigned char)235)))) : (((/* implicit */int) arr_8 [(short)8]))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0]))) : (((/* implicit */int) (!((_Bool)1))))));
                }
            } 
        } 
    } 
}
