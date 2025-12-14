/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15971
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
    var_14 |= ((/* implicit */unsigned long long int) var_1);
    var_15 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (arr_0 [i_0] [i_0]))), (min(((-(arr_0 [9ULL] [9ULL]))), (((/* implicit */long long int) 2930578461U))))));
                arr_4 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (-(8947198462994540257LL)))))))) * (((arr_2 [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) -635761318))))))));
                var_17 = arr_2 [i_1] [i_1];
            }
        } 
    } 
}
