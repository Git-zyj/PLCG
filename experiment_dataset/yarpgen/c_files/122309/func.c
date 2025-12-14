/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122309
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_0 [i_1])))) << (((min((((/* implicit */long long int) arr_0 [i_0])), (9223372036854775807LL))) - (42LL)))));
                    var_10 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [(short)4] [(short)4])) ? (16192296110177139590ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_1] [i_2])))) ^ (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0]))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2]))) | (arr_5 [i_0] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
}
