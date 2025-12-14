/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108594
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3053331595270406856ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((max((((/* implicit */unsigned int) 18)), (3911729938U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (var_11)))))))))));
    var_16 &= max((var_9), (((/* implicit */unsigned int) ((15833200541287785304ULL) < (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) 0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_0 - 3] [i_1])), (9223372036854775795LL)))), (((((/* implicit */_Bool) ((-23) % (((/* implicit */int) (signed char)-1))))) ? (arr_5 [(_Bool)1]) : (((/* implicit */unsigned long long int) min((3896009554U), (((/* implicit */unsigned int) (_Bool)0)))))))));
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(686491537U)))) > (min((arr_5 [i_2]), (((/* implicit */unsigned long long int) (~(-1LL))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
}
