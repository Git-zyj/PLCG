/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148673
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
    var_16 ^= ((_Bool) ((((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_15))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) var_15)) == (var_9))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = arr_0 [i_0];
                arr_7 [i_0] = min((((/* implicit */unsigned long long int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 1])))))), (arr_2 [i_0 - 2] [i_1 + 3]));
                var_17 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_3 [i_0 + 1])) - (((/* implicit */int) arr_3 [i_0 + 1]))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned int) ((_Bool) var_12));
    var_19 = ((_Bool) var_0);
}
