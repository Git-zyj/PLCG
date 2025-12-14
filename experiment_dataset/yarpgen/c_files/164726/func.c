/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164726
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
    var_19 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned char) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) arr_3 [i_0])))))))));
                var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                arr_5 [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) var_18)), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) var_5)))))));
    var_23 = ((/* implicit */signed char) var_14);
}
