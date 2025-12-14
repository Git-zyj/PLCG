/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136687
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
    var_20 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65511)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    var_21 |= ((/* implicit */_Bool) var_17);
    var_22 = (-(min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_0)) : (var_15))), (((/* implicit */long long int) var_14)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((unsigned int) arr_2 [i_0]))))) ? ((((-(((/* implicit */int) var_14)))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_0])))))) : (((((/* implicit */_Bool) ((unsigned short) arr_1 [i_1]))) ? (((((/* implicit */int) (unsigned char)39)) << (0))) : (((/* implicit */int) var_16))))));
                arr_6 [(unsigned short)8] = ((/* implicit */short) min((max((((/* implicit */int) (unsigned short)29653)), (2147483647))), (((/* implicit */int) ((_Bool) (_Bool)1)))));
            }
        } 
    } 
    var_24 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) | (var_0)));
}
