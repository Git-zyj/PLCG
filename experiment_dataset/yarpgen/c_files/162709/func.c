/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162709
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_10))))) : (862491762620367046LL)))) ? (((max((var_4), (((/* implicit */int) var_11)))) & (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (var_4)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [i_1] = ((/* implicit */signed char) (~((~(arr_9 [(unsigned char)0] [i_0 + 1] [i_0 + 1])))));
                    var_16 -= (~(((/* implicit */int) (unsigned short)6668)));
                }
            } 
        } 
    } 
    var_17 = 2080374784;
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_8))))) | (min((max((-24LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))))));
    var_19 -= ((/* implicit */_Bool) ((unsigned char) var_11));
}
