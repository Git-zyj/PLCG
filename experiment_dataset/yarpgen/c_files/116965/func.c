/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116965
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
    var_19 = ((/* implicit */unsigned int) ((max((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) (_Bool)1))))), (var_15))) ^ (min((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)4)), (var_6)))), (-536684771)))));
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)35)))))));
    var_21 = var_9;
    var_22 = ((/* implicit */_Bool) max((max((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)12748))))), (var_12))), (max((var_12), (((/* implicit */signed char) ((var_4) && (((/* implicit */_Bool) (signed char)20)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [(signed char)14] [i_0] = min(((~(3153167885U))), (((/* implicit */unsigned int) (_Bool)1)));
                var_23 = ((/* implicit */unsigned short) ((1141799393U) <= (min((((((/* implicit */unsigned int) ((/* implicit */int) var_17))) + (arr_1 [i_1]))), (arr_1 [i_1])))));
            }
        } 
    } 
}
