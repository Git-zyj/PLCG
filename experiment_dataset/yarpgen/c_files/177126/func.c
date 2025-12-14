/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177126
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
    var_10 = ((/* implicit */unsigned char) (-(398105353U)));
    var_11 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_8)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_0] = ((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                    arr_9 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7959549208325159698LL)) ? (((((/* implicit */_Bool) min((3896861943U), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2]))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_5)))))) : ((+(((/* implicit */int) (signed char)27))))));
                    var_12 = ((/* implicit */short) max((((/* implicit */unsigned short) (_Bool)1)), (var_5)));
                    arr_10 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1] [i_0])))))));
                }
            } 
        } 
    } 
}
