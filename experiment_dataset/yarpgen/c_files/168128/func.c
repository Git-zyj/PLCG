/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168128
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2013265920U)) ? (0U) : (6U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 6U)) && (((/* implicit */_Bool) 7U))))) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (15U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))) : (((((/* implicit */_Bool) 4398045462528ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (5U)))))) : (min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -284869662)) ? (562949953421311LL) : (562949953421311LL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)24))) < ((((_Bool)1) ? (max((9223372036854775807LL), (-4581084560835286771LL))) : (min((((/* implicit */long long int) 536870911)), (9223372036854775807LL)))))));
                arr_7 [4ULL] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19858)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (22ULL)))))))));
            }
        } 
    } 
}
