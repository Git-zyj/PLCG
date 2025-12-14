/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161511
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [(short)12] = ((/* implicit */signed char) (+(((/* implicit */int) ((0) <= (((/* implicit */int) var_11)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((arr_1 [i_1 + 2]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 18)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15))))))))) : (var_2)));
    var_20 = ((/* implicit */unsigned long long int) 5);
}
