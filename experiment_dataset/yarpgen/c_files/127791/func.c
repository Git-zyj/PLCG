/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127791
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
    var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_13))));
    var_21 += ((/* implicit */_Bool) ((max(((+(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_16)))))) | (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5610)) ? (-568996783) : (((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */int) (signed char)-119)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : (((/* implicit */int) (unsigned char)55))))) ? (max(((~(((/* implicit */int) arr_0 [i_1])))), ((~(var_15))))) : ((~(((/* implicit */int) (unsigned short)47575)))));
                var_23 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) -1629367528)) ? (3152945724984687299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [(unsigned short)14] [i_1])) != (((/* implicit */int) min((var_3), (((/* implicit */signed char) arr_0 [i_1]))))))))) : (13236429565310911566ULL)));
            }
        } 
    } 
}
