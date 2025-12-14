/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141262
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
    var_13 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)119)))))), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_14 |= ((/* implicit */int) ((unsigned int) var_6));
                var_15 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) max(((unsigned short)16384), (((/* implicit */unsigned short) (_Bool)1))))), (((arr_2 [i_0]) ? (((/* implicit */int) (unsigned short)18461)) : (((/* implicit */int) (_Bool)0))))))));
                var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_10)))) ^ (max((((/* implicit */long long int) var_10)), (var_6)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (short)5745)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)0)))))) : (((((/* implicit */_Bool) (+(var_6)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((int) max((var_6), (((/* implicit */long long int) var_9))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 2912318740U)) && ((_Bool)1)))))));
}
