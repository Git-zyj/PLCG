/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11824
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_0] &= ((/* implicit */unsigned int) max((-8667989965537507556LL), (((/* implicit */long long int) (unsigned char)58))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((min(((~(var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2540866828691647574LL) : (((/* implicit */long long int) var_10)))))))))))));
                var_14 ^= ((/* implicit */int) (+(126LL)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_11))));
}
