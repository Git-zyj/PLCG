/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182863
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
    var_12 = ((/* implicit */unsigned int) min((var_12), (var_2)));
    var_13 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) (_Bool)1)))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */int) var_4)), (var_7))), (((/* implicit */int) var_5))))) ? (((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1758243818)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)37216)) * (((/* implicit */int) (unsigned short)16253)))))));
                    var_15 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (_Bool)1)))) | ((~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_9);
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_2) >> (((/* implicit */int) (_Bool)1)))), (max((var_9), (((/* implicit */unsigned int) var_8))))))) ? (min((1091369593U), (((/* implicit */unsigned int) (unsigned char)208)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5))))));
}
