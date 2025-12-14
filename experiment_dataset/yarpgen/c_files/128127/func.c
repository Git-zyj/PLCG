/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128127
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)10558))));
                var_17 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 2] [i_1]))) < (arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_8);
    var_19 = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) var_0)) ? (9530410768053677444ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) (signed char)-103))));
}
