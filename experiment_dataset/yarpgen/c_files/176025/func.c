/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176025
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_8)) : (12460369105647914376ULL)))) ? (min((((/* implicit */unsigned long long int) var_13)), (var_18))) : ((+(var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned int) 3685180453U))))) : (min((((/* implicit */unsigned long long int) min((3685180453U), (((/* implicit */unsigned int) var_17))))), (((unsigned long long int) 609786842U))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_21 ^= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (signed char)-43)), (3685180453U)))));
                    arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)44)) - (((/* implicit */int) (unsigned char)212))));
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */int) ((var_1) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))))) > (((/* implicit */int) var_10)));
}
