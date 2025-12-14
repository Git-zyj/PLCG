/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129016
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
    var_17 &= 2278960412U;
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((2278960412U), (var_12))), (var_15)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (0U) : (11U)))) ? (((((/* implicit */_Bool) 3144016923U)) ? (0U) : (1566220022U))) : (4294967285U))))));
    var_19 = 2035478006U;
    var_20 = ((/* implicit */unsigned int) max((var_20), (((min((var_1), ((+(var_14))))) / (var_7)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_21 = max((((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0]) : (((arr_4 [4U] [2U]) + (2805589226U))))), (((unsigned int) arr_3 [i_0])));
                arr_6 [i_0] [i_0] = ((unsigned int) ((unsigned int) 2035478031U));
            }
        } 
    } 
}
