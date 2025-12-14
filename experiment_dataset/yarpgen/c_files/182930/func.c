/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182930
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
    var_16 |= ((/* implicit */signed char) ((unsigned char) (signed char)-127));
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(var_15)))), (((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) min(((unsigned char)202), (((/* implicit */unsigned char) var_15)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [6U])) * (((/* implicit */int) (_Bool)1)))))));
                var_19 ^= ((/* implicit */long long int) arr_1 [(short)0]);
                var_20 = (+(((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1] [i_0])) ? (arr_4 [i_0] [i_1 - 1] [i_0]) : (arr_4 [i_0 + 1] [i_1] [i_0]))));
                var_21 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            }
        } 
    } 
}
