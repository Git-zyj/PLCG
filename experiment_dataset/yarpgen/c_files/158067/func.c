/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158067
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
    var_20 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >> ((((-(((/* implicit */int) (signed char)41)))) + (53)))))) : (max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-42)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (signed char)2))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    var_21 = ((signed char) ((var_19) & (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_1 [i_2])))));
                    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 173330605U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (173330605U)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 449303823U)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)97)) ? (var_0) : (var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)40)) + (((/* implicit */int) (signed char)-37))))) : (((((/* implicit */_Bool) (signed char)-2)) ? (33423360U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118)))))))));
                }
            } 
        } 
    } 
}
