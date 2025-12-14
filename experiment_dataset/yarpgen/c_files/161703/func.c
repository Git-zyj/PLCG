/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161703
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
    var_14 = ((/* implicit */unsigned char) max((((((/* implicit */int) var_2)) * (((((var_0) + (2147483647))) >> (((var_1) - (1028974700))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_2) ? (var_7) : (((/* implicit */int) var_13))))) && (((((/* implicit */unsigned long long int) var_6)) <= (2ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (-(((arr_1 [i_0] [i_1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
                arr_6 [20ULL] [20ULL] |= ((/* implicit */unsigned char) var_11);
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned char) (~(var_6)));
}
