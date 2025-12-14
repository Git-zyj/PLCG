/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127131
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
    var_16 = ((/* implicit */signed char) ((min((var_8), (max((10555422822310772142ULL), (((/* implicit */unsigned long long int) var_5)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3461386855U)) ? (18446744073709551615ULL) : (18446744073709551615ULL))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 *= ((/* implicit */unsigned short) min((arr_4 [i_1] [i_1]), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61037)))))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((/* implicit */unsigned long long int) var_5)), (0ULL))) : (((/* implicit */unsigned long long int) (+(arr_1 [i_0] [i_0]))))))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((arr_5 [i_0]) > (((/* implicit */unsigned int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))))))));
            }
        } 
    } 
    var_19 += ((/* implicit */long long int) var_15);
}
