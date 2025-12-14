/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156912
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
    var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1769459325)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_8))))) : (min((var_1), (var_1)))));
    var_13 |= ((/* implicit */unsigned char) (-(var_6)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (-(min((arr_0 [i_0]), (arr_0 [i_0])))));
                var_15 = ((/* implicit */_Bool) arr_1 [i_1]);
                var_16 += ((/* implicit */unsigned long long int) ((signed char) ((arr_4 [(unsigned char)10]) & (4197831856433501307ULL))));
                var_17 = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
            }
        } 
    } 
}
