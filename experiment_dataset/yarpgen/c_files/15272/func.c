/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15272
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_10 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_1)))))) ? (((int) arr_0 [i_1])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))) < (0U))))));
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned long long int) arr_2 [i_2]))))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 4294967282U)) : (var_6))))) : (min((max((4294967295U), (0U))), (((/* implicit */unsigned int) (signed char)11))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) var_6);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 2953219987U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6062)))));
}
