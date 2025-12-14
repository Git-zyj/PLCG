/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103203
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_10 = ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_2)), (var_4)))))) ? ((~(((((/* implicit */long long int) var_4)) ^ (var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((818640044U), (((/* implicit */unsigned int) (unsigned short)41504))))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) var_0)))) : (((var_7) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))));
        var_11 = ((/* implicit */unsigned long long int) var_7);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))) ^ (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (min((((/* implicit */unsigned int) var_2)), (var_4))) : (((/* implicit */unsigned int) var_6)))))));
                    var_13 = var_5;
                }
            } 
        } 
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) ? (max((var_6), (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (var_6)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_1)))))));
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))), (((/* implicit */long long int) ((671133404) - (var_6))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_1)) ? (var_5) : (var_6))))) : ((-(var_5)))));
}
