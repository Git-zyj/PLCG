/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124103
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
    var_10 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_9))))), (((/* implicit */unsigned int) ((short) (-(((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((var_6) ? (((var_4) ^ (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2]))))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */long long int) var_9)) : (var_8)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0]))))));
                    var_11 += ((/* implicit */unsigned long long int) var_6);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_5))));
}
