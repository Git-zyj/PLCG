/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167331
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
    var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (9089723110396270465LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((unsigned int) (signed char)82)))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) var_11)) - (21622))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0 + 1] [i_1]) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_1]))))) ? (((9089723110396270465LL) * (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (_Bool)0)))))));
                    var_18 = ((((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-82)), ((short)1023)))) ? (arr_5 [i_2] [i_1] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_13))));
                    arr_8 [i_2] [i_0] &= ((/* implicit */short) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))), (((long long int) max((1414482064348610220LL), (((/* implicit */long long int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (!(((((/* implicit */int) (signed char)-7)) != (((/* implicit */int) (_Bool)1))))));
}
