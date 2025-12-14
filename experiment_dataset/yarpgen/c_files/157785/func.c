/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157785
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = min(((~(((((/* implicit */_Bool) 3431398201U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) : (2129503463U))))), (353010685U));
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2]))));
                var_15 = ((/* implicit */signed char) ((1530778410U) << (((((((((/* implicit */int) (signed char)-10)) + (2147483647))) >> (((((/* implicit */int) (signed char)-29)) / (((/* implicit */int) (signed char)84)))))) - (2147483636)))));
                arr_7 [i_1] [i_1] [8U] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)70))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((255043322U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))))))) : (((((/* implicit */_Bool) (signed char)36)) ? (2428910817U) : (933031175U)))));
            }
        } 
    } 
    var_16 -= min((((/* implicit */unsigned int) ((min((var_6), (var_6))) < (((((/* implicit */_Bool) var_9)) ? (863569094U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))), (((((/* implicit */_Bool) (~(727889581U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (signed char)-85))))) : (((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))) : (2582911273U))))));
}
