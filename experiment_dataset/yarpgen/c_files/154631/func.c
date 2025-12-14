/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154631
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
    var_18 = ((unsigned char) (+(((/* implicit */int) var_6))));
    var_19 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) arr_2 [i_0]);
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_4))))), (max((arr_4 [i_1]), (((/* implicit */unsigned short) arr_1 [i_0] [i_0])))))), (((/* implicit */unsigned short) (!(arr_2 [i_1])))))))));
            }
        } 
    } 
    var_21 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
}
