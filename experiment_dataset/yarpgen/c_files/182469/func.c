/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182469
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_1))));
    var_19 &= ((/* implicit */long long int) (!(var_13)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) (_Bool)1);
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9007199254740960ULL)) ? (6166863981034667138LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                    var_21 = (!(((/* implicit */_Bool) 9007199254740970ULL)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) var_3)) ? (min((9007199254740960ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) var_12))))))))));
}
