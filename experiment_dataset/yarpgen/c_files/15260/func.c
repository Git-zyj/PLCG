/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15260
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
    var_16 = ((/* implicit */_Bool) var_3);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 1580251345)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_5)))))))) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_1 [(unsigned char)11])) : (((/* implicit */int) (unsigned char)184)))) : ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_2] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    arr_10 [4] [i_0] = ((/* implicit */short) -5984319246657175712LL);
                    arr_11 [i_0] = ((/* implicit */short) arr_1 [i_1]);
                }
            } 
        } 
    } 
}
