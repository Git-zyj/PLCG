/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13852
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) & ((-(var_9)))));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1047944518)), (var_4)))) && (((/* implicit */_Bool) var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)40764)) && (((/* implicit */_Bool) ((signed char) -974476972)))));
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) arr_2 [4U] [i_0 - 3]))))))));
            }
        } 
    } 
}
