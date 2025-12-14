/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154220
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), ((~((~(min((((/* implicit */unsigned int) var_13)), (arr_1 [i_1])))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned short)11891), ((unsigned short)12622)))) ^ (((/* implicit */int) arr_4 [i_0] [6U]))));
                var_18 = ((/* implicit */long long int) ((max((((/* implicit */int) ((451271693U) < (var_7)))), ((-(var_5))))) << (((((/* implicit */int) (short)511)) - (510)))));
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) var_13)) : (arr_5 [i_0]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) max((var_19), ((+(((((var_5) + (2147483647))) >> (((((/* implicit */int) var_11)) - (151)))))))));
    var_20 = ((/* implicit */unsigned int) (+(min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (-310109019))), (((((/* implicit */int) var_13)) * (((/* implicit */int) (unsigned char)9))))))));
}
