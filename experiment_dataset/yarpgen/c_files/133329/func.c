/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133329
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18014398509481952ULL)) ? (arr_6 [i_0] [i_0] [i_2]) : (((/* implicit */int) var_5))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (17151397437139231433ULL))))) % (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_8)) < (arr_0 [i_0]))))))))));
                    arr_10 [i_1] [i_1] [i_2] [i_1] &= ((/* implicit */int) ((_Bool) 1295346636570320183ULL));
                }
            } 
        } 
    } 
    var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned long long int) var_1)), (var_3)))) ? (((/* implicit */int) max((((unsigned char) (unsigned char)23)), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)232)) == (((/* implicit */int) var_10)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
}
