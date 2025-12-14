/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135302
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
    var_14 |= (signed char)98;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((var_15), (var_9)));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_5 [i_0 - 2]))) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-98)))))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)))) ? (max((((/* implicit */unsigned int) var_11)), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11)))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_0] [i_1] [i_2]))) || (((/* implicit */_Bool) ((int) (signed char)-90))))))));
                    var_16 -= ((/* implicit */int) ((min((max((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_2])), (var_3))), (((/* implicit */unsigned int) (signed char)89)))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
    var_17 *= (signed char)98;
}
