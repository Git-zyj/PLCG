/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173984
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
    var_15 = ((/* implicit */unsigned char) (+(var_9)));
    var_16 *= ((/* implicit */long long int) ((int) (_Bool)1));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-12))));
                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) max((arr_1 [i_0 - 2] [i_0 - 1]), (((/* implicit */signed char) var_10)))))));
                var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(var_14)))) ? (arr_3 [(unsigned char)4]) : (arr_3 [i_0 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_8)))) ? (arr_2 [i_0 - 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned int) max((var_12), (((/* implicit */long long int) var_2))));
}
