/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105392
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (var_3)))) ? (var_3) : (((var_2) ? (var_5) : (var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) (_Bool)0))))) ? (max((var_3), (var_5))) : (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((((_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (1069547520) : (((/* implicit */int) (unsigned char)54)))))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))) : ((-(var_5)))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_11)))))) : (((((/* implicit */_Bool) ((var_11) * (var_1)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_6)) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_11)) <= (var_12))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_6)) : (var_4))) : (((/* implicit */unsigned long long int) (-(var_6))))))) ? (((/* implicit */int) var_2)) : (((((((/* implicit */int) ((signed char) var_7))) + (2147483647))) >> (((((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned long long int) var_5)))) - (8251016753839409338ULL)))))));
    var_15 = ((/* implicit */signed char) var_4);
}
