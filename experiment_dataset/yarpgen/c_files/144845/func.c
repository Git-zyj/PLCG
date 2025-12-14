/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144845
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] &= ((/* implicit */short) arr_2 [i_0] [i_0]);
                var_15 = (-(((arr_1 [i_1]) + (((/* implicit */long long int) arr_0 [i_0] [i_0])))));
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) min((var_5), (var_9)))) : (((/* implicit */int) max((arr_3 [i_0] [i_1] [(unsigned char)9]), (((/* implicit */signed char) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)109)))))) : (arr_1 [i_1])));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (var_13) : (((/* implicit */unsigned long long int) (-(var_1)))))))));
    var_17 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) var_10)) < (((((/* implicit */_Bool) 1074397956618245812LL)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))) < (((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_9)) - (189)))))))));
}
