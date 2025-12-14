/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114169
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = (short)-11;
                arr_4 [(short)1] [i_0] [13U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))) : (((unsigned int) (short)-26234))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) 2255527497U)) ? (2639134710U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)15] [i_1])))))))) ? (((((unsigned int) 3001635156U)) & (max((4294967295U), (0U))))) : (arr_0 [i_0]));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_13)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2255527501U))))) : (((/* implicit */int) ((short) var_9))))), (((/* implicit */int) var_7))));
    var_17 &= ((/* implicit */short) ((unsigned int) (-((+(var_2))))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            for (unsigned int i_4 = 2; i_4 < 15; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) max((var_18), (var_1)));
                    var_19 += ((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-2702)))) - (((/* implicit */int) arr_7 [i_4 + 2]))));
                }
            } 
        } 
    } 
}
