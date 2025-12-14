/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124171
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) (~(((((6291456) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))) ? (((/* implicit */int) arr_3 [i_1] [i_0])) : (((/* implicit */int) min((arr_3 [i_1] [i_0]), (((/* implicit */short) var_4)))))))));
                var_17 = ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (((-(((/* implicit */int) var_8)))) / ((+(((/* implicit */int) min((var_11), ((unsigned char)138))))))));
    var_19 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) <= (((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))))));
    var_20 *= ((/* implicit */unsigned char) ((unsigned long long int) var_8));
}
